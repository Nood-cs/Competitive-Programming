/*#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){

	set<int>s;
	int stick;
	int counter = 0;
	
	for (int i = 0; i <6; i++){
		cin >> stick;
		s.insert(stick);
	}

	if (s.size() == 3 || s.size() == 2)
		cout << "Bear" << endl;
	else if (s.size() == 2 || s.size() == 1)
		cout << "Elephant" << endl;
	else{
		cout << "Alien" << endl;
	}
	//system("pause");
	return 0;
}*/




//ACCEPTED
#include<iostream>
using namespace std;
int main()
{
	int arr[10] = { 0 };
	int stick;
	bool elephant = false, bear = false;

	for (int i = 0; i < 6; i++){
		cin >> stick;
		arr[stick]++;
	}

	for (int i = 1; i <= 9; i++){
		if (arr[i] >= 4){
			bear = true;
		}
			
		if (arr[i] == 2 || arr[i] == 6){
			elephant = true;
		}
			
	}

	if (bear){
		if (elephant)
			cout << "Elephant" << endl;
		else
			cout << "Bear" << endl;
	}
	else{
		cout << "Alien" << endl;
	}
		

	//system("pause");
	return 0;
}