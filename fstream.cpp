#include<fstream>
#include<iostream>
#include<cstdlib>
using namespace std;
int  main()
{
	ifstream inf;
	inf.open("test.txt");
	if(!inf)
	{
		cerr<<"打开文件失败！"<<endl;
		return 0 ;
	}
	int x;
	while(inf>>x)
	{
		cout<<x<<endl;
	}
	inf.close();
	ofstream onf;
	onf.open("output.txt");
	if(!onf)
	{
		cerr<<"打开文件失败！"<<endl;
		return 0;
	}
	for(int i=1;i<=10;i++)
	{
		onf<<i<<endl;
	}
	onf.close();
	return 0;
}
