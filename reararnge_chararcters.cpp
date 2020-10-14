#include<bits/stdc++.h>
using namespace std;
const int max_char=26;
struct key
{
	int freq;
	char ch;
	bool operator<(const key&k )const
	{
		return freq<k.freq;
	}
};
void rearrange_string(string str)
{
	int n= str.length();
	int count[max_char]={0};
	for(int i=0;i<n;i++)
		count[str[i]-'a']++;
	priority_queue<key>pq;
	for(char c='a';c<'z';c++)
		if(count[c-'a'])
			pq.push(key{count[c-'a'],c});
	str="";
	key prev{-1,'#'};
	while(!pq.empty())
	{
		key k=pq.top();
		pq.pop();
		str=str+ k.ch;
		if(prev.freq>0)
			pq.push(prev);
		(k.freq)--;
		prev=k;
	}
	if(n!=str.length())
		cout<<"Not valid string";
	else 
		cout<<str<<endl;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	//string str="Hello from the other side";
	string str="bbba";
	rearrange_string(str);
	return 0;
}