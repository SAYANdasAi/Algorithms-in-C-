#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        int min = i; 
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[min]) min = j;
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;

    }
}

int main(){
    int n;
    cout<<"Enetr the size for your array: ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cout<<"Enter element at index "<<i<<": ";
        cin>>arr[i];
    }
    selectionSort(arr,5);
    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
}