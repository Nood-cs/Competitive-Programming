//ACCEPTED
#include<iostream>
#include<string>
using namespace std;

class InsideOut{
public: string unscramble(string line){
			int len = line.length();
			string newStr = "";
			int i = 0;
			for (int i = 0; i < len / 2; i++){
				newStr += line[(len / 2) - i - 1];
			}
			i = len;
			for (; i > len/2; i--){
				newStr += line[i - 1];
			}			
			
			return newStr;
	}
};

int main()
{
	string str = "RUT OWT SNEH HCNERF EERHTEGDIRTRAP A DNA  SEVODELT";
	InsideOut objnew;
	string answer = objnew.unscramble(str);
	cout << answer << endl;
	//system("pause");
	return 0;
}


//We could have used REVERSE Function. 
/*string solve2(string line) { // O(n) better implementation (faster when coding)
    int n = line.size();
    int middle = n / 2;
    reverse(line.begin(), line.begin() + middle); // 'reverse' is a built-in function to reverse range of elements of a container.
    reverse(line.begin() + middle, line.end());
    return line;
	}
*/