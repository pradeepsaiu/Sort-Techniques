#ifndef quickh
#define quickh

#include "sort.h"

class QuickSort : public SortList
{
	public:
		QuickSort(int size_runtime);
		void quick_sort(int low,int high);
};

#endif