//AC
#include<iostream>
#include<string>
using namespace std;
int main ()
{
	string str;
	int testCases;

	cin>>testCases;
	for(int i=0; i<testCases; i++)
	{
	    cin>>str;
	    if(str.length() > 10 )
	     {
			cout << str[0] << str.length() - 2<<str[str.length() - 1]<<endl;
	    }
	    else
	    {
		    cout<<str<<endl;
	    }
	}
	//system("pause");
	return 0;
}


