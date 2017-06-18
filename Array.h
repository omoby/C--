#ifndef _ARRAY_H
#define _ARRAY_H
const int DefaultSize=100;
template <class Type>
class Array
{
	Type *elements;//数组存放空间
	int ArraySize;//当前长度
	void getArray();//建立数组空间
public:
	Array(int Size=DefaultSize);//构造函数
	Array(const Array<Type>& x);//复制构造函数
　　～Array(){delete []elements; }//析构函数
	Array<Type> &operator=(const Array<Type> & A);//数组复制
	Type& operator[](int i);//取元素值
	int Length() const{
		return ArraySize;
	}//获取数组长度
	void ReSize(int sz);//扩充数组
}
#endif//_ARRRY_H
