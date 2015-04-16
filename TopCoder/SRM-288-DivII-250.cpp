#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<sstream>
using namespace std;


class AccountBalance{
public: int processTransactions(int startingBalance, vector <string> transactions){
			if (transactions.empty())
				return startingBalance;
			else{
				//int k = 1;
				int n = transactions.size();
				for (int i = 0; i < n; i++){
					
					string s = "";
					long long balance;

					if (transactions[i][0] == 'C'){
						for (int j = 2; j < transactions[i].size(); j++){
							s += transactions[i][j];
						}
						stringstream ss(s);
						ss>>balance;
						startingBalance += balance;
					}
					else if (transactions[i][0] == 'D'){
						for (int j = 2; j < transactions[i].size(); j++){
							s += transactions[i][j];
						}
						stringstream ss(s);
						ss >> balance;
						startingBalance -= balance;
					}
					
				}
				return startingBalance;
			}
}
};
/*
      int n = transaction.size(); 
	  for(int i=0; i<n; i++){

	  stringstream tokenizer;
	  int balance; char type;

	  tokenizer << trasactions[i];
	  tokenizer >> type >> balance;
	  if(type == 'C') startintbalance +=balance;
	  else 
	    startingbalance -= balance;
	}
	return startingbalance;
	  
	  
	  
	  
	  */
int main()
{
	AccountBalance obj;
	int answer = obj.processTransactions(53874, { "D 1234", "C 987", "D 2345", "C 654", "D 6789", "D 34567" });
	cout << answer << endl;
	system("pause");
	return 0;
}