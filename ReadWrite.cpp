#include<cstring>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
	const int SIZE=50;
	char buf[SIZE];
	cout<<"请输入一段文本"<<endl;
	cin.read(buf,20);
	cout<<cin.gcount();
	cout<<"请输入一段文本"<<endl;
	cout.write(buf,20);
	cout<<endl;
	return 0;
}
