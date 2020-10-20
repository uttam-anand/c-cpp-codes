#include<bits/stdc++.h>
using namespace std;
char find_char(string strA,string strB)
{
	unordered_map<char,int>m;
	for(int i=0;i<strB.length();i++)
		m[strB[i]]++;
	for(int i=0;i<strA.length();i++)
		m[strA[i]]--;
	for(auto h1=m.begin();h1!=m.end();h1++)
		if(h1->second==1)
			return h1->first;
	return 'a';
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	string strA="abcd";
	string strB="cbdaa";
	cout<<find_char(strA,strB);
	return 0;
}