//ACCEPTED
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n; 
	int x = 0; 
	cin >> n;
	for (int i = 0; i < n; i++){
		string xstr;
		cin >> xstr;
		
		if ( (xstr[0] == '+' && xstr[1] == '+') || (xstr[1] == '+' && xstr[2] == '+')) { x++; }
		else{
			x--;
		}
			
	}

	cout << x << endl;
	//system("pause");
	return 0; 
}


/*
char s[4];int x;main(){for(gets(s);gets(s);x+=44-s[1]);printf("%d",x);}

x+=44-s[1];   ----> '+' = 43 && '-' = 45; 

another solution : a[1]=='+' ? x++ : x--;

another solution : x += a[1] == '+' ? 1 : -1;
*/