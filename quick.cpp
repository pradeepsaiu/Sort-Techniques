#include "quick.h"

QuickSort::QuickSort(int size_runtime):SortList(size_runtime){}

void QuickSort::quick_sort(int low,int high)
{
//if index is startin element.
//	int pivot=this->input[low];
	int border  = low;

	if(low<=high)
	{
		srand(time(NULL));
		int pivot_index = low +(rand()%(high-low+1));
		int pivot=this->input[pivot_index];
		swap(input+low,input+pivot_index);
		for(int i=low+1;i<=high;i++)
		{
			if(input[i]<pivot)
			{
				swap(input+i,input+border+1);
				border++;
			}
		}
		swap(input+border,input+low);
		if(this->size <= 20)
			display();
		quick_sort(low,border-1);
		quick_sort(border+1,high);
	}
}