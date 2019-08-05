#include<iostream>
#include<vector>
using namespace std;

int findSteps(int );

int isPrime(int );

int main()
{
	int n;
	cout<<"Enter a number:";cin>>n;

	int flag = isPrime(n);
	int res = 0;
	
	
	if(flag == 0){cout<<"\nNumber is prime - ";res = -1;}
	else
	{
		res = findSteps(n);
		cout<<"\nNumber of steps taken: ";
	}
	
	cout<<res<<endl;
	
	return 0;
}

int isPrime(int n)
{
	for(int x = 1; x<n; x++)
	{
		if(n % x == 0){return 1;}
	}
	
	return 0;
}

int findSteps(int n)
{
	static int steps = 0;
	static int i = 1;
	
	if(n == 1){return steps;}
	
	else if(n % 5 == 0){steps++;i = i * 5;findSteps(n/5);}
	
	else if(n % 4 == 0){steps++;i = i * 4;findSteps(n/4);}
	
	else if(n % 3 == 0){steps++;i = i * 3;findSteps(n/3);}
	
	else if(n % 2 == 0){steps++;i = i * 2;findSteps(n/2);}	
	
	else if(n%5!=0 && n%4!=0 && n%3!=0 && n%2!=0){return -1;}	
	
		
	/*int n1 = n;		: Non-Recursive way
	int i = 1;
	int steps = 0;
	
	while(i<=n1)
	{
		if(i == n1){return steps;}
		
		else if(n % 5 == 0){steps++; i = i * 5;n = n/5;}
		
		else if(n % 4 == 0){steps++; i = i * 4;n = n/4;}
		
		else if(n % 3 == 0){steps++; i = i * 3;n = n/3;}
		
		else if(n % 2 == 0){steps++; i = i * 2;n = n/2;}
		
		else if(n%5!=0 && n%4!=0 && n%3!=0 && n%2!=0){return -1;}
	}*/
}
