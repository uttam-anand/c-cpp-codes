#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    array <int,5>data={10,20,15,56,57};
    array <int,5>data1={1,2,5,6,7};
    cout<< data.at(3)<<endl;//accessing
    cout<< data[2]<<endl;//accessing
    cout<< data.front()<<endl;
    cout<< data.back()<<endl;
    data.fill(4);//Filling the array with the same element
    for(int i=0;i<5;i++)
    	cout<<data.at(i)<<"\t";
    cout<<"\n";
    data.swap(data1);//swapping the elements of the array
    for(int i=0;i<5;i++)
    	cout<<data.at(i)<<"\t";
    cout<<"\n";
    for(int i=0;i<5;i++)
    	cout<<data1.at(i)<<"\t";
    cout<<"\n";

    cout<< data.size();//Returns the size of the array

    



}