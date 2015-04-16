#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;
//ACCEPTED
class DiagonalDisproportion{
public: int getDisproportion(vector <string> matrix){

			int sum1 = 0, sum2 = 0; 
			int len = matrix[0].size(); 
			/*for (int i = 0; i < len; i++){
				for (int j = 0; j < len; j++){
					if (i == j){
						sum1 += (matrix[i][j] - '0');
						sum2 += (matrix[i][((len - 1) - i )] - '0'); 
					}
				}
			}*/

			for (int i = 0; i < len; i++){
				sum1 += (matrix[i][i] - '0' );
				sum2 += (matrix[i][(len - 1) - i] - '0');

			}
			
			return (sum1 - sum2); 
	}
};

int main()
{
	DiagonalDisproportion d;
	cout << d.getDisproportion({ "7748297018", "8395414567", "7006199788", "5446757413", "2972498628",
		"0508396790", "9986085827", "2386063041", "5687189519", "7729785238" }) << endl;
	system("pause");
	return 0; 
}