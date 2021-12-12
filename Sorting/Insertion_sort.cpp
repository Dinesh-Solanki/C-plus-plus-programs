#include <bits/stdc++.h>

using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i=1;i<n;i++){   //We consider first element as sorted so i=1
    int temp=arr[i];
    int j=i-1;
        for( ;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else
                break;
    }
    arr[j+1]=temp;
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {10, 2, 4, 23, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    cout << "Sorted Array \n";
    print(arr, n);
    return 0;
}




//insertion sort using while loop
/*
void insertionSort(int arr[], int n)
{
    for(int i=1;i<n;i++){   //We consider first element as sorted so i=1
        int temp=arr[i];
        int j=i-1;
        while(arr[j]>temp && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
    arr[j+1]=temp;
    }
}
*/
