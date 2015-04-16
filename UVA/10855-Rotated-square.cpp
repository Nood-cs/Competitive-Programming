#include<iostream>
using namespace std;

char Big_array[1000][1000]; 
char small_array[4][1000][1000];

int checkin(int N, int n, int slice){
	int counter = 0; 
	bool flag;

	for (int i = 0; i < N-n+1; i++){
		
		for (int j = 0; j < N-n+1; j++){
			flag = true;
			for (int x = 0; x < n; x++){
				for (int y = 0; y < n; y++){
					if (Big_array[x + j][y + i] != small_array[slice][x][y]){
						flag = false; break;
					}
				}
				if (!flag){
					break;
				}
			}
			if (flag){//the small square is found in the big one
				++counter;
			}
		}
	}
	return counter;
}

int main()
{
	int N_big, n_small;
	for (;;){
		
		cin >> N_big >> n_small;
		if (N_big == 0 && n_small == 0) break;

		int arr[4] = { 0 };

		for (int i = 0; i < N_big; i++){
			for (int j = 0; j < N_big; j++){
				cin >> Big_array[i][j]; 
			}
		}
		for (int i = 0; i < n_small; i++){
			for (int j = 0; j < n_small; j++){
				cin >> small_array[0][i][j]; 
			}
		}

		for (int i = 0; i < n_small; i++){
			for (int j = 0; j < n_small; j++){
				/* (0,0) in slice#1 <-- (1,0) in slice#0 
				   (0,1) in slice#1 <-- (0,0) in slice#0
				   (1,0) in slice#1 <-- (1,1) in slice#0
				   (1,1) in slice#1 <-- (0,1) in slice#0
				*/
				small_array[1][i][j] = small_array[0][n_small - 1 - j][i];

				/* (0,0) in slice#2 <-- (1,1) in slice#0 
				   (0,1) in slice#2 <-- (1,0) in slice#0
				   (1,0) in slice#2 <-- (0,1) in slice#0
				   (1,1) in slice#2 <-- (0,0) in slice#0
				*/
				small_array[2][i][j] = small_array[0][n_small - 1 - i][n_small - 1 - j];


				/* (0,0) in slice#3 <-- (0,1) in slice#0
				   (0,1) in slice#3 <-- (1,1) in slice#0
				   (1,0) in slice#3 <-- (0,0) in slice#0
				   (1,1) in slice#3 <-- (1,0) in slice#0
				*/
				small_array[3][i][j] = small_array[0][j][n_small - 1 - i];
			}
		}

		for (int i = 0; i < 4; i++){
			arr[i] = checkin(N_big, n_small, i);
		}
		cout <<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<< endl;
	}

	return 0;
}