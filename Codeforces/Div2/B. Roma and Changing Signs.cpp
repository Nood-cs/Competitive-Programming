//ACCEPTED
#include<iostream>
#include<algorithm>
#include<vector>
#include <functional> //greater<int>()
#include<numeric> //accumulate()
using namespace std;
int main()
{
	vector<int>vi(100000);
	int n, k; 
    
	cin >> n >> k;

	vi.resize(n);

	for (int i = 0; i < n; i++){
		cin >> vi[i];
	}

	sort(vi.begin(), vi.end());

	int j = 0 ;

	while (vi[j] < 0 && j < n){
			
			vi[j] *= (-1);
			++j;
		    --k;
			if (k == 0) break;
	}

	sort(vi.begin(), vi.end());
	if (k > 0){
		if (k % 2){
			vi[0] *= -1;
		}
	}

	int sum = accumulate(vi.begin(), vi.end(), 0);
	cout << sum << endl;
	return 0;
}