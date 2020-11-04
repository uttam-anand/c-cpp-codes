#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	vector<vector<int>>two;
	for(int i=0;i<2;i++)
		{
			vector<int>temp;
			for (int j=0;j<25;j++)
			{
				temp.push_back(i);
			}
			two.push_back(temp);
		}
	for (int i=0;i<two.size();i++)
	{
		for (int j=0;j<two[i].size();j++)
		{
			cout<<two[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}