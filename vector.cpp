#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	vector<int>v {1,3,4,5,7};//inilization during declaration
	vector<char>v2 (4);//size 4 of vector
	vector<int> v3(5,10);//size 2 with initailization
	vector<string>v4(3,"Hello");//all the three blocks will be initailized with the string hello
    cout<<v4[0]<<endl;
    cout<<v4[1]<<endl;
    cout<<v4[2]<<endl;
    for(int i=0;i<5;i++)
    	cout<<v[i]<<endl;
    cout<<"-----------";
    vector<int>v5;
    cout<<"\nCurrent capacity is "<<v5.capacity()<<"\n";
    v5.push_back(10);
    cout<<"Current capacity is "<<v5.capacity()<<"\n";
    v5.push_back(20);
    cout<<"Current capacity is "<<v5.capacity()<<"\n";
    v5.push_back(30);
    cout<<"Current capacity is "<<v5.capacity()<<"\n";
    v5.push_back(40);
    cout<<"Current capacity is "<<v5.capacity()<<"\n";
    v5.push_back(30);
    cout<<"Current capacity is "<<v5.capacity()<<"\n";
    for(int i=0;i<10;++i)
    	v5.push_back(10*(i+1)); 
    cout<<"Current capacity is "<<v5.capacity()<<"\n";
    cout<<"after pop\n------------\n";
    for(int i=0;i<v5.size();++i)
        cout<<v5[i]<<endl;  
    cout<<"__________\n";
    v5.clear();
    cout<<v5.size()<<endl;
    cout<<v5[2];
    cout<<endl<<v5.front()<<endl;
    cout<<v5.back()<<endl;


}