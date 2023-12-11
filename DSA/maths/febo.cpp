#include <iostream>
using namespace std;
int main(){
    int n,temp;
    cout<<"enter febo no"<<endl;
    cin>>n;
    int a = 0;
    int b=1;
    cout<<a<<endl<<b<<endl;
    for(int i=1;i<=n;i++){
      temp =a+b;
      cout<<temp<<endl;
      a=b;
      b=temp;
    }
    return 0;
}