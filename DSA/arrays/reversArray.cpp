#include <iostream>
using namespace std;
void reverse(int arr[],int n){
    int s=0;
    int e= n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    cout<<endl;
}

void printArr(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
 int main(){
    int arr[6] = {1,4,3,6,7,2};
    int ar[5]= {5,4,7,8,9};
    reverse(arr,6);
    reverse(ar,5);
    printArr(arr,6);
    printArr(ar,5);
    return 0;
    }