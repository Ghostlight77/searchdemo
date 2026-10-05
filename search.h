#pragma once
#ifndef WARNE_SEARCH_H
#define WARNE_SEARCH_H

#include <vector>

namespace searchdemo {
	int linearSearch(const std::vector<int>& nums, int target);
	int findFirst(const std::vector<int>& nums, int target);
	int countOccurrences(std::vector<int>& nums, int target);
}

#endif
