/*Cho một dãy gồm n số nguyên a_{i} (n\leq 10 ^ {5}, a_{i}\leq 10 ^ {9})
 và một số nguyên dương k (k\leq n). Với mỗi phần tử i thuộc đoạn [1, n-k+1], 
 hãy in ra giá trị nhỏ nhất của dãy a trong đoạn [i, i+k-1]. */
/*
Input	
7 4
2 1 4 3 6 5 2
Output
1 1 3 2
*/
/*
#include<iostream>
#include<algorithm>
const int MaxN = 1 + 1e6;
using namespace std;
int n;
int k;
int a[MaxN];
int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n - k + 1; ++i)
    {
        int res = 1e9;
        for (int j = i; j < i + k; ++j) res = min(res, a[j]);
        cout << res << " ";
    }
    return 0;
}
*/
#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
int main()
{   
    int n;
    cin >> n;
    deque<int> dq;
    while (dq.size()) dq.pop_front();
    
    for (int i = 0; i <= n; i++)
    {
        while ( dq.size() && )
    }
}
