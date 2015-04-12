//ACCEPTED
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	bool flag = false;
	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
		{
			flag = true;
			break;
		}
	}
	if (flag)
	{
		cout << "YES" << endl;
	}
	else if (!flag)
	{
		cout << "NO" << endl;
	}
	return 0;
}