#include<iostream>

using namespace std;

void Selectionsort(int arr[],int s){
    for(int i=0;i<s-1;i++){
        for(int j=i+1;j<s;j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    for(int i=0;i<s;i++){
        cout<<arr[i];
    }
}


int main(){
    int arr[5]={1,3,7,8,3};
    Selectionsort(arr,5);
}