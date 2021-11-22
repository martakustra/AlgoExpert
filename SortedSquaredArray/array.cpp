#include <vector>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
  for (int &i : array)
		i = pow(i, 2);
	sort(array.begin(), array.end());
  return array;
}