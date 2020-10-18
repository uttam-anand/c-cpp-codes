/*							Method 1

#include<bits/stdc++.h>
using namespace std;
bool check_duck(int n)
{
	string str=to_string(n);
	int c=str.length();
	int i=0;
	while(i<n&&str[i]=='0')
		i++;
	while(i<n)
	{
		if(str[i]=='0')
			return true;
		i++;
	}
	return false;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	int n=45601;
	if(check_duck(n))
		cout<<"yes";
	else cout<<"No";
	return 0;
}
							Method2

#include<bits/stdc++.h>
using namespace std;
void check_duck(string str)
{
	int n=str.length();
	int i=0;
	while(i<n&&str[i]=='0')
		i++;
	while(i<n)
	{
		if(str[i]=='0')
			{cout<<"Yes";
			return;}
		i++;
	}
	cout<<"NO";
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	string n="04561";
	check_duck(n);
	return 0;
}*/
						//	Method3

#include<bits/stdc++.h>
using namespace std;
bool check_duck(int n)
{
	string str;
	stringstream ss;
	ss<<n;
	ss>>str;
	int c=str.length();
	int i=0;
	while(i<n&&str[i]=='0')
		i++;
	while(i<n)
	{
		if(str[i]=='0')
			return true;
		i++;
	}
	return false;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	int n=045601;
	if(check_duck(n))
		cout<<"yes";
	else cout<<"No";
	return 0;
}