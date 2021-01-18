#include<bits/stdc++.h>
using namespace std;
#define MAX_CHARS 256
bool is_iso(string str1,string str2)
{
	int m=str1.length(),n=str2.length();
	if(m!=n)
	return false;

	bool marked[MAX_CHARS] ={false};
	int map[MAX_CHARS];

	memset(map, -1 , sizeof(map));

	for (int i = 0; i < n; ++i)
	{
		if(map[str1[i]]==-1)
		{
			if(marked[str2[i]]==true)
				return false;

			marked[str2[i]]= true;

			map[str1[i]] = str2[i] ;
		}

		else if (map[str1[i]]!=str2[i])
			return false;
	}
	return true;
}

void IO()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
int main()
{
	IO();	
	string s1="khjhgfgc";
	string s2="rGaauv";
	if(is_iso(s1,s2))
		cout<<"isomorphic";
	else
		cout<<"Not isomorphic";
	return 0;
}