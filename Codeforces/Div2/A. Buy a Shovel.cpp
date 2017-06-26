//Time complexity: O(const), where const = 10.
//
#include<iostream>
using namespace std;
int main(){
	int x = 1;
	int k, r;
	cin >> k >> r;

	while (((k*x) % 10) && ((k*x) % 10) != r){
		++x;
	}
	cout << x << endl;
	system("pause");
	return 0;
}