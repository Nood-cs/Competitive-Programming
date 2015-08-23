//A. Elections
#include <iostream>
#include<limits.h>
using namespace std;

int cities[101]; 
int main(){
	int n, m;
	cin >> n >> m;
	for (int i = 0; i<m; i++){
		int r = -1, d = 0; 
		for (int j = 0; j<n; j++){
			int vote;
		    cin >> vote; 
			if (r < vote)
				 r = vote, d = j; 	
		}
		cities[d]++;
	}


	int index = 0;
	for (int i = 0; i < n; i++){
		if (cities[index] < cities[i])
			index = i;
	}
	cout << index+1 << endl;

	return 0;
}
