#ifndef heaph
#define heaph


#include "sort.h"

class HeapSort : public SortList
{
	public:
		HeapSort(int size_runtime);
		void max_heapify(int low,int high);
		void build_max_heap(int n);
		void heap_sort(int n);
};

#endif