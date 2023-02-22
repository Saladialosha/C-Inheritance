//  inheritance (access specifier)
#include<iostream>
using namespace std;
class b
{
	int a ;
	int b ;
	public:
		 get()
		{
			cout<<" enter the values of a and b"<<endl;
			cin>>a>>b;
		}
		 mul()
		{
			int c=a*b;
			return c;
		}
};
class d : private b
{
	public:
	void display()
	{
		int d=get();
		int e=mul();
		cout<<e<<endl;
	}
};
main()
{
	d obj;
	obj.display();
}
