/*#include<iostream>
using namespace std;

int nDigits(int num)
{
	int count = 0;
	while (num != 0)
	{
		num /= 10;
		++count;
	}

	return count;
}

int main()
{
	int number;
	cin >> number;
	cout << "Number of digits are : " << nDigits(number) << endl;
	return 0;
}*/

/*bool flag = false;
int counter = 0;

int number(int num)
{
int k = num;
while (k != 0)
{
k /= 10;
count(k);
counter = 0;
}

return number(num++);
}

int count(int n)
{
if (n % 10 == 4) {
counter++;
}
if (n % 10 == 7)
{
counter++;
}

else
number(n);
if (counter % 2 == 0)
{

}
}*/

/*#include<iostream>
using namespace std;

int superLucky(int num)
{
	if (num == 47 || 
		num == 4477||
		num == 4747|| 
		num == 4774||
		num == 7447||
		num == 7474||
		num == 7744||
		num == 444777||
		num == 447477||
		num == 447747||
		num == 447774||
		num == 474477||
		num == 474747||
		num == 477744||
		num == 474774||
		num == 777444||
		num == 774744||
		num == 774474||
		num == 774447||
		num == 





		num == 447477||
		num == 447747||
		num == 474747||
		num == 474477||
		num == 777444||
		num == 774447||
		)


}
int main()
{
	
}*/


/*#include<iostream>
#include<algorithm>
using namespace std;

long long int nDigits(long long int num)
{
    long long int count = 0;
	while (num != 0)
	{
		num /= 10;
		++count;
	}

	return count;
}

long long int superLucky(long long int n){
	long long int count4 = 0, count7 = 0;
	long long int k = n;
	long long int digits = nDigits(n);

	while (k){
		if (k % 10 == 4)
			++count4;
	     if (k % 10 == 7)
			++count7;

		k/= 10;
	}
	if (count4 == count7 && count4 != 0 && count7 != 0 && (count4+count7)>=digits)
		return n;
	else
		superLucky(n+1);
}

int main()
{
	long long int number;
	cin >> number;
	cout << superLucky(number) << endl;
	return 0;
}
*/
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	typedef vector<int> V; //<or_any_class>
	V v (5) ;

	for (int i = 1; i <= 3; ++i)
		cin >> v[i];
	do{
		cout << v[1] << " " << v[2] << " " << v[3]  << endl;;
	}

	while (next_permutation(v.begin(), v.end()));
	return 0;
}*/


/*#include<iostream>
#include<string>
using namespace std;

void superLucky(int n, string s, int count4, int count7)
{
	int d = 0;
	if (s.size() > 0)
	{
		try
		{
			d = stoi(s);
		}
		catch (...)
		{
			return;
		}

		if ((d >= n) && (count4 == count7) && (count4 + count7) != 0)
		{
			cout << s << endl;
			return;
		}
	}

	superLucky(n, s + '7', count4, count7 + 1);
	superLucky(n, s + '4', count4 + 1, count7);
}

int main()
{
	int num;
	cin >> num;
	superLucky(num, "", 0, 0);
	return 0;
}*/



//ACCEPTED
#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;

vector<long long> v ;
long long num;

void superLucky(long long n, string s, long long count4,long long count7)
{
	
	stringstream ss(s);
	long long t;
	ss >> t;

	//base condition - " stopping condition "
	if ( s.size()>10 ) {
		return;
	}
	
	if (t >=n && count4==count7)
	{
		//if (t >= n) { 
		cout << t << endl; //return; }
		//v.push_back(t);
		return;
	}
	superLucky(n, s + '4', count4 + 1, count7);
	superLucky(n, s + '7', count4, count7 + 1);
}

int main()
{
	long long n;
	cin >> n;
	
	superLucky(n, "", 0, 0);
	
	//sort(v.begin(), v.end());

	//cout << *lower_bound(v.begin(), v.end(), n) << endl;
	
	return 0;
}