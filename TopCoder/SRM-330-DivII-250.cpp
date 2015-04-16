#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
//ACCEPTED
class Sortness{
public: double getSortness(vector <int> a){
			int len = a.size();
			double counter = 0.0; 
			double result = 0.0;
			for (int i = 0; i < len; i++){
				for (int j = 0; j < i; j++){
					if (a[j] > a[i]){   /*if ( (a[j] - a[i]) * (j-i) < 0 ) 
										       ++res;*/
						counter++;
					}
				}
				for (int j = i+1; j < len; j++)
				{
					if (a[j] < a[i]){
						counter++;
					}
				}
					
				
				result += (double)counter; 
				counter = 0.0; 
			}
			return ((double)result / (double)len); 
	}
};

int main()
{
	Sortness s;
	cout << s.getSortness({ 1, 5, 8, 7, 9, 6, 10, 12, 11, 3, 4, 2 }) << fixed << endl;
	system("pause");
	return 0; 
}