#include <iostream>
using namespace std;

void SelectionSort(int n,int elements[])
{
	int temp,i,j,curr_min_index,minimum;

	for(i=1;i<=n;i++)
	{
		curr_min_index=i;
		minimum = elements[i];
		for(j=i+1;j<=n;j++)
		{
			if(minimum>elements[j])
			{
				minimum = elements[j];
				curr_min_index = j;
			}
		}
		temp = elements[i];
		elements[i] = elements[curr_min_index];
		elements[curr_min_index]=temp;
	}
	cout<<"Sorting Order Array: \n";
    for (i = 1; i <= n; ++i)
        cout<<elements[i]<<"\t";

}
void ModifiedSelectionSort(int n,int elements[],int k)
{
        int temp,i,j,curr_min_index,minimum;

	for(i=1;i<=k;i++)
	{
		curr_min_index=i;
		minimum = elements[i];
		for(j=i+1;j<=n;j++)
		{
			if(minimum>elements[j])
			{
				minimum = elements[j];
				curr_min_index = j;
			}
		}
		temp = elements[i];
		elements[i] = elements[curr_min_index];
		elements[curr_min_index]=temp;
	}
	cout<<"Sorting Order Array: \n";
    for (i = 1; i <= k; i++)
        cout<<elements[i]<<"\t";
    
}
void ModifiedSelectionSortMedian(int n,int elements[],int k)
{
        int temp,i,j,curr_min_index,minimum;

	for(i=1;i<=k;i++)
	{
		curr_min_index=i;
		minimum = elements[i];
		for(j=i+1;j<=n;j++)
		{
			if(minimum>elements[j])
			{
				minimum = elements[j];
				curr_min_index = j;
			}
		}
		temp = elements[i];
		elements[i] = elements[curr_min_index];
		elements[curr_min_index]=temp;
	}
}
int main() 
{
 int elements[100],n,option,k, i ,j ,temp;
 float median = 0.0;

	cout<<"Enter the Number of Elements in the array\n";
	cin>>n;

    for (i = 1; i <= n; i++)
    {
		cout<<"Enter the Number : "<< (i) <<"  : ";
        cin>>elements[i];
    }
        
	cout<<"Select the appropriate option from the list given below\n";
	cout<<"1. Program 1-a Selection Sort\n";
	cout<<"2. Program 1-b Modified Selection Sort\n";
    cout<<"3. Program 1-c Sorted elements till median";
	cin>>option;
	
	switch(option){
		case 1 : SelectionSort(n,elements);
				 break;
		case 2 : cout<<"Enter the number of elements to be sorted(k)";
				 cin>>k;
				 ModifiedSelectionSort(n,elements,k);
				 break;
        case 3 : if(n%2==0)
                    {
                        k = ((n/2)+1);
                    }
                 else
                 {
                        k = (n+1)/2;
                        
                 }
              
				 ModifiedSelectionSortMedian(n,elements,k);
                 
                 if(n%2==0)
                    {
                        median = (elements[k]+elements[k-1])/2.0;
                    }
                 else
                 {
                        median = elements[k];
                        
                 }
                 cout<<"\nMedian is "<<median;
				 break;
	}
    
    return 0;
}