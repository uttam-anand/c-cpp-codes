#include<bits/stdc++.h>
using namespace std;
bool isNumber(string str)
{
	for (int i = 0; i<str.length() ;++i)
	{
		if(isdigit(str[i])==false)
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
	//string str="Hello from the other side";
	string str="6793";
	if(isNumber(str))cout<<"Number";
	else 
		cout<<"string";
	return 0;
}