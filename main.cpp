#include "sort.h"
#include "exchange.h"
#include "quick.h"
#include "merge.h"
#include "Insertion.h"

using namespace std;

int main()
{
	int selection,size;
	printf("Select the type of sort \n1.Exchange Sort\n2. Quick\n3. Merge Sort\n4. Insertion Sort\nEnter 9 or any character to quit\n");
	while((cin>>selection))
	{
		switch(selection)
		{
			case 1:
			{
				printf("Enter the input size of the array\n");
				cin>>size;
				if(size>1000 || size <-1)
				{
					printf("Not a valid input size, try again");
					break;
				}
				ExchangeSort list1(size);
				list1.fill_list();
				printf("\n Array before sorting \n");
				list1.display();
				list1.sort();
				printf("Array after sorting\n");
				list1.display();
				break;
			}
			case 2:
			{
				printf("Enter the input size of the array\n");
				cin>>size;
				if(size>1000 || size <-1)
				{
					printf("Not a valid input size, try again");
					break;
				}
				QuickSort list1(size);
				list1.fill_list();
				printf("\n Array before sorting \n");
				list1.display();
				list1.quick_sort(0,size-1);
				printf("Array after sorting\n");
				list1.display();
				break;
			}
			case 3:
			{
				printf("Enter the input size of the array\n");
				cin>>size;
				if(size>1000 || size <-1)
				{
					printf("Not a valid input size, try again");
					break;
				}
				MergeSort list1(size);
				list1.fill_list();
				printf("\n Array before sorting \n");
				list1.display();
				list1.merge_sort(0,size-1);
				printf("Array after sorting\n");
				list1.display();
				break;
			}
			case 4:
			{
				printf("Enter the input size of the array\n");
				cin>>size;
				if(size>1000 || size <-1)
				{
					printf("Not a valid input size, try again");
					break;
				}
				InsertionSort list1(size);
				list1.fill_list();
				printf("\n Array before sorting \n");
				list1.display();
				list1.sort();
				printf("Array after sorting\n");
				list1.display();
				break;
			}
			case 9: return(0);
			default:cout<<"invalid option, try again";
					break;

		}
		printf("Select the type of sort \n1.Exchange Sort\n2. Quick\n3. Merge Sort\n4. Insertion Sort\n9.Quit\n");
	}
}