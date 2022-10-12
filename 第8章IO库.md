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
#### 8.1.2 练习
[code](./codes/chapter8/8_1_2.cpp)
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

cout<<nounitbuf;//恢复正常系统管理的刷新机制
```
#### 警告:程序崩溃缓存区不会被刷新
```
我们输出字符后
程序崩溃
可能设备并没有数据 原因时程序崩溃之前字符还在缓存区没有被刷入设备
```
#### 关联输入和输出流
```
输入流 和 输入流关联
输入流操作前都会先刷输出流

std 库 将 cout 和 cin进行关联


ostream* tie()
关联 返回 输出流指针
返回 nullptr 没有关联到指针

tie(ostream *) 
  x.tie(&o) 将自己关联到输入流

istream 关联到 outstram
outstream 关联到 oustram 都可以

cin.tie(&cout);//标准库 已经将他们关联到了一起
ostream *old_tie=cin.tie(nullptr);cin不在关联到其他流


cin.tie(&cerr);将cerr 关联

总之在我们读取之前就会先刷新输出流到设备
```
## 文件输入输出
```
#include<fstream>
ifstream 文件读取数据
ofstream 文件写入数据
fsstream 文件读写

>>  <<  getline 等来读写数据


fstream fstream;
  创建一个未绑定的文件流
fstream fstrm(s) 
  s 文件名  string  or c风格字符串
  note:构造参数是explicit 的禁止编译器隐式转换

fstream f(s,mode)

f.open(s);打开文件
    s 文件名
f.close();关闭 流对象

fstrm.is_open() 文件是否打开
```
### 8.2.1 使用文件流对象
```
ifstream ifs(file); file文件绑定到ifsteam 流

ofstream out; 创建对象并且未绑定
```
#### fstream 流代替 iosteam流
```
iostream 流 是 fstream 流的基类
```
#### 成员函数open 和 close
```
open() 失败 failbit会被置位

if(out) 检查open 是否成功


note:当一个文件已经打开,在次open()回失败 并且 faildbit 位会被设置上

要想关联到令一个文件
  in.close()
  in.open(file);关联到另一个文件

  打开成功  good()==true
```
#### 自动构造和析构
```
文件流对象析构会自动调用close
```
#### 8.2.1 练习
[code](./codes/chapter8/8_2_1.cpp)

### 8.2.2 文件模式
```
in 读
out 写
app   append 每次操作前定位到文件末尾
ate 定位到文件末尾
trunc 阶段文件
binary 以二进制方式进行io

ofstream fstream    out模式

ifstream fstream     in模式

out 模式才能trunc

app 只有在 out模块并且trunc没有被设置才能使用

ate 和 binary 可以对应任何类型的文件流对象,并且可以和其他文件流对象组合

文件流对象的默认模式
fstream in out
ifstream in
ofstream out
```
#### out模式下打开文件会丢失已经有的数据
```
ofstream out(file) 默认out 丢失数据(ofstream out(file,ofstream::out)

隐含截断文件
ofstream out(file,ofstream::out|ofstream::trunc)
//append模式
ofstream out(file,ofstream::app);//默认指定 out
ofstream out(file,ofstream::app|ofstream::out)
```
#### 每次调用open时都可以设定文件模式
```
out.open(file,mode)

out 
   隐式着同时是 trunc
out app or app 意味着保留文件内容从末尾开始写数据
```

#### 8.2.2 练习
[code](./codes/chapter8/8_2_2.cpp)

## 8.3 string 流
```

```