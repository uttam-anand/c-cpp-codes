#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	map<int,string>customer;
	customer[100]="Gajendra";
	customer[123]="Dilip";
	customer[145]="Shahid";
	customer[171]="Aditya";
	customer[200]="Rajesh";
	customer.insert(pair<int,string>(205,"saurabh"));
	map<int,string>c { {100,"Gajendra"},{123,"Dilip"},{145,"Shahid"},{171,"Aditya"},{200,"Rajesh"}  };
	cout<<customer[100]<<endl<<customer[123]<<endl<<customer[145]<<endl;
	map<int,string>::iterator p=customer.begin();
	while(p!=customer.end())
	{	cout<<p->second<<endl;
		p++;
	}
	cout<<customer.at(145)<<endl;//returns the value at this index
	cout<<customer.size()<<endl;//returns the size of the mapping
	cout<<customer.empty();//returns 0 if map is empty and 1 if it is not empty


}