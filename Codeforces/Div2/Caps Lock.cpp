/* Test Cases : 
*  AHMED = ahmed
*  ahmed = ahmed
*  aHMED = Ahmed
*  aHmEd = aHmEd
*/
#include<iostream>     //AC
#include<string>
#include<locale>
using namespace std;

string check(string str)
{
	int n = str.length();
	bool capsLockisOn = false;
	for(int i=1; i<n; i++)
	{
		if( str[i] == toupper(str[i]) )
		{
			capsLockisOn = true;
		}
		else
		{
			capsLockisOn = false;
			break;
		}
	}

	if(n==1 && str[0]<=122 && str[0] >=97)
	{
		str[0]-=32;
	}
	else if(n==1 && str[0]<=90 && str[0] >=65)
	{
		str[0]+=32;
	}

	if(capsLockisOn)
	{
		if(str[0] == toupper(str[0]) )
		{
			for(int i=0; i<n; i++)
			{
				str[i] = tolower(str[i]);
			}

			return str;
		}
		else
		{
			str[0] = toupper(str[0]);
			for(int i=1; i<n; i++)
			{
				str[i] = tolower(str[i]);
			}

			return str;
		}
	}
	else if(!capsLockisOn)
	{
		return str;
	}
}

int main ()
{
	string str , new_str; 

	cin>>str;

	new_str = check(str);

	cout<< new_str <<endl;

	return 0 ;
}