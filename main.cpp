#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n ,q ;
    cin >> n >> q ;
    long long arr1[n];
    long long arr2[n];
    for(int i = 0 ; i<n ; i++)
    {
        cin >> arr1[i] ;
        if(i == 0)
        {
			arr2[i] = arr1[i];
		}
		else
		{
			arr2[i] = arr1[i] + arr2[i-1];
		}
    }
    while(q--)
    {
        long long l , r ;
        cin >> l >> r ;
        l--;
        r--;
        long long sum = arr2[r] - arr2[l] + arr1[l] ;
        cout << sum << endl ;
    }

    return 0;
}
