#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int sum(int var1,int var2)
{
	return var1+var2;
}
int prod(int var1,int var2)
{
	return var1*var2;
}
int sqrt(int var1)
{
	return var1;
}
int divd(int var1,int var2)
{
	return var1/var2;
}
int mode(int var1,int var2)
{
	return var1%var2;
}
int sub(int var1,int var2)
{
	return var1-var2;
}
int log(int var1)
{
	return var1;
}
int main()
{
	int var1,var2,res1,res2,res3,res4,res5,res6,res7;
	cin>>var1;
	cin>>var2;
	res1=sum(var1,var2);
	res2=prod(var1,var2);
	res3=sqrt(var1);
	res4=divd(var1,var2);
	res5=mode(var1,var2);
	res6=sub(var1,var2);
	res7=log(var1);
	cout<<"The sum is= "<<res1<<endl;
	cout<<"The product is= "<<res2<<endl;
	cout<<"The square root is= "<<res3<<endl;
	cout<<"The division is= "<<res4<<endl;
	cout<<"The modulus is= "<<res5<<endl;
	cout<<"The subtraction is= "<<res6<<endl;
	cout<<"The log is ="<<res7<<endl;
	return 0;
}