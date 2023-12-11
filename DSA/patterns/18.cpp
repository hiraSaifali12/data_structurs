#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k <= n-i+1; k++)
        {

            cout << "*";
        }
        cout << endl;
    }
    return 0;
}