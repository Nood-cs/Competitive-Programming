//It works fine but it gets TLE to iterate large numbers! as from 1 to 1000000000
/*#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n, a, b;
	int counter = 0, petya = 0, vasya = 0;
	vector<int> vec(2000);
	int k;

	cin >> n >> a >> b;
	vec.resize(n);
	for (int i = 0; i < n; i++){
		cin >> vec[i];
	}

	int i = 0;  k = vec[0];
	 
	while (true)
	{
		petya = 0, vasya = 0;
		for (int j = 0; j < n; j++){
			if (vec[j] > k){ ++petya; }
				
			else if (vec[j] <= k){ ++vasya;  }
				
		}
			//cout << "petya = " << petya << " ";
			//cout << "vasya = " << vasya << " ";
		
		if (vasya != b && petya != a){
			++i;

			if (i == n){
				break;
			}
			k = vec[i];

		}
		else if (vasya == b && petya == a){
			++counter; //cout << "counter"<<counter << endl;
			++k;
		}
	}
	 cout << counter << endl;
	 return 0;
}*/

//ACCEPTED
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, a, b;
	int arr[2000];
	cin >> n >> a >> b;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	sort(arr, arr + n);
	cout <<( arr[b] - arr[b - 1]) << endl;
	return 0;
}