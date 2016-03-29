#include "radix.h"

RadixSort::RadixSort(int size_runtime):SortList(size_runtime){}

void RadixSort::radix_sort(int size_runtime)
{
	//here the range is 0-999, so 3 digits, considering MSB to be 0
	int num_digits=2,i=num_digits;
	while(i>-1)
	{
		//sorts according to the digit specified.
		count_sort(i);
		if(this->size<=20)
			display();
	 	i--;
	}
}

void RadixSort::count_sort(int digit)
{
	//each digit is treated seperately
	//assuming range of numbers to be 0-9
	int c[10];

	for(int i=0;i<=9;i++)
		c[i]=0;

	for(int i=0;i<this->size;i++)
	{
		c[get_digit(input[i],digit)]++;
	}
	for(int i=1;i<=9;i++)
		c[i]=c[i]+c[i-1];

	for(int j=this->size-1;j>=0;j--)
	{
		sorted_input[c[get_digit(this->input[j],digit)]]=this->input[j];
		c[get_digit(this->input[j],digit)]--;
	}
	for(int i=1;i <= this->size;i++)
	{
			this->input[i-1]=this->sorted_input[i];
	}

}
//returns only for 3 digit
int RadixSort::get_digit(int num,int digit)
{
	if(digit==0)
		return num/100;
	else if(digit==2)
		return num%10;
	else
		return((num/10)%10);
}