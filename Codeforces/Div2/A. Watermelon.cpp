//ACCEPTED
#include<iostream>
using namespace std;
int main()
{
	int w, res, sub;
	cin >> w;
	res = w / 2;
	sub = w - 2;
	if ( (( w % 2 == 0) && w > 3) && ( (res % 2==0 ) || (sub %2 ==0 ) )  )
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}