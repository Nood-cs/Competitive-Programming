//AC
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class BootsExchange{
public: int leastAmount(vector <int> left, vector <int> right){

			int result = 0;

			for (int i = left.size(); i > 0; i--){
				for (int j = right.size(); j> 0; j--){

					if (left[i - 1] == right[j - 1]){
						left.erase(left.begin() + i - 1);
						right.erase(right.begin() + j - 1);
						break;
					}
				}
			}
			int leftSize = left.size();
			int rightSize = right.size();


			return (result = (leftSize + rightSize) / 2);


}
};

int main()
{
	BootsExchange b;
	cout << b.leastAmount({ 1, 3 }, { 2, 2 }) << endl;
	system("pause"); 
	return 0;
}
