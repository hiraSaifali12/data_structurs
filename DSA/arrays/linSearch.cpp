//find an element in an array
#include <iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    
    int arr[10]={2,4,3,6,8,1,8,9,11,12};
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;

    bool found =search(arr,10,key);
    if (found){
        cout<<"key is present";
    }
    else {
        cout<<"absent";
    }

    return 0;
}