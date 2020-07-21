#include<bits/stdc++.h>
using namespace std;
class student
{
private:
	string name;
	int age;
public:
	void setStudent(string s, int a)
	{
		name=s;
		age=a;
	}
	void showStudent()
	{
		cout<<"Name:"<<name;
		cout<<"\nAge:"<<age;
	}
};
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    pair<string,int>p1;
    pair<string,string>p2;
    pair<string,float>p3;
    pair<int,student>p4;
    p1=make_pair("Uttam",1);
    p2=make_pair("Uttam","God");
    p3=make_pair("Uttam",99.99);

    student s1;
    s1.setStudent("Mustafa",21);
    p4=make_pair(1,s1);
    cout<<" pair1:"<<p1.first<<" "<<p1.second;
    cout<<"\n pair2:"<<p2.first<<" "<<p2.second;
    cout<<"\n pair3:"<<p3.first<<" "<<p3.second;
    cout<<"\n pair4:\n "<<p4.first<<"\n";
    student s2=p4.second;
    s2.showStudent();


}


