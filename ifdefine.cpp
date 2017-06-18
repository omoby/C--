#include<iostream>
#define DEBUG
using namespace std;
int main()
{
#ifdef DEBUG
	cout<<"Begin..."<<endl;
#else
	cout<<"Cannot Begin..."<<endl;
#endif
	int array[10];
	for(int i=0;i<10;i++)
	{
		array[i]=i;
#ifdef DEBUG
	cerr<<"i= "<<i<<endl;
	cerr<<"array[i]= "<<array[i]<<endl;
#endif
	}
}
