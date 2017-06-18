#include<iostream>
#define MAXandMIN(x,y,max,min) max=((x)>(y) ? (x):(y)); min=((x)<(y) ? (x):(y));
using namespace std;
int main()
{
	int i=3;
	int j=4;
	int max=0;
	int min=0;
	MAXandMIN(i,j,max,min);
	cout<<"max= "<<max<<endl;
	cout<<"min= "<<min<<endl;
	return 0;

}
