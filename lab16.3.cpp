#include <iostream>
using namespace std;
int main()
{
    int n, i, min, max;
    cout << "Input number:" << endl;
    cin >> n;
    int* a = new int[n];
    cout << "Input " << n << " numbers:" << endl;
    for (i = 0; i < n; i++)
        cin >> a[i];
    min = a[0];
    max = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
        else
            if (a[i] > max)
                max = a[i];
    }
    cout << "New row:" << endl;
    for (i = 0; i < n; i++)
        if (a[i] == min)
            cout << " 0 " << a[i];
        else if (a[i] == max)
            cout << " " << a[i] << " 0";
        else
            cout << " " << a[i];
}
