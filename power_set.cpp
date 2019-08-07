#include<iostream>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>

using namespace std;


void powerSet(vector<int>, int);

void disp(vector<int>);

int main()
{
vector<int> v;
int n;

cout<<"\nEnter size of array: ";cin>>n;

int temp;
for(int i=0; i<n; i++)
{
	cin>>temp;
	v.push_back(temp);
}

powerSet(v,n);



return 0;
}


void powerSet(vector<int> v, int n)
{
 int total = pow(2,n);
 
 vector<int> op;
 
 for(int i=1; i<total; i++)
 {
 	int j;
 	for(j=0; j<n; j++)
 	{
 		if(i & 1<<j)op.push_back(v.at(j));
 	}
 	
 	disp(op);
 	
 	op.clear();
 	
 	cout<<endl;
 }
 
 return;
}



void disp(vector<int> v)
{
	int i;
	cout<<"[";
	for( i=0; i<v.size()-1; i++)
	{
		cout<<v.at(i)<<",";
	}
	cout<<v.at(i)<<"]";
}

