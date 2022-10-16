#include <iostream>
#include <memory>
#include <utility>
using namespace std;

class StrVec
{
public:
    StrVec() : cap(nullptr), elements(nullptr), first_free(nullptr){};
    StrVec(const StrVec &);
    StrVec &operator=(const StrVec &);
    ~StrVec();
    void push_back(const string &);
    size_t size() const { return first_free - elements; }
    size_t capacity() const { return cap - elements; }
    string *begin() const { return elements; };
    string *end() const { return first_free; }

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
};
allocator<string> StrVec::alloc;

void StrVec::push_back(const string &str)
{
    chk_n_alloc();
    //初始化构造 并且 first_free++ 向后移动
    alloc.construct(first_free++, str);
}
int main(int argc, char const *argv[])
{

    return 0;
}
