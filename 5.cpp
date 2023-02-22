#include<iostream>
using namespace std;
class test
{
	int value;
	public:
		test(int v=0)
		{
			value=v;
		}
		int getvalue()
		{
			return value;
		}
		
};
int main()
{
 test t;
	cout<<t.getvalue();
	return 0;
}
