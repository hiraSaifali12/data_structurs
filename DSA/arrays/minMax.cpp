#include <iostream>
#include <limits.h> 
using namespace std;
int getMax(int num[],int size){
    int maxi = INT_MIN;
    for(int i = 0;i<size;i++){
        maxi = max(maxi,num[i]);
    }
    return maxi;
}
int getMin(int num[],int size){
    int mini = INT_MAX;
    for(int i=0;i<size;i++){
        mini = min(mini,num[i]);
    }
    return mini;
}

int main(){
    int array[20];
    int n;
    
    cout<<"enter the size";
    cin >>n;

    for(int i =0;i<n;i++){
        cin>>array[i];
    }
    cout<<"the maximum value is "<<getMax(array ,n)<<endl;
    cout<<"the minimum value is "<<getMin(array ,n);
    return 0;

}