//ACCEPTED
#include<iostream>
using namespace std;
int main()
{
	int n, m, i = 1;

	cin >> n >> m;
	
	while (true){
		
		++i;
		if (i > n){
			cout << i-1 << endl;
			break;
		}

		if (i % m == 0)
			++n;
	}
	
	return 0;
}