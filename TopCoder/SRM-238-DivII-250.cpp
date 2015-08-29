//SRM 238 DivII 250
#include <iostream>
#include<string>
#include<vector>
using namespace std;

class
	ArrayHash{
public:
	int getHash(vector <string> input){
		int ans = 0;
		int len = (int)input[0].size();
		for (int i = 0; i<(int)input.size(); i++)
		for (int j = 0; j<len; j++){
			ans += ((input[i][j] - 65) + i + j);
		}
		return ans;
	}
};
int main()
{
	ArrayHash g;
	int result = g.getHash({ "ABCDEFGHIJKLMNOPQRSTUVWXYZ",
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ",
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ",
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ",
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ",
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ" });
	cout << result << endl;
	return 0;
}
