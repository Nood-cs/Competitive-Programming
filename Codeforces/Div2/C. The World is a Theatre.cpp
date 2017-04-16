/*#include<iostream>
#include<cmath>
using namespace std;


long long fact(long long N){

	if (N == 0)
		return 1;
	if (N == 1)
		return 1;
	return N*fact(N - 1);
}


long long C(long long i, long long j){
	
	return (fact(i)) / (fact(j)*fact(i - j));
}


int main()
{
	long long boys, girls, actors;
	cin >> boys >> girls >> actors;

	long long ways = 0;
	for (long long b = 4; b <= actors - 1; b++){
		ways += C(boys, b) * C(girls, actors - b);
	}

	cout << ways << endl;
	return 0;
}*/

//ACCEPTED
#include<iostream>
using namespace std;

long long C(int n, int m){
      
	long long result(1);
	for (int i = 0; i < m; i++){
		result *= (n - i);
		result /= (i+1);
	}
	return result;
}


int main()
{
	int n, m, t;
	cin >> n >> m >> t;
	long long ways(0);
	for (int i = 4; i <= t - 1; i++){
		ways += C(n, i) * C(m, t - i);
	}
	cout << ways << endl;
}