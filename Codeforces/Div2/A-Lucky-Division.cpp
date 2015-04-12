//ACCEPTED
#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;


bool func(int n , string str){
	
	if (str.size() > 0){

		stringstream ss;
		long num;
		ss << str;
		ss >> num;

		if (n%num == 0){
			return true;
		}
		else if (num > 1000){
			return false;
		}
		else{
			return (func(n, str + '4') || func(n, str + '7'));
		}
	}
	return (func(n, str + '4') || func(n, str + '7'));
}

int main()
{
	
	int n; 

	cin >> n; 

	bool ans = func(n, ""); 
	
	if (ans){
		cout << "YES" << endl;
	}

	else{
		cout << "NO" << endl;
	}

	system("pause");
	
	return 0; 
}