#include<cstring>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
	char buf[20];
	char temp;
	cin.get(temp);
	cout<<temp<<endl;
	cout<<"请输入一段文本：\n";
	cin.ignore(5);
	cin.getline(buf,10);
	cout<<buf<<endl;
	cout<<endl;
	char p;
	cout<<"请输入一段文本：\n";
	while(cin.peek()!='\n')
	{
		cout<<(p=cin.get());
	}
	cout<<endl;
	return 0;
}
