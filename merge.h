#ifndef mergeh
#define mergeh

#include "sort.h"

class MergeSort : public SortList
{
	public:
		MergeSort(int size_runtime);
		void merge_sort(int low,int high);
		void merge(int,int,int);
};

#endif