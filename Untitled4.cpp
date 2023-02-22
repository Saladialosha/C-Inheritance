#include<iostream>
using namespace std;
class student
{
protected :
int roll_no;
public:
get_rno()
{
cout<<" enter roll no "<<endl;
cin>>roll_no;
}
showrn()
{
cout<<" roll number is "<<roll_no;
} };

class test : public student
{
protected :
float subj1, subj2;
public:
void get_marks()
{
cout<<" enter marks"<<endl;
cin>>subj1>>subj2;
}
void show_marks()
{
cout<<" marks are "<<subj1<<subj2;
} };
class sports
{
protected :
int scores;
public:
void getscores()
{
cout<<" enter scores" ;
cin>>scores; }
void showscores()
{
cout<<" scores are "<<scores;
}
};
class result: public test, public sports
{
protected:
float total;
public:
void display()
{
// total=sub1+subj2+scores;
get_rno();
showrn();
get_marks();
show_marks();
getscores();
showscores(); }
};

main()
{

result obj;
obj.display();


}
