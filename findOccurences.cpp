#include<iostream>
#include<map>
#include<string.h>
#include<iterator>
using namespace std;


int findOcc(char, string, int, int );

int main()
{
string str;
cout<<"\nEnter a string: ";getline(cin,str);

int a,b;
cout<<"\nEnter a,b: ";cin>>a>>b;


map<char,int>m;

for(int i = a-1; i<=(b-1); i++)
{
	m.insert(pair<char,int>(str[i],0));
}

map<char, int>::iterator itr;
char temp;
int occ;
cout<<"------------------\n";

for(itr = m.begin(); itr!=m.end(); ++itr)
{
	temp = itr->first;
	occ = findOcc(temp,str,a,b);
	itr->second = occ;
	
	cout<<itr->first<<" - "<<itr->second<<endl;
}

return 0;
}

int findOcc(char c,string str,int a,int b)
{
	int occ = 0;
	
	for(int i=a-1; i<=b-1; i++)
	{
		if(str[i] == c)occ++;
	}
	
	return occ;

}



