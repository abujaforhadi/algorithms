#include <bits/stdc++.h>
using namespace std;

int knapsack(int wt[], int val[], int w, int n)
{
    if(n == 0 || w == 0)
        return 0;
    if(wt[n-1] <= w)
    {
        return max(val[n-1] + knapsack(wt, val, w-wt[n-1], n-1), knapsack(wt, val, w, n-1));
    }
    return (wt, val, w, n-1);
}

int main()
{
    int n, w;
    cout<<"Enter the number of items :";
    cin >> n;
    cout<<"Enter the capacity of the knapsack : ";
    cin >> w;
    int wt[n], val[n];
    cout<<"Enter the item's weight and its value :\n";
    for(int i = 0; i < n; ++i)
    {
        cin >> wt[i] >> val[i];
    }
    cout <<"Maximum value in a 0-1 knapsack : " <<knapsack(wt, val, w, n) << endl;

}
