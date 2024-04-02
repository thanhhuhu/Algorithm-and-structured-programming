/*
* Sắp xếp nổi bọt (Bubble Sort)
Ý tưởng
Xét lần lượt các cặp 2 phần tử liên tiếp. Nếu phần tử đứng sau nhỏ hơn phần tử đứng trước,
ta đổi chỗ 2 phần tử. Nói cách khác, phần tử nhỏ nhất sẽ “nổi” lên trên.
Ta lặp lại hành động trên cho đến khi không còn 2 phần tử nào thỏa mãn. 
Do một phần tử không thể bị đổi chỗ quá n – 1 lần nên số lần lặp không quá n – 1 lần.
*/
/*
#include<iostream>
#include<algorithm>
using namespace std;
const int maxN = 1 + 1e5;
int n, a[maxN];
int main()
{
	cin >> n;
	for (int i; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			if (a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	return 0;

}
*/
/*
Sắp xếp nhanh (Quick Sort)
Ý tưởng
Chia dãy làm hai đoạn “lớn” và “nhỏ”
Chọn 1 phần tử trung gian
Các phần tử nhỏ hơn phần tử trung gian chia vào đoạn “nhỏ”, các phần tử lớn hơn phần tử trung gian chia vào đoạn “lớn”
Gọi đệ quy sắp xếp hai phần
*/
/*
* #include<iostream>

using namespace std;

const int MaxN = 1 + 1e5;

int n, a[MaxN];

void quickSort(int a[], int left, int right) {
    int i = left, j = right;
    int tg = a[(left + right) / 2];
    // Phân chia dãy 
    while (i <= j) {
        while (a[i] < tg) i++;
        while (a[j] > tg) j--;
        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    // Gọi đệ quy sắp xếp hai đoạn nửa
    if (left < j) quickSort(a, left, j);
    if (i < right) quickSort(a, i, right);
}

int main() {
  
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    quickSort(a, 0, n - 1);
    for (int i = 0; i < n; ++i) cout << a[i] << " ";

    return 0;
}


*/
/*
Sắp xếp chèn (Insertion Sort)
Ý tưởng
Ý tưởng chính của thuật toán là ta sẽ sắp xếp lần lượt từng đoạn gồm 1 phần tử đầu tiên, 2 phần tử đầu tiên, …
Giả sử ta đã sắp xếp xong i phần tử của mảng. Để sắp xếp i + 1 phần tử đầu tiên, 
ta tìm vị trí phù hợp của phần tử thứ i + 1 và "chèn" nó vào đó.
*/
/*
#include<iostream>
#include<algorithm>
using namespace std;

const int MaxN = 1 + 1e5;

int n, a[MaxN];

int main() {

    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];

    for (int i = 0; i < n; ++i) {
        // Tìm vị trí của i
        int j = i;
        while (j > 0 && a[i] < a[j - 1]) j--;
        // Chèn a[i] vào vị trí đúng
        // Cơ chế chèn giống như cách làm đã nêu ở bài Linked List
        int temp = a[i];
        for (int k = i; k > j; --k) a[k] = a[k - 1];
        a[j] = temp;
    }

    for (int i = 0; i < n; ++i) cout << a[i] << " ";

    return 0;
}
*/
/*Sử dụng sort
Hàm sort trong C++ sẽ được dùng như sau
sort({first}, {last}, [comp]);
*/
/*
* #include<iostream>
#include<algorithm>
using namespace std;

#define Max 50
int main()
{   
    int n;
    int a[Max];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

*/
// dung function compare
/*
#include<iostream>
#include<algorithm>
using namespace std;

#define Max 50
bool comp(int& i, int& j)
{
    return i < j;
}
int main()
{
    int n;
    int a[Max];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    sort(a, a + n, comp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
*/
//Bài 1. Thuật toán đổi chỗ trực tiếp In ra các bước của thuật toán sắp xếp đổi chỗ trực tiếp 
#include<iostream>
using namespace std;

void doiChoTrucTiep(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] > arr[j]) {
                // Đổi chỗ hai phần tử
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

                // In ra mỗi bước
                cout << "Buoc " << i + 1 << ": ";
                for (int k = 0; k < n; ++k) {
                    cout << arr[k] << " ";
                }
                cout << endl;
            }
        }
    }
}
int main()
{
    int arr[] = { 4, 5, 7, 3, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Mang truoc khi sap xep: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    doiChoTrucTiep(arr, n);

    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}