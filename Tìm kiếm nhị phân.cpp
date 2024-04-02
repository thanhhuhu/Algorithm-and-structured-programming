/*Tổng quan về tìm kiếm nhị phân */
/*
#include<iostream>
#include<algorithm>
using namespace std;
const int MaxN = 1 + 1e6;
int n, a[MaxN], q;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> q;
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	while (--q)
	{
		int x, check = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] == x)
			{
				check = 1;
			}
		}
		if (check)  cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
*/
/*
Tìm kiếm nhị phân là một thuật toán tìm kiếm giá trị xác định trên dãy đã sắp xếp.

Thuật toán hoạt động bằng cách chọn phần tử trung vị (phần tử ở vị trí chính giữa). 
Nếu phần tử cần tìm khác phần tử trung vị ta sẽ tiếp tục xét. Nếu phần tử cần tìm kiếm nhỏ hơn phần tử trung vị, 
ta sẽ tiếp tục tìm kiếm trên nửa nhỏ hơn, ngược lại ta sẽ tìm kiếm trên nửa lớn hơn. 
Kết thúc quá trình tìm kiếm mà không có phần tử nào bằng phần tử cần tìm, ta sẽ kết luận phần tử cần tìm không có trong dãy.*/
/*#include<iostream>
#include<algorithm>
using namespace std;
const int MaxN = 1 + 1e6;
int n, a[MaxN], q;

bool binarySearch(int a[], int size, int target)
{
	int low = 0;
	int height = size - 1;
	while (low <= height)
	{
		int middle = (low + height) / 2;
		if (a[middle] == target) return 1;
		if (a[middle] < target) height = middle - 1;
		else low = middle + 1;
	}
	return 0;
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	for (int i = 0; i < n; i++) cout << a[i] << " ";
	cout << endl;
	cin >> q;
	while (--q)
	{
		int x;
		cin >> x;
		if (binarySearch(a, n, x)) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}*/
/* Lower_bound*/
/*
Hàm lower_bound
Hàm lower_bound sẽ được sử dụng như sau:

lower_bound({first}, {last}, {element});

Trong đó:

first, last lần lượt là 2 con trỏ trỏ đến vị trí xuất phát và kết thúc của dãy cần tìm kiếm.
Khoảng được tìm kiếm là [first, last), tức là tất cả các phần tử giữa first và last và thêm phần tử được
trỏ bởi first nhưng không có phần tử trỏ bởi last
element: phần tử cần tìm kiếm
Hàm sẽ trả về con trỏ trỏ đến phần tử đầu tiên trong đoạn đang xét không nhỏ hơn phần tử element*/
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int a[] = { 4,5,3,2,6,2,9 };
//	sort(a, a + 8);
//	auto pos = lower_bound(a, a + 8, 4);
//	cout << "Vi tri dau tien khong nho hon 4 la: " << pos - a << endl;
//	return 0;
//}
/*
Hàm upper_bound
Cách sử dụng hàm upper_bound hoàn toàn tương tự hàm lower_bound, 
chỉ khác là upper_bound sẽ tìm phần tử đầu tiên lớn hơn phần tử element.
*/
//#include<iostream>
//#include<algorithm>
//const int MaxN = 1 + 1e6;
//using namespace std;
//int main()
//{
//	int a[] = { 4,5,3,2,6,2,9};
//	sort(a, a + 7);
//	auto pos = upper_bound(a, a + 7, 4);
//	cout << "Vi tri dau tien lon hon 4 la: " << pos - a << endl;
//	return 0;
//}

#include<iostream>
#include<algorithm>
const int MaxN = 1 + 1e6;
typedef long long ll;
using namespace std;
int n, k, a[MaxN];
bool check(ll days)
{
	ll products = 0;
	for (int i = 0; i < n; i++) products += days / a[i];
	return products >= k;
}
int main()
{
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> a[i];
	ll l = 0, r = 1e18;
	while (l < r)
	{
		ll tg = (l + r) / 2;
		if (check(tg)) r = tg;
		else l = tg + 1;
	}
	cout << l << endl;
	return 0;
}
