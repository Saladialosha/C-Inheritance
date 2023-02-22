#include<iostream>
using namespace std;
class base1
{
	public:
		base1()
		{
			cout<<"base1 constructor"<<endl;
		}
		public:
		~base1()
		{
			cout<<"base1 constructor"<<endl;
		}
};
class base2
{
	public:
		base2()
		{
			cout<<"base2 constructor"<<endl;
		}
		public:
		~base2()
		{
			cout<<"base2 constructor"<<endl;
		}
};
class derive: public base1, public base2
{
	public:
		derive()
		{
			cout<<"derive constructor"<<endl;
		}
		public:
		~derive()
		{
			cout<<"derive constructor"<<endl;
		}
};
main()
{
	derive obj;
}
