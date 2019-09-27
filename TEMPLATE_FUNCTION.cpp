#include<iostream>
using namespace std;
template <typename T>
T sum(T a,T b)
{
	return a+b;
}
int main()
{
	int x,y; float c,d;
	cout<<"Enter two no. for sum ";
	cin>>x>>y;
	cin>>c>>d;
cout<<sum<int>(x,y);
cout<<sum<float>(c,d);
}
