#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	string s,subs;
	cout<<"\nEnter a string: ";getline(cin,s);
	cout<<"\nEnter a substring ";getline(cin,subs);
	
	int n = s.length();
	int m = subs.length();
	
	int res = 0;
	
	for(int i = 0; i<=n-m; i++)
	{
		int j;
		for(j = 0; j<m; j++)
		{
			if(subs[j] != s[i+j])break;
		}
		
		if(j == m){res = 1;break;}
	}
	
	if(res)cout<<"\nSubstring found.";
	else cout<<"\nSubstring not found.";

	return 0;
}
