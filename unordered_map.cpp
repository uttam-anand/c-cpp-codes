#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	unordered_map<string,int >umap;
	umap["geeksforsgeek"]=10;
	umap["forgeek"]=120;
	umap["geek"]=100;
	for(auto x:umap)
		cout<<x.first<<" "<<x.second<<endl;
	return 0;
}