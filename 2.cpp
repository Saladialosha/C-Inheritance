// inheritance  (access specifier)
#include<iostream>
using namespace std;
class B
{
	protected:
		int x;
		public:
		void get()
			{
				cout<<" enter the value for x"<<endl;
				cin>>x;
			}
			void display()
			{
				cout<<" value of x is ="<<x<<endl;
			}
			void increment()
			{
				x++;
			}
};
class D: protected B
{
public:
	void gett()
	{
get();
increment();
display();
}
void decrement()
{
x--;
}
void display1()
{
	cout<<x;
}
};
main()
{
D obj;
obj.gett();
obj.decrement();
obj.display1();

}
