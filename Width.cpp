#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int width=4;
	char str[20];
	cout<<"请输入一段文本："<<endl;
	cin.width(5);//每次接收４个字符，其他的放在流中等待接收
	while((cin>>str)!='#')
	{
		cout.width(width++);//将４个字符输出，设置每次输出的域宽增加１
		cout<<str<<endl;//输出字符
		cin.width(5);//设置接收４个字符
	}
	return 0;

}
