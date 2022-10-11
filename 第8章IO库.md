# 第8章IO库
## 8.1 IO类
```
iostream:
    istream wistream
    ostream  wostream
    iostream wiostream

fstream:
  ifstream wifstream
  ofstream wosfsteam
  fstream  wfstream

sstream:
  istringstream  wistringstream
  ostringstream  wostringstream
  stringstream   wstringstream

w开头的代表的是宽字符(wchar_t类型) 
```
#### IO类型的关系
```
ifstream 和 istringstream 都继承istream
```
### 8.1.1 IO对象无拷贝和赋值
```
ofstream out1,out2;
out1=out2;//错误 io对象不允许 =
IO对象不允许拷贝构造

由于拷贝构造和拷贝不允许
所以函数返回 传入参数不允许 以值方式传入
函数传参 因为函数传参相当于实参赋值构造形参
返回也是

由于读和写会改变对象内部参数 所以不要以const的方式传递
```
### 8.1.2 条件状态
```
于机器无关
状态类型
strm::iostate

strm::badbit
  流崩溃 
  系统级错误,如不可恢复的读写错误
strm::failbit 
   Io操作失败
   可以修正的错误
   如果读取一个字符却读取数值
strm::eofbit 到达文件结尾

strm::goodbit
        流未处于错误状态

s.eof()
s.fail()
s.bad()
s.fail()
s.good()
s.clear() 将流的状态设置为有效
s.clear(flag) 将流设置flag 位 

s.setstate() 设置state的状态
s.rdstate() 返回 strm::iostram 类型



读取结束
strm::eofbit 和 strm::fail 都会被置位

strm::goodbit 0 表示位出现错误

当 badbit failbit  or eofbit 任何一个被设置 goobit 都不为0


```
### 8.1.3 管理输出缓冲
```
缓冲区刷新数据到设备

1.程序的正常的执行结束
2.缓冲区满时
3.endl
4.unitbuf 设置流的内部状态
  cerr 是设置unitbug  错误消息写到缓冲区立马刷新到设备
5.cin cerr 关联到 cout 操纵 会读了之后马上刷到cout里面


换行刷新
endl;

刷新缓冲区
flush()

xxx+'\0' 在刷新到缓存区
ends()


unibuf 操作符
cout<<unitbuf;告诉流接下来每次操作都会flush操作

cout<<nounitbug;//恢复正常系统管理的刷新机制
```
#### 警告:程序崩溃缓存区不会被刷新
```
我们输出字符后
程序崩溃
可能设备并没有数据 原因时程序崩溃之前字符还在缓存区没有被刷入设备
```
#### 关联输入和输出流
```

```