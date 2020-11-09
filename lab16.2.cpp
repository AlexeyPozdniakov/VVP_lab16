#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k;
    cout << "Input number:" << endl;
    cin >> n;
    int* a = new int[n];
    int* b = new int[n];
    int* c = new int[n];
    int* d = new int[n];
    cout << "Input " << n << " numbers:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    int temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (b[j] > b[j + 1]) {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
    c[0] = b[0];
    for (i = 0; i < n; i++)
        d[i] = 0;
    d[0] = 1;
    j = 0;
    for (i = 1; i < n; i++)
    {
        if (b[i] != b[i - 1])
        {
            j++;
            c[j] = b[i];
        }
        d[j]++;
    }
    for (i = 0; i < n; i++)
        b[i] = 0;
    j = 0;
    for (i = 0; i < n; i++)
        if (d[i] != 2)
        {
            b[j] = c[i];
            j++;
        }
    k = j;
    cout << "New row:" << endl;
    for (i = 0; i < n; i++)
        for (j = 0; j < k; j++)
            if (a[i] == b[j])
                cout << a[i] << " ";
}
