#include <iostream>
#include <memory>
#include <utility>
#include <cassert>
/**
 *
 *
 */
using namespace std;
class string_cus
{
public:
    string_cus();
    string_cus(const char *pch);
    string_cus(const string_cus &);
    string_cus(string_cus &&);
    char *begin() const { return element; }
    char *end() const { return element ? eof : nullptr; }
    size_t size() const { return element ? eof - element : 0; }
    const char *c_str() const { return element; }
    ~string_cus();

    string_cus &operator=(const string_cus &);
    void push_back(const char &);
    char *insert(char *iter, const char &);

private:
    static allocator<char> alloc;
    char *cap;
    char *eof;
    char *element;
    void free();
    void chk_alloc();
    pair<char *, char *> realloc(const char *, const char *);
    ssize_t step = 20;
};
allocator<char> string_cus::alloc;
string_cus::string_cus() : cap(nullptr), eof(nullptr), element(nullptr) {}
string_cus::string_cus(const char *pch)
{
    const char *end = pch;
    while (*end != '\0')
        end++;
    auto data = realloc(pch, end);
    element = data.first;
    cap = eof = data.second;
    *eof = '\0';
}
string_cus::string_cus(const string_cus &ostr)
{
    free();
    auto data = realloc(ostr.begin(), ostr.end());
    element = data.first;
    cap = eof = data.second;
    *eof = '\0';
}
string_cus &string_cus::operator=(const string_cus &ostr)
{
    free();
    auto data = realloc(ostr.begin(), ostr.end());
    element = data.first;
    cap = eof = data.second;
    *eof = '\0';
    return *this;
}
string_cus::string_cus(string_cus &&str)
{
    free();
    eof = str.eof;
    element = str.element;
    cap = str.cap;
    str.element = nullptr;
    cout << "right construct" << endl;
}
pair<char *, char *> string_cus::realloc(const char *begin, const char *end)
{
    const auto sz = end - begin + 1;
    auto addr = alloc.allocate(sz);
    return {addr, uninitialized_copy(begin, end, addr)};
}
void string_cus::chk_alloc()
{
    if (eof != cap)
        return;
    const auto sz = size() + step;
    auto addr = alloc.allocate(sz);
    auto eofaddr = uninitialized_copy(begin(), end(), addr);
    *eof = '\0';
    free();
    element = addr;
    eof = eofaddr;
    cap = addr + sz;
}
string_cus::~string_cus()
{
    free();
    cout << "~string_cus" << endl;
}
void string_cus::free()
{
    if (!element)
        return;
    alloc.deallocate(element, cap - element);
}
void string_cus::push_back(const char &ch)
{
    chk_alloc();
    *eof++ = ch;
    *eof = '\0';
}
char *string_cus::insert(char *iter, const char &ch)
{
    chk_alloc();
    auto rend = eof + 1;
    auto lend = eof++;
    while (iter <= lend)
    {
        *rend-- = *lend--;
    }
    *iter = ch;
    return ++iter;
}
int main(int argc, char const *argv[])
{
    string_cus a("ssss");
    a.push_back('g');
    a.insert(a.begin(), 'c');
    a.insert(a.begin(), 'r');
    a.insert(a.begin(), 'r');
    cout << a.c_str() << endl;
    return 0;
}
