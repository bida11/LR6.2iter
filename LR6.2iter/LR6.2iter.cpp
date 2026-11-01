#include <iomanip>
#include <iostream>
using namespace std;

int findMinIndex(const int* a, int n)
{
    int best = 0;
    for (int i = 1; i < n; ++i) if (a[i] < a[best]) best = i;
    return best;
}

int findMaxIndex(const int* a, int n)
{
    int best = 0;
    for (int i = 1; i < n; ++i) if (a[i] > a[best]) best = i;
    return best;
}

void swapExtremes(int* a, int n)
{
    const int low = findMinIndex(a, n), high = findMaxIndex(a, n);
    const int temp = a[low]; a[low] = a[high]; a[high] = temp;
}

void printArray(const int* a, int n)
{
    for (int i = 0; i < n; ++i) cout << setw(4) << a[i];
    cout << '\n';
}

#ifndef UNIT_TEST
int main()
{
    int a[] = { 4, -2, 9, 1, -7, 9 }; const int n = 6;
    cout << "Before:"; printArray(a, n);
    swapExtremes(a, n);
    cout << "After:"; printArray(a, n);
}
#endif
