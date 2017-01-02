//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int left = 0, jokes = 0, n, d, song[101]; 
//	//vector<int> songs;
//	cin >> n >> d;
//	for (int i = 0; i < n; i++){
//		cin >> song[i]; 
//		
//	}
//	int k = n;
//	
//	for (int j = 0; j < n; j++){
//		d -= song[j];
//		if (d > 5 && d >= 10){
//			jokes += 2; 
//			d -= 10; 
//			--k;
//		
//		}
//		else if (d >= 5 && d < 10){
//			jokes++;
//			d -= 5;
//			--k;
//
//		}
//		else{
//			if (d == song[n - 1]){
//				k--; break;
//			}
//		}
//		
//			
//		 
//	}
//	if (k!=0){
//		cout << "-1" << endl;
//		return 0;
//	}
//	cout << jokes+((int)d/5) << endl;
//	//system("pause"); 
//	return 0;
//}

//AC
#include<iostream>
using namespace std;
int main()
{
	int n, duration,t , sum=0;
	cin >> n >> duration;
	for (int i = 0; i < n; i++){
		cin >> t;
		sum += t;
	}
	if (sum + (n - 1) * 10 > duration)
		cout << "-1" << endl;
	else{
		cout << (duration - sum) / 5 << endl;
	}
	return 0; 
}
