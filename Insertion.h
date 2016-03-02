#ifndef selectionh
#define selectionh

#include "sort.h"

class InsertionSort : public SortList
{
	public:
		InsertionSort(int size_runtime);
		void sort();
};

#endif