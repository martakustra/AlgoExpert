#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  auto itbegin = array.begin();
	auto itend = array.end();
	if (array.size() == 1)
			return {};
	for (auto it = itbegin; it < itend; it++) {
		if (*find(itbegin, it-1, targetSum - *it) == targetSum - *it)
			return { *it, targetSum - *it };
	}
  return {};
}
