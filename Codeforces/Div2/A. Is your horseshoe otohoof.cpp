#include<iostream>
#include<set>
using namespace std;
int main(){
	set<int> ss;
	int s;
	for (int i = 0; i < 4; i++){
		cin >> s;
		ss.insert(s);
	}
	cout << 4 - ss.size() << endl;
	system("pause");
	return 0;
}

/* -another solution -- not using set -

int x
int z=0,c=0,y[4]={0},i=0;
while(z++<4)
{
cin>>x;
if(y[0]!=x&&y[1]!=x&&y[2]!=x&&y[3]!=x) {y[i++]=x; c++;}
}
cout<<4-c;
return 0;

}*/