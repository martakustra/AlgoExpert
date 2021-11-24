using namespace std;

int minimumWaitingTime(vector<int> queries) {
	
	int time = 0;
	int total_time = 0;
	
	sort(queries.begin(), queries.end());
		
	for (int i = 1; i < queries.size(); i++) {
		time = time + queries[i-1];
		total_time = total_time + time;
	}
  return total_time;
}