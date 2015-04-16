//Simulation for the problem. and return the answer. 
//ACCEPTED
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class GridGenerator{
public: int generate(vector <int> row, vector <int> col){
			int n = row.size();
			int table[10][10];
			for (int i = 0; i < n; i++){  //fill the row
				table[0][i] = row[i];
			}
			for (int i = 0; i < n; i++){ //fill the column
				table[i][0] = col[i];
			}

			for (int i = 1; i < n; i++){
				for (int j = 1; j < n; j++){
					table[i][j] = table[i][j - 1] + table[i - 1][j] + table[i - 1][j - 1];
				}
			}
			int answer = table[n - 1][n - 1];
			return answer;
	}
};
