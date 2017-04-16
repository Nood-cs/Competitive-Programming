//AC
#include<iostream>
#include<string>
using namespace std;

bool dangerous(string str)
{
	for(int i=0; i<str.length(); i++)
	{
		if(str.substr(i , 7) == "0000000")
		{
			return true;
		}
		else if(str.substr(i , 7)== "1111111")
		{
			return true;
		}
	}
	return false;
}

int main ()
{
	string team;
	
	cin>> team;
	int n = team.length();
	//if( n < 2 || n > 100) break;
		
	if( dangerous(team) )
	{
		cout<<"YES"<<endl;
	}
	if( !dangerous(team) )
	{
				cout<<"NO"<<endl;
	}

	return 0;
}



