#include<algorithm>
#include<string>
#include<iostream>
#include<locale.h>
#include<math.h>
using namespace std;
//ACCEPTED ... O(N^2)
class DistanceBetweenStrings{
public: int getDistance(string a, string b, string letterSet){

			int distance = 0;
			for (int i = 0; i < letterSet.size(); i++){
				int n1 = 0, n2 = 0;
				for (int j = 0; j < a.size(); j++){
					if (letterSet[i] == tolower(a[j])) n1++;
					else continue; 
				}
				
				for (int j = 0; j < b.size(); j++){
					if (letterSet[i] == tolower(b[j])) n2++;
					else continue; 
				}
				int calc = (n1 - n2)*(n1 - n2);
				distance += calc;
			}
			return distance; 
	}
};

int main(){
	DistanceBetweenStrings d; 
	cout << d.getDistance("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "ba") << endl;
	system("pause");
	return 0; 
}


/*another solution  ... O(n)

  int cnt[30];
class DistanceBetweenStrings {
public:
    int getDistance(string a, string b, string letterSet) {
        fill(cnt, cnt + 30, 0);
        for (int i = 0; i < SZ(a); ++i)
            cnt[tolower(a[i]) - 'a']++;
        for (int i = 0; i < SZ(b); ++i)
            cnt[tolower(b[i]) - 'a']--;
        int r=0;
        for(int i=0;i<SZ(letterSet);++i)
        {
            r+=abs(cnt[letterSet[i]-'a'])*abs(cnt[letterSet[i]-'a']);
        }
        return r;
    }
	};
*/