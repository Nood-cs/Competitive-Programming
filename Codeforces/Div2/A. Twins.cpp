//AC
#include<iostream>
#include<algorithm> //for sort()
//#include<numeric> //for accumulate()
#include<functional> //for greater<>() function object
using namespace std;
int main ()
{
	const int size = 100;
	int arr[size];
	int n ;
	int sum1  , sum2 , x ;

	cin>>n;

	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	sort(arr , arr+n , greater<int>());

	if(n>0 && n<2)
	{
		cout<<"1"<<endl;
	}
	
	else if(n==2)
	{
		if(arr[0] == arr[1])
		{
			cout<<"2"<<endl;
		}
		else 
		{
			cout<<"1"<<endl;
		}
	}

	else
	{
		for(int j=0; j<n; j++)
		{
		     sum1 = 0 , sum2 = 0;

			for( x=0; x<j+1; x++)
			{
				 sum1 +=arr[x];
			}
			for(int y=j+1; y<=n-1; y++)
			{
				sum2+=arr[y];
			}

			if( (sum1) > (sum2) )
			{
				cout<< x <<endl;
				break;
			}
			
		}
	}

	//system("pause");
	return 0;
}