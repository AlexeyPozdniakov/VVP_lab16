#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Input number:" << endl;
    cin >> n;
    int* a = new int[n];
    cout << "Input " << n << " numbers:" << endl;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "New row:" << endl;
    for (i = 0; i < n; i++)
        if (a[i] < 0)
            cout << " " << a[i] << " 0";
        else
            cout << " " << a[i];
}
