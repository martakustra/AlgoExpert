#include <vector>
using namespace std;

string tournamentWinner(vector<vector<string>> competitions,
                        vector<int> results) {
  vector<string> winners = {};
  for (int i = 0; i < results.size(); i++) {
    if (results[i] == 0)
      winners.push_back(competitions[i][1]);
    else
      winners.push_back(competitions[i][0]);
  }
  sort(winners.begin(), winners.end());
	
  int max = 0, current = 0, index = 0;
	
  for (int i = 1; i < winners.size(); i++) {
    if (winners[i] != winners[i-1])
      current = 0;
    else
      current++;
    if (current > max) {
      max = current;
      index = i;
    }
  }
  return winners[index];
}
