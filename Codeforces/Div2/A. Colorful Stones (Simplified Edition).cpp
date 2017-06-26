#include<iostream>
#include<string>
using namespace std;
int main(){
	string s, t;
	cin >> s >> t;
	int i = 0;
	for (int j = 0; j < t.length(); j++){
		if (s[i] == t[j])++i;
	}
	cout << i + 1 << endl;
	system("pause");
	return 0;
}