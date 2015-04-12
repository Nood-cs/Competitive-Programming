#include<iostream>
#include<map>
#include<string>
//#include<fstream>
#include<algorithm>
using namespace std;

#define SZ(X) (int)(X).size()

int main()
{
	//freopen("Text.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	map<string, int> mp;
	string str, s;

	cin >> str;
	for (int i = 0; i < 10; i++){
		cin >> s;
		mp[s] = i;
	}
	
	for ( int j=0 ; j <SZ(str); j+=10)
	{
		cout << mp[ str.substr(j, 10)];
	}
	cout << endl;
	//system("pause");
	return 0;
}


/* string sub(str , j*10, 10);
map<string, int>::iterator it = mp.begin();
for (; it != mp.end(); it++){
if (sub == it->first){
cout<<it->second;
break;
}
else
continue;
}*/