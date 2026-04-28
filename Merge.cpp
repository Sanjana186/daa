#include<iostream>
using namespace std;
/*
Merge Sort
here , we divide the array into two halves and then merge them
time complexity : O(n log n)
space complexity : O(n)
*/

void merge(int a[], int low, int high, int mid)
{
    int i = low;
    int j = mid +1;
    int k = low;
    int temp[100];
    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
        }
    }
    while(i<=mid)
    {
        temp[k++] = a[i++];
    }
    while(j<=high)
    {
        temp[k++]= a[j++];
    }
    for(int i = low; i<= high; i++)
    {
        a[i] = temp[i];
    }
}
void mergeSort(int a[],int low, int high)
{
    if(low<high)
    {
        int mid = (low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,low,high,mid);
    }
}
int main()
{
    int a[] = {38,27,43,3,9,82,10};
    int n = sizeof(a)/sizeof(a[0]);
    mergeSort(a,0,n-1);
    cout<<"Sorted array: ";
    for(int i = 0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}