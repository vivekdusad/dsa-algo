#include <bits/stdc++.h>
using namespace std;

int findMaximum(int a[], int start, int final)
{
    int maximum;
    maximum = a[0];
    for (int i = start; i < final; i++)
    {
        if (a[i] > maximum)
        {
            maximum = a[i];
        }
    }
    return maximum;
}
int LSS(int arr[], int n)
{
    int lis[n];
    lis[0] = 1;
    for (int i = 1; i < n; i++)
    {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
            if (abs(arr[j] - arr[i]) >= findMaximum(arr, 0, i))
                lis[i] = max(lis[i], lis[j] + 1);
    }
    int res = lis[0];
    for (int i = 0; i < n; i++)
    {
        res = max(lis[i], res);
    }
    return res;
}

int main()
{
    int test_cases;
    cin>>test_cases;
    while (test_cases--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<LSS(a,n);
    }
    
}
