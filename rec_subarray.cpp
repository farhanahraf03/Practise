#include<iostream>
#include<vector>
using namespace std;

void subarray(vector<int>, int , int);

int main()
{

int n;
cout<<"Enter the size of the vector:";cin>>n;
int temp;

vector<int>v;

for(int i=0; i<n; i++)
{
	cin>>temp;
	v.push_back(temp);
}


subarray(v,0,0);


return 0;
}

void subarray(vector<int> v, int start, int end)
{

	if(end == v.size())return;
	
	if(start > end)
	{
		subarray(v,0,end+1);
	}
	
	else
	{
		cout<<endl<<"[";
		for(int i=start; i<end; i++)
		{
			cout<<v.at(i)<<",";
		}
		
		cout<<v.at(end)<<"]"<<endl;
		
		subarray(v,start+1,end);
	}


}
