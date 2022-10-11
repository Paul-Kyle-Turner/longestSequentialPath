#pragma once
#include <windows.h>

template <typename T>
class LSP {
public:
	static int LongestSequentialPath(T sequence[], int index, int size, T previous_element) {
		// base case of index > size
		if (index > size) {
			return 0;
		}

		// the case in which we include the sequence
		int included_value = 0;
		if (sequence[index] > previous_element) {
			included_value = 1 + LongestSequentialPath(sequence, index + 1, size, sequence[index]);
		}

		// The case in which we exclude the next element
		// Note that we need to keep the last largest element
		int excluded_value = LongestSequentialPath(sequence, index + 1, size, previous_element);

		return max(included_value, excluded_value);
	};
};

