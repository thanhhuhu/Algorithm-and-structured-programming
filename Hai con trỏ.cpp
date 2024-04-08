// 2 con trỏ 


//#include<iostream>
//using namespace std;
//#define MaxN 1000
//
//void nhap(int *a, int n) 
//{
//    for (int i = 0; i < n; i++) 
//    {
//        cin >> a[i];
//    }
//}
//void xuat(int *a, int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        cout << a[i] << " ";
//    }
//}
//int main()
//{
//    int n;
//    cin >> n;
//    int a[MaxN];
//    nhap(a, n);
//    xuat(a, n);
//    return 0;
//}
/*
Cho hai dãy số nguyên a và b lần lượt gồm n và m phần tử được sắp xếp không giảm (n, m\leq 10^{5}; |a_{i}|, |b_{i}|\leq 10^{9}).
Hãy ghép hai dãy trên thành một dãy mới c sao cho các phần tử trong dãy c được sắp xếp không giảm
Input	
4
2 5 7 9
5
1 3 5 6 8
Output
1 2 3 5 5 6 7 8 9
*/
/*
#include<iostream>
#include <algorithm>
using namespace std;
const int MaxN = 1 + 1e5;
int n, m, a[MaxN];
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> a[n+i];
	}
	sort(a, a + n + m);
	for (int i = 0; i < n + m; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
*/
/*
#include<iostream>
#include<vector>

using namespace std;

const int MaxN = 1 + 1e5;

int n, m, a[MaxN], b[MaxN];
vector<int> c;

int main() {
    
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    cin >> m;
    for (int i = 0; i < m; ++i) cin >> b[i];
    int i = 0, j = 0;
    while (i < n && j < m) 
    {
        if (i == n) 
        {
            c.push_back(b[j]);
            j++;
            continue;
        }
        if (j == m) 
        {
            c.push_back(a[i]);
            i++;
            continue;
        }
        if (a[i] < b[j]) 
        {
            c.push_back(a[i]);
            i++;
        }
        else {
            c.push_back(b[j]);
            j++;
        }
    }
    for (int i : c) cout << i << " ";

    return 0;
}
*/
/*
* Để các bạn có thể hiểu hơn về cách sử dụng hai con trỏ, mình sẽ bổ sung ví dụ sau

Cho một dãy số nguyên gồm n phần tử a_{i} (n\leq 10^{5},|a_{i}|\leq 10^{9})
được sắp xếp không giảm. Hãy in ra hai vị trí thuộc dãy a sao cho tổng của hai phần tử ở vị trí đó bằng số nguyên k cho trước.
Nếu không có hai vị trí nào thỏa mãn in ra “-1 -1”.
Ví dụ:
Input	
7 10
1 1 2 4 7 8 11
Output
3 6
*/
/*
* #include<iostream>
#include<vector>
using namespace std;
const int MaxN = 1 + 1e5;
int n, k, a[MaxN];
int main()
{
    cin >> n;
    cin >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    int i = 0; 
    int j = n - 1;
    while (i < j)
    {
        if (a[i] + a[j] == k)
        {
            cout << i << " " << j << endl;
            break;
        }
        if (a[i] + a[j] < k)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    if (i == j) cout << " -1 -1";
    return 0;
}
*/
/*
Cho dãy số nguyên dương a có n
 phần tử. Hãy tìm độ dài đoạn con dài nhất trong dãy sao cho tổng các phần tử trong đoạn này không quá s
Dữ liệu đảm bảo các phần tử trong dãy a
 đều có giá trị không quá s
*/
/*
#include<iostream>
#include<algorithm>
using namespace std;
const int MAXN = 100005;
int n, a[MAXN];
int s;
int ans = 0;
int sum = 0;
int main()
{
    cin >> n >> s;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int l = 0, r = 0; r < n; r++) // fixing indexing issue
    {
        sum += a[r];
        while (sum > s)
        {
            sum -= a[l];
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    cout << ans;
    return 0;
}

*/
