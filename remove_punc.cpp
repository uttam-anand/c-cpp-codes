#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	string s="Welcome to the string???@@@###$$ to Geeks for Geeks ^ Geeks for Geeks";
	for(int i=0,len=s.size();i<len;i++)
	{
		if(ispunct(s[i]))
		{
			s.erase(i--,1);
			len=s.size();
		}
	}
	cout<<s;
	return 0;
}