/* ACCEPTED!
* Time Complexity: O(1)
* Space Comlexity: O(1)
* Link: http://codeforces.com/contest/4/problem/A
*/

#include<iostream>
#include<string>
using namespace std;

string isEven(int n) {
	if (n != 2 && n % 2 == 0)
	{
		return "YES";
	}
	return "NO";
}

int main() {
	int n;
	cin >> n;
	cout << isEven(n) << endl;
	return 0;
}