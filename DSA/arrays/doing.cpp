#include <iostream>
using namespace std;
int main(){
    int arr[15]= {1,3,4,5,2,7,5,7,8,5,55,8,6,4,33};
    int n =15;
    for(int i=0;i<n;i++){
                        cout<<"this about i";

        for (int j=i+1;j<n;j++){
                            cout<<"this about j";

            for(int k = j+1;j<n;k++){
                cout<<"this about k";
            }
        }

    }
    return 0;
}