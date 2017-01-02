#include<iostream>
using namespace std;
int main()
{
	int n, x, o = 0, c = 0;
	cin >> n;
	while (n--){
		cin >> x;
		o += x;
		if (o < 0){
			++c; o = 0;
		}
	}
	cout << c << endl;
	return 0;
}

/*
while(n--){
i64 temp;
cin >> temp;
if( temp == -1 ){
if(!tot) ans++;
else tot--;
}
else tot+=temp;
}
cout<< ans <<endl;

*/

/*
int n,a[100000],d=0,m=0;
cin>>n;
for(int i=0;i<n;i++){
cin>>a[i];
m+=a[i];
if(m<0){
d++;
m=0;}
}
cout<<d;
*/