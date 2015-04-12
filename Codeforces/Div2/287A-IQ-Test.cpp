//287A - IQ Test
#include<iostream>
using namespace std;
int main()
{
	char ch;
	int arr[4][4] = { 0 };
	bool flag = false;

	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			cin >> ch;
			if (ch == '#'){
				arr[i][j] = 1;
			}
		}
	}

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			int sum = arr[i][j] + arr[i][j + 1] + arr[i + 1][j] + arr[i + 1][j + 1];
			if (sum != 2)
			{
				flag = true;
				break;
			}
		}

	}

	if (flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}
