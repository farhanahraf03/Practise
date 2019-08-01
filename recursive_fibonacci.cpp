#include<iostream>
using namespace std;

int fibo(int ,int ,int );

int main()
{
int n;

cout<<"Enter n:";cin>>n;cout<<endl;

cout<<"Sum of n numbers in a fibonacci sequence: "<<fibo(0,1,n);


return 0;
}


int fibo(int prev, int curr, int n)
{
	static int i = 1;
	static int sum = 0;
	static int next = 0;
	
	if(i == n){ return sum;}
	
	else
	{
		sum = sum + curr;
		next = prev + curr;
		prev = curr;
		curr = next;
		i++;
		fibo(prev,curr,n);
	}
	

}
