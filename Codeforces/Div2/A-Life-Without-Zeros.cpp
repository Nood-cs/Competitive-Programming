/* 123 + 456 = 579        
   321 + 654 = 975
   
   130 + 140 = 270
   31 + 41 = 72
 */



//ACCEPTED
#include<iostream>
#include<string>
using namespace std;
int removeZeros(int num) {
        int n = 0;
        int i = 1;
        while (num) {
                int dig = num % 10;
                num /= 10;
                if (dig) {
                        n += dig * i;
                        i *= 10;
                }
        }
        return n;
}
int main()
{
	
	 int  a, b, c = 0;
	
	cin >> a >> b;
	
	c = a + b;
	
	a = removeZeros(a);
	b = removeZeros(b);
	c = removeZeros(c);
	
	
	if ( (a+b) == c )
	{
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
		

	system("pause");
	return 0;
}