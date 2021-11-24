#include <vector>
using namespace std;

bool classPhotos(vector<int> redShirtHeights, vector<int> blueShirtHeights) {
  
	int redHeigher = 0, blueHeigher = 0;
	sort(redShirtHeights.begin(), redShirtHeights.end());
	sort(blueShirtHeights.begin(), blueShirtHeights.end());
	
	for (int i = 0; i < redShirtHeights.size(); i++) {
			if (redShirtHeights[i] > blueShirtHeights[i]) {
				redHeigher += 1;
			}
			else if (redShirtHeights[i] < blueShirtHeights[i]) {
				blueHeigher += 1;
			}
	}
	if ((redHeigher == redShirtHeights.size()) || (blueHeigher == blueShirtHeights.size()))
		return true;
  return false;
}

