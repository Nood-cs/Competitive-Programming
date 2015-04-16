#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
//ACCEPTED
class TheSquareDivTwo{
public:  vector <string> solve(vector <string> board){
			 // Greedy assign C from bottom to top for each columns i with same number in R[i]
			 int len = board[0].size();
			 
			 int R[51] = { 0 };    //----  vector <int> R(SZ(board));
			 
			// vector<string>temp_board;

			 for (int i = 0; i < len; i++){   //OK
				 for (int j = 0; j < len; j++){
					 if (board[i][j] == 'C'){       //---- R[i] += board[i][j]=='C';
						 R[i]++; 
					 }
				 }
			 }

			 for (int i = 0; i < len; i++){ //OK ---- vector <string> res (SZ(R),string(SZ(board[0]),'.')); // grid of all .
				 for (int j = 0; j < len; j++){
					 board[i][j] = '.';
				 }
			 }

			 int temp = 1; 
			 
			 for (int i = len - 1; i >= 0; i--){
				 int k = R[i]; 
				 while (k > 0){
					 board[len-temp][i] = 'C'; //row by row
					 k--;
					 temp++;
				 }
				 temp = 1; 
				/* // iterate through columns
					 for(int i=0;i<SZ(res[0]);++i)
					{
						int r = SZ(R)-1; // start to assign C from bottom to top
						while(R[i]--)
							res[r--][i] = 'C';
					}
				*/
			 }
			 return board;
	}


};

int main()
{
	TheSquareDivTwo b;
	vector<string> ans; 
	ans = b.solve({ "C.C..C.C..C..C.",
		"CCC...C..CCC.C.",
		"......CC...CCCC",
		".C..CC.C.C.C.C.",
		"C....C.C......C",
		".....C..CCCCC.C",
		"CCC.......CCCCC",
		"..C.C..C.C...C.",
		"CCC....CCC.CC..",
		"CC.CCCC.CCCC...",
		".C..C.CC.C.CC.C",
		"C.CCCC..CC..C.C",
		".CCCC.CCCCCC...",
		"..C...C.CCC.CC.",
		"CCCC..CCC.C...." });

	int len = ans.size();
	for (int i = 0; i < len; i++){
		for (int j = 0; j < len; j++){
			cout << ans[i][j]; 
		}
		cout << endl;
	}
	system("pause");
	return 0;
}