#include<iostream>
#include<string>
using namespace std;
int main()
{
	int cnt = 0, x;
	string s;
	cin >> x >> s;
	for (int i = 0; i < x; i++){
		cnt += s[i] == s[i + 1];
	}
	cout << cnt << endl; 
	return 0; 
}