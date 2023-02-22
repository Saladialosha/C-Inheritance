#include<iostream>
using namespace std;
class base1
{
	public:
		void show()
		{
			cout<<"i'm from base1 "<<endl;
		}
};
class base2
{
	public:
		void show()
		{
			cout<<"i'm from base2 "<<endl;
		}
};
class derive : public base1 ,public base2
{
	public:
		void show()
		{
			cout<<"i'm from derive "<<endl;
			base1::show();
			base2::show();
		}
};
main()
{
derive obj;
obj.show();	
}
