
//ACCEPTED
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

class SoccerLeagues{
public: vector <int> points(vector <string> matches){
			int n = matches.size();
			vector<int> answer(n, 0);

			for (int team1 = 0; team1 < n; team1++){
				for (int team2 = 0; team2 < n; team2++){
					if (matches[team1][team2] == 'W'){
						answer[team1] += 3;
					}
					if (matches[team1][team2] == 'L'){
						answer[team2] += 3;  // if this team (team1) loses, the other team (team2) gets 3 points
					}
					if (matches[team1][team2] == 'D'){
						answer[team1]++;
						answer[team2]++;
					}
				}
			}
			return answer;
	}
};