#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {

            cout << " ";
        }
        int value = i;
        for (int j = 1; j <= n - i + 1; j++)
        {
           
            cout << value;
            value++;
            
        }

        cout << endl;
    }
    return 0;
}