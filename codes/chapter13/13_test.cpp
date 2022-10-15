class A
{
public:
    A(){};
    explicit A(const A &a)
    {
    }
};
int main(int argc, char const *argv[])
{
    A a;
    //A b=a;//error explicit 不能copy 初始化
    A c(a);// 只能直接调用构造
    return 0;
}
