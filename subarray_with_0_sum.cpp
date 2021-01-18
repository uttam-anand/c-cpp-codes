#include<bits/stdc++.h>
using namespace std;
void IO()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

vector<pair<int ,int >>find_subarray(int a[],int n)
{
	unordered_map<int,vector<int>>map;
	vector<pair<int,int>>out;
	int sum=0;
	for (int i = 0; i < n; i++)
	{
		sum+=a[i];
		if(sum==0)
			out.push_back(make_pair(0,i));


		if(map.find(sum)!=map.end())
		{
			vector<int>vc=map[sum];
			for(auto it=vc.begin();it!=vc.end();it++)
				out.push_back(make_pair(*it+1,i));
		}
		map[sum].push_back(i);
	}
	return out;
}

void print(vector<pair<int,int >>out)
{
	
	 	for(auto i=out.begin();i!=out.end();i++)
	 		cout<<"Subarray found from index "
	 		<<i->first<<"to"<<i->second<<endl;
	 
}

int main()
{
	IO();	
	int a[]={6,3,-1,-3,4,-2,2,4,6,-12,-7};
	int n=sizeof(a)/sizeof(a[0]);
	vector<pair<int ,int>>out=find_subarray(a,n);
	if(out.size()==0)
		cout<<"No subarray exists";
	else 
		print(out);
	return 0;
}