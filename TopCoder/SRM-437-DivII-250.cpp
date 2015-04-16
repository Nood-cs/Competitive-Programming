//ACCEPTED for 209.60 Points 
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
using namespace std;

class TheBeauty{
public: int find(int n){
			set<int> st;
			int d; 
			while (n != 0){
				d = n % 10;
				st.insert(d);
				n /= 10;
			}
		return (int)st.size();
		 
	}

};

/* set<int> digits;
    while(n > 0) {
      digits.insert(n % 10);
      n /= 10;
	  }
*/