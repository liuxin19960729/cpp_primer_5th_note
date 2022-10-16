#include <iostream>
#include <memory>
#include <utility>
#include <cassert>
#include <initializer_list>
using namespace std;

class StrVec
{
public:
    StrVec() : cap(nullptr), elements(nullptr), first_free(nullptr){};
    StrVec(const StrVec &);
    StrVec(initializer_list<string> list);
    StrVec &operator=(const StrVec &);
    ~StrVec();
    void push_back(const string &);
    size_t size() const { return first_free - elements; }
    size_t capacity() const { return cap - elements; }
    string *begin() const { return elements; };
    string *end() const { return first_free; }
    int reserve(const size_t &n = 0);
    void resize(const size_t &n);

private:
    static allocator<string> alloc;
    string *cap;        //末尾的位置
    string *elements;   //内存分配首元素
    string *first_free; //实际元素的位置
    pair<string *, string *> alloc_n_copy(const string *, const string *);
    void free(); //销毁元素并且释放内存
    //检查并且重新分配
    void chk_n_alloc()
    {
        if (size() == capacity())
            reallocate();
    }
    void reallocate();
    int _reserve = 2;
};
allocator<string> StrVec::alloc;

void StrVec::push_back(const string &str)
{
    chk_n_alloc();
    //初始化构造 并且 first_free++ 向后移动
    alloc.construct(first_free++, str);
}
pair<string *, string *> StrVec::alloc_n_copy(const string *b, const string *e)
{
    auto data = alloc.allocate(e - b);

    return {data, uninitialized_copy(b, e, data)};
}
void StrVec::free()
{
    for_each(begin(), end(), [](string &p)
             {
          cout<<"destory()"<<endl;
          alloc.destroy(&p); });

    alloc.deallocate(elements, cap - elements);
}

StrVec::StrVec(const StrVec &strv)
{
    auto newData = alloc_n_copy(strv.begin(), strv.end());
    elements = newData.first;
    first_free = cap = newData.second;
}
StrVec::StrVec(initializer_list<string> list) : StrVec()
{
    auto newData = alloc_n_copy(list.begin(), list.end());
    elements = newData.first;
    first_free = cap = newData.second;
}
StrVec::~StrVec()
{
    free();
}
StrVec &StrVec::operator=(const StrVec &strvec)
{
    auto data = alloc_n_copy(strvec.begin(), strvec.end());
    free(); //释放当前自己的内容
    elements = data.first;
    cap = first_free = data.second;
    return *this;
}
void StrVec::reallocate()
{
    auto newcapacity = size() ? size() + _reserve : _reserve;
    auto newData = alloc.allocate(newcapacity);
    auto dest = newData;
    auto elem = elements;
    for (size_t i = 0; i != size(); ++i)
    {
        alloc.construct(dest++, move(*elem++));
    }
    free(); //释放旧内存
    elements = newData;
    first_free = dest;
    cap = elements + newcapacity;
}
int StrVec::reserve(const size_t &n)
{
    _reserve = n > _reserve ? n : _reserve;
    return _reserve;
}
void StrVec::resize(const size_t &n)
{
    if (n == size())
        return;
    const size_t sz = size();
    for (auto i = sz; i > n; i--)
    {
        alloc.destroy(--first_free);
    }
    for (auto i = n; i < sz; i++)
    {
        chk_n_alloc();
        alloc.construct(first_free++);
    }
}
int main(int argc, char const *argv[])
{
    StrVec svec{"ss", "ssss"};
    svec.push_back("liuxin");
    for (auto &a : svec)
    {
        cout << a << endl;
    }
    return 0;
}
/**
 * string 拷贝
 * 新的string修改不会影响就的string
 * 我们对string 的拷贝实际是获取的副本
 *
 *
 */