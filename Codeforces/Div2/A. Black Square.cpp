#include<iostream>
#include<string>
using namespace std;
int main(){
	int arr[5];
	int ans = 0; 
	string s;
	for (int i = 1; i < 5; i++)
		cin >> arr[i];
	cin >> s;
	for (int j = 0; j < s.size(); j++){
		ans += arr[s[j] - '0'];
	}
	cout << ans << endl;
	return 0;
}