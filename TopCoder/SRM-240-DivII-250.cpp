#include<iostream>
#include<algorithm>
#include<string>
#include<locale.h>
#include<vector>
using namespace std;

//ACCEPTED
class Pronunciation{
public: string canPronounce(vector <string> words){

			
			int len = words.size();  string ans = "";
			for (int i = 0; i < len; i++){

				int vowels = 0, consonants = 0;

				for (int j = 0; j < words[i].size(); j++){

					if (tolower(words[i][j]) == 'a' || tolower(words[i][j]) == 'e' || tolower(words[i][j]) == 'i' || tolower(words[i][j]) == 'o' || tolower(words[i][j]) == 'u'){
						vowels++;

						if (consonants >= 3) {
							break;
						}
						else { consonants = 0; }

						if (j < words[i].size() && (tolower(words[i][j + 1]) == tolower(words[i][j]))) vowels--;
					}
					else {
						if (vowels >= 2) {
							break;
						}
						else { vowels= 0; 
							consonants++;
						}
						
					}

				}

				if (consonants >= 3 || vowels >= 2){

					ans = words[i];
					break;
				}
			
			}
			return ans; 
	}
};

int main(){
	Pronunciation p;
	cout << p.canPronounce({ "Aa" });
	cout << endl;
	//system("pause");
	return 0; 
}