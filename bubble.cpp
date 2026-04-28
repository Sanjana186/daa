 #include<iostream>
 using namespace std;
/* Bubble Sort 
    it goes through the array and assigns the largest element to the end in each iteration
    time complexity : O(n^2) 
    space complexity : O(1) */
 void bsort (int a[], int n)
 {
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j<n-1-i; j++)
        {
            if(a[j+1]<a[j])
            {
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
 }
 int main()
 {
    int n;
    cout<<"Enter the number of elements in array :";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array :";
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    bsort(a,n);
    cout<<"After Sorting : \n";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
 }