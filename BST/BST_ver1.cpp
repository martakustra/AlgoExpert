class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int val);
  BST &insert(int val);
};

int findClosestValueInBst(BST *tree, int target) {
  int distance = 0, closest = 0, dist_clos = 0, value = 0;
	value = tree->value;
	distance = abs(value - target);
	dist_clos = distance;
	
	auto *ptr = tree;
	
	while (ptr != NULL) {
		if (target > value) {
			ptr = ptr->right;
		}
		else if (target < value) {
			ptr = ptr->left;
		}
		else {
			closest = value;
			return closest;
		}
		if (ptr == NULL) {
				break;
		}
		value = ptr->value;
		distance = abs(value - target);
		if (distance <= dist_clos) {
				dist_clos = distance;
				closest = value;
		}
	}
  return closest;
}
