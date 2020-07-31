//Hackerrank jump on the clouds revisited solution

#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n,j,c,e=100,pos=0;
	cin>>n>>j;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
    	cin>>c;
    	v.insert(v.begin()+i,c);
    }
    while(1)
    {
    	pos=(pos+j)%n;
    	if(v[pos]==1)
    		e-=3;
    	else
    		e-=1;
    	if(pos==0)
    		break;
    }
    cout<<e;
}
