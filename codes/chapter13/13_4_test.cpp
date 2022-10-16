#include <iostream>
#include <string>
#include <set>
using namespace std;

class Message;
class Folder
{
public:
    void addMsg(Message *);
    void remMsg(Message *);
    // ~Folder();

private:
    set<Message *> msgs;
};

void Folder::addMsg(Message *msg)
{
    msgs.insert(msg);
}

void Folder::remMsg(Message *msg)
{
    msgs.erase(msg);
}

class Message
{
    friend class Folder; //有元类
    friend void swap(Message &, Message &);

public:
    explicit Message(const string &str = "") : content(str) {}
    Message(const Message &);
    //将消息添加到Message
    void save(Folder &);
    void remove(Folder &);
    ~Message();
    Message &operator=(const Message &);

    bool addFolder(Folder &);
    bool remFolder(Folder &);

private:
    string content;        //消息的内容
    set<Folder *> folders; //包含 message 的 folders
    //将本message 添加到指定的元素
    void add_to_Folders(const Message &);
    //从folders中的每个Folder中删除本Message
    void remove_from_Folders();
};
// const Folder &folder 不能将 const插入非 const里面
//  Folder folder 会拷贝构造  浪费性能
void Message::save(Folder &folder)
{
    folders.insert(&folder);
    folder.addMsg(this);
}

void Message::remove(Folder &folder)
{
    folders.erase(&folder);
    folder.remMsg(this);
}

//拷贝构造函数
//内容拷贝
// folders 拷贝
Message::Message(const Message &msg) : content(msg.content), folders(msg.folders)
{
    add_to_Folders(msg);
}

void Message::add_to_Folders(const Message &msg)
{
    for (const auto &flolder : msg.folders)
    {
        flolder->addMsg(this);
    }
}

void Message::remove_from_Folders()
{
    for (const auto &flolder : folders)
    {
        flolder->remMsg(this);
    }
}
Message::~Message()
{
    remove_from_Folders();
}
//拷贝
// 先赋值拷贝 + swap 更加消耗性能 copy 构造  + swap + 析构
// 更加消耗性能 函数多次重复执行
Message &Message::operator=(const Message &msg)
{
    remove_from_Folders();
    content = msg.content;
    folders = msg.folders;
    add_to_Folders(msg);
    return *this;
}
void swap(Message &msg1, Message &msg2)
{
    if (&msg1 == &msg2)
        return;
    using std::swap;

    msg1.remove_from_Folders();
    msg2.remove_from_Folders();

    swap(msg1.content, msg2.content);
    swap(msg1.folders, msg2.folders);

    msg1.add_to_Folders(msg1);
    msg2.add_to_Folders(msg2);
    cout << "swap()" << endl;
}
bool Message::addFolder(Folder &folder)
{
    auto count = folders.count(&folder);
    folders.insert(&folder);
    return !count;
}
bool Message::remFolder(Folder &folder)
{
    auto count = folders.erase(&folder);
    return count;
}
int main(int argc, char const *argv[])
{

    return 0;
}
/**
 * 合成拷贝
 * message 会拷贝最新 但是 message 不会添加到 folder
 * operator 也不会 删除 以前的folder 和添加
 *
 */