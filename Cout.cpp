#include<cstring>
#include<cstdlib>
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	double result=sqrt(3.0);
	cout<<"对3.0开平方保留1-9位，结果为："<<endl;
	for(int i=0;i<=9;i++)
	{
		cout.precision(i);
		cout<<result<<endl;
	}
	cout<<"当前的输出精度为: "<<cout.precision()<<endl;
	return 0;
}
