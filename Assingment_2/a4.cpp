#include<iostream>
using namespace std;
typedef struct
{
	int data;
	char c;
}stu;
template<typename T>
inline void getdata(T a[],int n)
{
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
template<typename T>
inline void printdata(T a[],int n)
{
    cout<<"The sorted elements are\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
template<typename T>
inline void swap(T* a, T* b)
{ 
    T t = *a; 
    *a = *b; 
    *b = t; 
}
template<typename T>
int partition (T arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
}
template<typename T>
void quicksort(T arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1); 
        quicksort(arr, pi + 1, high); 
    } 
} 
int main()
{
	int i,n,j;
	do
	{
        cout<<"Enter number of elements\n";
        cin>>n;
		cout<<"Choose \n1.int\n2.short\n3.float\n4.double\n5.struct\n6.Exit\n";
		cin>>i;
		switch(i)
		{
			case 1:{
				int a[n];
                getdata<int>(a,n);
				quicksort<int>(a,0,n-1);
                printdata<int>(a,n);
                break;
				}
			case 2:{
				short a[n];
                getdata<short>(a,n);
				quicksort<short>(a,0,n-1);
                printdata<short>(a,n);
				break;
				}
			case 3:{
				float a[n];
                getdata<float>(a,n);
				quicksort<float>(a,0,n-1);
                printdata<float>(a,n);
				break;
				}
			case 4:{
                double a[n];
                getdata<double>(a,n);
				quicksort<double>(a,0,n-1);
                printdata<double>(a,n);
				break;
				}
			case 5:{
                stu a[n];
                //getdata<stu>(a,n);
				//quicksort<stu>(a,0,n-1);
                //printdata<stu>(a,n);;
				break;
				}
		}
	}
	while(i!=6);
}