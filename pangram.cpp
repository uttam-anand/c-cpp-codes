#include<bits/stdc++.h>
using namespace std;
bool checkp(string &str)
{
	vector<bool>mark(26,false);
	int index;
	for(int i=0;i<str.length();++i)
	{
		if('A'<=str[i]&&str[i]<='Z')index=str[i]-'A';
		if('a'<=str[i]&&str[i]<='z')index=str[i]-'a';
		else continue;
		mark[index]=true;
	}
	for(int i=0;i<=25;i++)
	{
		if(mark[i]==false)
			return false;
	}
	return true;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string str="The quick brown fox jumps over the lazy dog";
	if(checkp(str)== true)printf("%s is a pangram",str.c_str());
	else printf("%s is a pangram",str.c_str());
	return 0;
}
