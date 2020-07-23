#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	list <int> l1{55,46,12,78,11,22,33};
	list<string> l2{"uttam","mustafa","friends"};
	l1.sort();
	list<int>::iterator p=l1.begin();
	while(p!=l1.end())
	{	
		cout<<*p<<"\t";
		p++;
	}
	cout<<endl;
	l1.remove(46);//remove all the occourances of the given element in  the function
	l1.reverse();//prints list in reverse order
	l1.clear();//clears the list
		list<int>::iterator q=l1.begin();
	while(q!=l1.end())
	{	
		cout<<*q<<"\t";
		q++;
	}
	cout<<endl;
	cout<<"\nTotal values in the lsit are "<<l1.size();
	cout<<endl;
		l2.push_back("hello");
	l2.push_front("hell");


	cout<<"\nTotal values in the lsit are "<<l2.size();
	cout<<endl;
	l2.push_back("helloxfd");//appends element at the end of the list
	l2.push_front("helldsfz");//appends element at the start of the list
		list<string>::iterator p1=l2.begin();
	while(p1!=l2.end())
	{	
		cout<<*p1<<"\t";
		p1++;
	}
	cout<<"\nTotal values in the lsit are "<<l2.size();


}