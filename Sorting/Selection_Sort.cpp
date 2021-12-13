#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void selectionSort(int arr[],int n)
{
    
    for(int i=0;i<n-1;i++){
         int minIndex=i;
         for(int j=i+1;j<n;j++){
             if(arr[j]<arr[minIndex]){
                 minIndex=j;
             }
         }
         swap(arr[minIndex],arr[i]);
}
}


void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main() {
    int arr[]={12,45,23,51,19,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    cout<<"After Sort: ";
    print(arr,n);
	return 0;
}
