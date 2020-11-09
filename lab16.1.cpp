#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Input number:" << endl;
    cin >> n;
    int *a = new int[n];
    cout << "Input " << n << " numbers:" << endl;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "New row:" << endl << a[0];
    for (i = 1; i < n; i++)
        if (a[i] != a[i - 1])
            cout << " " << a[i];
}
