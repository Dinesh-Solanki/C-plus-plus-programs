#include <iostream>
using namespace std;

void Reverse(int arr[],int n){
    int s=0, e=n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}


void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main() {
    int arr[]={12,45,23,51,19};
    int n= sizeof(arr)/sizeof(arr[0]);
    Reverse(arr,n);
    cout<<"After Reverse: ";
    print(arr,n);
	return 0;
}




/* Using for Loop

void Reverse(int arr[], int n){
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
}


void Reverse(int arr[],int n){
    int s=0, e=n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
    
    

*/
