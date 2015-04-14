////Queue problems  //AC 
///*
//trick testCase: 
//
//15 4
//380 right
//720 left
//1340 right
//1040 left
////output : 4
//
//*/

#include<vector>
#include<string>
#include<algorithm>
#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int> qu_Left; 
	queue<int> qu_right; 
	bool gettingBack = false; 
	int c, l, m , car;
	string bank; 
	cin >> c;
	for (int i = 0; i < c; i++){
		cin >> l >> m; 
		int ferryLenght_cm = l * 100;
		for (int j = 0; j < m; j++){
			cin >> car >> bank; 
			if (bank == "left"){
				qu_Left.push(car); 
			}
			if (bank == "right"){
				qu_right.push(car); 

			}
		}

		int carWaiting; 
		int counter = 0;
		int flag = 0; 
		while ( !qu_Left.empty() || !qu_right.empty()) {
			counter++;
			int load = 0;
			if (flag){//right
				while (!qu_right.empty() && load + qu_right.front() <= ferryLenght_cm){
					load += qu_right.front(), qu_right.pop();
				}
				
			}
			else{//left
				while (!qu_Left.empty() && load + qu_Left.front() <= ferryLenght_cm){
					load += qu_Left.front(), qu_Left.pop();
				}
			}
			
			flag = 1 - flag; 
		} 
		cout << counter << endl;
	}
	
	//system("pause");
	return 0; 
}