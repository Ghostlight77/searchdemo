#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include "search.h"

using namespace std;

int main() {
	vector<int> nums{ 15, 7, 4, 7, 1, 20, 7, 9};

	cout << "SEARCH DEMO PROGRAM\n\n";
	cout << "original vector: ";
	for (int n : nums) cout << n << " ";
	cout << "\n\n";

	int target;
	cout << "Enter a number to search for: ";
	cin >> target;
	cout << "\n";

	int linearIndex = searchdemo::linearSearch(nums, target);
	if (linearIndex != -1)
		cout << "Linear search:  found " << target << " at index " << linearIndex << endl;
	else
		cout << "Linear search: " << target << " not found\n";

	sort(nums.begin(), nums.end());
	cout << "\nSorted vector: ";
	for (int n : nums) cout << n << " ";
	cout << "\n";

	bool found = binary_search(nums.begin(), nums.end(), target);
	cout << "Binary search: ";
	if (found){
		cout << "found";
	}
	else {
		cout << "not found";
	}
	cout << endl;

	int first = searchdemo::findFirst(nums, target);
	if (first != -1)
		cout << "First occurrence of " << target << " at index "
		<< first << " or place " << first + 1 << endl;
	int count = searchdemo::countOccurrences(nums, target);
	if (count > 0)
		cout << target << " appears " << count << " time(s)\n";
	else
		cout << target << " does not appear in vector\n";

	int sum = accumulate(nums.begin(), nums.end(), 0);
	cout << "Total of all numbers = " << sum << endl;

	auto min_it = min_element(nums.begin(), nums.end());
	auto max_it = max_element(nums.begin(), nums.end());
	if (min_it != nums.end() && max_it != nums.end()){
		cout << "min = " << *min_it << endl;
		cout << "max = " << *max_it << endl;
	}

	int greaterThanTarget = count_if(nums.begin(), nums.end(),
		[target](int n) { return n > target; });
	cout << "numbers greater than " << target << " = " << greaterThanTarget << endl;

	return 0;
}
