#include "Array.h"
#include<iostream>
using namespace std;
template <class Type>
void Array<Type>::getArray()//私有函数getArray用于创建数组存储空间
{
	elements=new Type[ArraySize];
	if(elements==NULL)
	{
		ArraySize=0;
		cerr<<"存储空间分配错误！"<<endl;
		return ;
	}
}
template <class Type>//构造函数
Array<Type>::Array(int sz)
{
	if(sz<=0)
	{
		ArraySize=0;
		cerr<<"非法数组大小"<<endl;
		return ;
	}
	ArraySize=sz;
	getArray();
}
//复制构造函数
template <class Type>
Array<Type>::Array(Array<Type> &x)
{
	int n=x.ArraySize;
	ArraySize=n;
	elements=new Type[n];
	if(elements==NULL)
	{
		ArraySize=0;
		cerr<<"存储分配错误！"<<endl;
		return ;
	}
	Type *srcptr=x.elements;
	Type *destptr=elements;
	while(n--)
		*destptr++=*srcptr++;
}
//安数组名和小标ｉ获取数组元素的值
template <class Type>
Type& Array<Type>::operator[](int i)
{
	if(i<0||i>ArraySize-1)
	{
		cerr<<"数组下标超界"<<endl;
		return ;
	}
	return elements[i];
}
//扩充数组
template <class Type>
void Array<Type>::ReSize(int sz)
{
	if(sz>=0&&sz!=ArraySize)
	{
		Type *newarray=new Type[sz];//创建数组
		if(newarray==NULL)
		{
			cerr<<"存储分配错误"<<endl;
			return ;
		}
		int n=(sz<=ArraySize) ? sz:ArraySize;//按新的大小传送元素个数
		Type *srcptr=elements;//原数组指针
		Type *destpr=newarray;//目标数组指针
		while(n--)
			*destptr++=*srcptr++;
		delete[] elements;
		elements=newarray;
		ArraySize=sz;
	}
}
