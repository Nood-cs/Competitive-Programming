/*#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n, k, l, r, sall, sk, in,in2 , i=0;
	vector<int> arr (1000);
	cin >> n >> k >> l >> r >> sall >> sk;
	arr.resize(n);
	int temp1 = sk;
	int members = n - k;
	
	while (sk > 0 && i < members){
		if ((sk - r) < 0){
			arr[i] = l;
			sk -= l;
		}
		else{
			arr[i] = r;
			sk -= r;
		}
			++i;
			
	}
	++i;
	int rest = sall - temp1;
	cout << "rest = " << rest << endl;

	while (rest > 0 && i < n){
		
		cout << "rest = " << rest << endl;
		if ( (rest - r) < 0){
			arr[i] = l;
			rest -= l;
		}
		else{
			
			arr[i] = r;
			rest -= r;
		}
		++i;
	}
	
	

	for (int j = 0; j < n; j++){
		cout << arr[j] << " ";
	}
	
	cout << endl;
	system("pause");
	return 0;

}*/

//ACCEPTED
#include<iostream>
using namespace std;
int main(){
	int n, k, l, r, sall, sk; //5 3 1 3 13 9
	
	cin >> n>> k>> l>> r>> sall>> sk;
	sall -= sk; //sall = 4
	n -= k; //n = 2;
	int points;
	for (int i = 1; i <= k; i++){
		points = sk / (k - i + 1);
		cout << points << " ";
		sk -= points;
	}
	for (int i = 1; i <= n; i++){
		points = sall / (n - i + 1);
		cout << points << " ";
		sall -= points;
	}
	//system("pause");
	return 0;
}