#include<iostream>
#include<string>
using namespace std;
int main() {
	string str = "Hello World!";
	size_t pos = str.find("World");//返回“World”出现的索引
	cout << pos << endl;//6
	pos = str.find("World", 2);//从2索引开始找并返回
	cout << pos << endl;//6
	string s = str.substr(pos, 5);//返回6索引开始5长度字符串，“World”
	cout << s << endl;
	cout<<str.insert(5, s)<<endl;//插入s到5索引位置，“HelloWorld World！”
	cout << str.erase(5, 5) << endl;//删除5索引开始的5个元素“Hello World！”

}
