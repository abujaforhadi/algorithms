#include<bits/stdc++.h>
using namespace std;

void mergeSort(int *ar, int st, int en)
{
    if(st >= en) return;
    int mid = (st + en) / 2;
    mergeSort(ar, st, mid);
    mergeSort(ar, mid + 1, en);

    int len = en - st + 1;
    int br[len];
    int lid = st, rid = mid + 1;

    for(int l = st, r = mid + 1, b = 0; b < len; b++)
    {
        if(l == mid + 1) br[b] = ar[r++];
        else if(r == en + 1) br[b] = ar[l++];
        else if(ar[l] <= ar[r]) br[b] = ar[l++];
        else br[b] = ar[r++];
    }

    for(int i = 0, j = st; i < len; i++, j++) ar[j] = br[i];
}
int main()
{


}
