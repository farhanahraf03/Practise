#include<iostream>
#include<vector>
#include<string.h>
#include<bits/stdc++.h> //<- IMP Library
using namespace std;

void printTokens(vector<string> v);

int main()
{
 string line,token;
 cout<<"\nEnter a string:";
 getline(cin,line);
 
 vector<string>tokens;
 
 
 stringstream ss(line);
 
 while(getline(ss,token,' '))
 {
 	tokens.push_back(token);
 }

 printTokens(tokens);


return 0;
}

void printTokens(vector<string> v)
{
	cout<<"[";
	for(int i=0; i<v.size(); i++)
	{
		if(i == v.size()-1)
		{
			cout<<v.at(i)<<"]"<<endl;
		}
		else
		{
			cout<<v.at(i)<<",";
		}
	}
}
