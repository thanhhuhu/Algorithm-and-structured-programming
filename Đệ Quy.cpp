// Đệ quy 
/*
Đệ quy nói chung được 
hiểu là một sự vật được định nghĩa theo chính 
nó hoặc thuộc loại của nó.*/


//Ở đây, mình có một đoạn code tính n! bằng đệ quy như sau:
/*
#include<iostream>
using namespace std;
typedef long long ll;
ll factorial(int n)
{
	if (n == 0) return 1; // Giá trị cơ sở
		return n * factorial(n - 1); // Thân hàm
}
int main()
{
	cout << factorial(5) << endl;
	return 0;
}
*/
//Số Fibonacci, tổ hợp 
// Bài toán cơ sở: F0 = 0, F1 = 1
// Công thức truy hồi: Fn = Fn-1+Fn-2, n > 1
/*
#include<iostream>
using namespace std;
int F(int n)
{
	if (n == 0 || n == 1)
	{
		return n;
	}
	else
	{
		return F(n - 1) + F(n - 2);
	}
}
int main()
{
	int n;
	cin >> n;
	cout << F(n) << endl;
	return 0;
}
*/
/*Tổ hợp chập K của N (C(n, k)) được tính đệ quy dựa vào bài toán cơ sở và công thức truy hồi sau :

Bài toán cơ sở : C(n, 0) = 1 và C(n, n) = 1

Công thức truy hồi : C(n, k) = C(n - 1, k - 1) + C(n - 1, k) 
*/
/*
#include<iostream>
using namespace std;
int C (int n, int k)
{
	if (k == 0 || k == 1)
	{
		return 1;
	}
	else
	{
		return C (n - 1, k - 1) + C (n - 1, k);
	}
}
int main()
{
	cout << C(12, 3) << endl;
	return 0;
}
*/
/*Hệ nhị phân biểu diễn số dưới 2 bit là 0 và 1,
khi chuyển từ số thập phân N sang số nhị phân bạn thực hiện quá trình 
chia N cho 2 cho tới khi N = 0, viết ngược lại các số dư của N trong 
quá trình chia cho 2 đó sẽ được biểu diễn dưới dạng nhị phân.
Ví dụ N = 37 thì biểu diễn nhị phân của N sẽ là 100101
*/
/*
* #include<iostream>
using namespace std;

void decimal(long long n)
{
	if (n < 2)
	{
		cout << n;
	}
	else
	{
		decimal(n / 2);
		cout << n % 2;
	}
}
int main()
{
	cout << "37" << endl;
	decimal(37);
	cout << endl;
	cout <<"282828282828 = ";
	decimal(282828282828);
	return 0;
}
*/
/*Hệ thập lục phân hay hệ 16 biểu diễn số thông qua 16 ký tự gồm các chữ số từ 0 tới 9, các số từ 10 tới 15 được thay thế thành các chữ cái từ A tới F. 

Tương tự như chuyển từ hệ thập phân sang hệ 16 thì ta thực hiện chia cho 16 và lưu lại số dư trong quá trình chia, viết ngược lại số dư trong quá trình chia ta được biểu diễn dưới hệ số 16

Ví dụ N = 762 thì biểu diễn hệ 16 là 2FA*/
/*
* #include<iostream>
using namespace std;
void dec_to_hex (long long n)
{
	if (n < 16)
	{
		if (n < 10)
		{
			cout << n;
		}
		else
		{
			cout << (char)(n + 55);
		}
	}
	else 
	{
		dec_to_hex(n / 16);
		int r = n % 16;
		if (r < 10)
		{
			cout << r;
		}
		else
		{
			cout << (char)(r + 55);
		}
	}
}
int main()
{
	int n;
	cin >> n;
	dec_to_hex(n);
	cout << endl;
	cout << "282828282828: " << endl;
	dec_to_hex(282828282828);
	return 0;
}
*/

/*
Bài 1. Đếm số chữ số của số N
Bài toán cơ sở : D(N) = 1 nếu N < 10
Công thức truy hồi : D(N) = 1 + D(N / 10) nếu N ≥ 10
*/
/*
#include<iostream>
using namespace std;
int D(long long n)
{
	if (n < 10)
	{
		return 1;
	}
	else
	{
		return 1 + D(n / 10);
	}
}
int main()
{
	int n;
	cin >> n;
	cout << D(n) << endl;
}
*/
/*
Bài 3. Tính tổng chữ số chẵn (lẻ) của N
Bài toán cơ sở : S(N) = 0 nếu N lẻ, N nếu N chẵn với N < 10
Công thức truy hồi : S(N) = S(N / 10) nếu N lẻ, N % 10 + S(N / 10) nếu N chẵn với N ≥ 10 
*/
/*
#include<iostream>
using namespace std;
using ll = long long;
int s(ll n)
{
	if (n < 10)
	{
		if (n % 2 == 1)
		{
			return 0;
		}
		else
		{
			return n;
		}
	}
	else
	{
		return n % 10 + s(n / 10);
	}
}
int main()
{
	int n;
	cin >> n;
	s(n);
	return 0;
}
*/
