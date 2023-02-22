#include<iostream>
using namespace std;
int x=10;
void func()
{
	int x=2;
	{
		int x=1;
		cout<<::x<<endl;
	}
}
int main()
{
	func();
	return 0;
}
// output is 10 because it is ::==global(outside the function)
