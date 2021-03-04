#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  auto itbegin = array.begin();
	auto itend = array.end();
	for (auto it = itbegin; it < itend; it++) {
		for (auto it2 = it + 1; it2 < itend; it2++) {
			if (*it + *it2 == targetSum)
				return {*it, *it2};
		}
	}
  return {};
}
