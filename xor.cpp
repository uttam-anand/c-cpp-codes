#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	string strA="abcd";
	string strB="cbdaa";
	int res=0,i;
	for(int i=0;i<strA.length();i++)
		{
			res=res^strA[i];
		}
		cout<<res;
		cout<<endl;
	for(int i=0;i<strB.length();i++)
		{
			res=res^strB[i];
		}
		cout<<char(res);

	return 0;
}