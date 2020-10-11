#include<bits/stdc++.h>
using namespace std;
void pan_lip(string &s)
{
	int index;
	vector<bool>mark(26,false);
	for(int i=0;i<s.length();++i)
	{
		s[i]=tolower(s[i]);
	}
	int cnt=0;
	for(int i=0;i<s.length();i++)
	{
		if('a'<=s[i]&&s[i]<='z')index=s[i]-'a';
			mark[index]=true;

	}
	for(int i=0;i<26;i++)
	{
		if(mark[i]==false)
			cnt++;
	}
	if(cnt==0)
		cout<<"pangram"<<endl;
	else if(cnt>=2)
		cout<<"not a panram but might be a lipogram"<<endl;
	else
		cout<<"pangrmatic lipogram"<<endl;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	string str="The quick brown fox jumped over the lazy dog";
	pan_lip(str);
	str="The quick brown fox jumps over the lazy dog";
	pan_lip(str);
	str="The quick brown fox jum over the lazy dog";
	pan_lip(str);
	return 0;
}