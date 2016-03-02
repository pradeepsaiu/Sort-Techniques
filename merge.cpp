#include "merge.h"

MergeSort::MergeSort(int size_runtime):SortList(size_runtime){}

void MergeSort::merge_sort(int low,int high)
{
	int mid;
	mid=floor((low+high)/2);
	if(low<high)
	{
		merge_sort(low,mid);
		merge_sort(mid+1,high);
		merge(low,mid,high);
	}
	//base case should just return. so specifying nothing
}


void MergeSort::merge(int low,int mid,int high)
{
	int *input_dup = new int[high-low+1];
	int left=low,temp=mid+1,right=mid+1;
	int input_dup_index=0;
	while(left<=mid && right<=high)
	{
		if(input[left]>input[right])
		{
			input_dup[input_dup_index++] = input[right];
			right++;
		}
		else
		{
			input_dup[input_dup_index++] = input[left];
			left++;
		}
	}
	if(left>mid && right<=high)
	{
		while(right<=high)
		{
			input_dup[input_dup_index++] = input[right];
			right++;
		}
	}
	else if(left<=mid && right>high)
	{
		while(left<=mid)
		{
			input_dup[input_dup_index++] = input[left];
			left++;
		}

	}
	input_dup_index=0;
//using only one single array, used input_dup as temporary array and copied values to it.
	while(low<=high)
	{
		input[low++]=input_dup[input_dup_index++];
	}
	if(this->size <= 20)
			display();
	delete [] input_dup;
}
