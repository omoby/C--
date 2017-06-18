#include<string>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
	cout<<"请输入你的姓名和年龄"<<endl;
	string name;
	int age;
	cin>>name>>age;
	if(age<0)
		cerr<<"\n错误！请确认后重试！"<<endl;
	else 
		cout<<name<<" is "<<age<<" years old"<<endl;
	return 0;
}
