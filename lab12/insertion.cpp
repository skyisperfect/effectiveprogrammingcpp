#include <iostream>
#include <cstdlib>
using namespace std;

void insertion_sort(int arr[], int length);
void print_array(int array[],int size);

int main()
{
    //int array[] = {4,6,3,7,5,9,2,8,1,10};
int n;
cout << "Enter size of array ";
cin >> n;
int a[n];
int i=0;
while(i<n){
cout << "Enter a[" << i << "]=";
cin>>a[i];
i++;}
int size=n;
for(i=0;i<size;i++)
{ cout << a[i] <<' '; }
cout << endl; 
    insertion_sort(a,n);
    print_array(a,n);
    return 0;
}

void insertion_sort(int arr[], int length)
{
    int i,j,tmp;
    for (i = 1; i < length; i++) {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }
    }
}

void print_array(int array[], int size)
{
    int j;
    for (j = 0; j < size; j++)
    {
        std::cout << array[j] << std::endl;
    }
}
