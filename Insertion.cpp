#include "Insertion.h"

InsertionSort::InsertionSort(int size_runtime):SortList(size_runtime){}
void InsertionSort::sort()
{
	int temp;
	for(int i=1;i<this->size;i++)
	{
		for(int j=i;j>=0,input[j]<input[j-1];j--)
		{
			swap(input+j,input+j-1);
		}
		if(this->size <= 20)
			display();
	}

}