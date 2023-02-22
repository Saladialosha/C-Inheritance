#include<iostream>
using namespace std;
class publisher
{
protected:

public:
void getp()
{
cout<<"Get in publisher"<<endl;
}
};
class author: virtual public publisher
{
public:

};
class distributor: virtual public publisher
{
public:

};
class book: public author, public distributor
{
public:

};
main()
{
book objb;
objb.getp();
}
