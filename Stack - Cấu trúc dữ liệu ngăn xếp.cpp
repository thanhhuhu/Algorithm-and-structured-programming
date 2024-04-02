//https://howkteam.vn/course/cau-truc-du-lieu-va-giai-thuat/stack-cau-truc-du-lieu-ngan-xep-4271
//Cho một dãy số gồm n số
// nguyên dương ai(n≤106, ai≤109).
// Với mỗi vị trí i, hãy in ra vị trí j gần nhất 
// về phía bên trái thoả mãn ai < aj.
// Nếu như không có phần tử nào thoả mãn in ra - 1.
//#include<iostream>
//using namespace std;
//
//const int MaxN = 1e6 + 1;
//
//int n, a[MaxN];
//
//int main() {
//    cin >> n;
//    for (int i = 0; i < n; ++i) cin >> a[i];
//    for (int i = 0; i < n; ++i) {
//        int pos = -1; // Khởi tạo giá trị kết quả ban đầu
//        for (int j = i - 1; j >= 0; --j)
//            if (a[j] > a[i]) {
//                // Nếu tìm thấy vị trí j thoả mãn thì ghi lại và dừng vòng lặp
//                pos = j;
//                break;
//            }
//        // Kiểm tra xem có tồn tại vị trí j không, nếu có thì giá trị pos sẽ nằm trong đoạn [0, n – 1]
//        // In ra phải cộng 1 do chỉ số mảng trong C++ bắt đầu từ 0
//        if (pos >= 0) cout << pos + 1 << " ";
//        else cout << -1 << " ";
//    }
//
//    return 0;
//}


//ví dụ về stack và các chức năng 
//#include<iostream>
//#include<stack>
//
//using namespace std;
//struct CustomStack
//{
//	int sz = 0; // kich thuoc stack 
//	int a[int(1e6 + 1)];
//
//	void push(int element)     // Thêm phần tử vào stack
//
//	{
//		a[sz] = element;
//		sz++;
//	}
//	void pop()     // Xoá phần tử khỏi stack
//
//	{
//		if (sz)
//		{
//			sz--;
//		}
//	}
//	int top()     // Lấy giá trị cuối cùng trong stack
//
//	{
//		if (sz)
//			return a[sz - 1];
//	}
//	int getSize()    // Lấy kích thước stack
//
//	{
//		return sz;
//	}
//};


//#include<stack>
//#include<iostream>
//using namespace std;
//stack<int> st;
//int main()
//{ 
//    // Thêm các phần tử vào stack
//    st.push(1);
//    st.push(3);
//    st.push(5);
//    // Hiện tại stack là [1, 3, 5]
//
//    // In ra phần tử cuối cùng trong stack và kích thước stack
//    cout << "Phan tu cuoi cung trong stack la:" << st.top() << endl;
//    cout << "Kich thuoc hien tai cua stack la:" << st.size() << endl;
//
//    // Loại bỏ 1 phần tử ra khỏi stack
//    st.pop();
//    cout << "Loai bo phan tu cuoi ra khoi stack" << endl;
//    // Hiện tại stack là [1, 3]
//
//    // Kiểm tra stack có rỗng không
//    if (st.empty()) cout << "Stack rong" << endl;
//    else cout << "Stack khong rong" << endl;
//
//    // Sau khi loại bỏ 1 phần tử ra in ra phần tử cuối cùng trong stack và kích thước stack
//    cout << "Phan tu cuoi cung trong stack la:" << st.top() << endl;
//    cout << "Kich thuoc hien tai cua stack la:" << st.size() << endl;
//
//    // Loại bỏ tất cả các phần tử ra khỏi stack
//    while (st.size() > 0) st.pop();
//
//    // Kiểm tra stack có rỗng không
//    if (st.empty()) cout << "Stack rong" << endl;
//    else cout << "Stack khong rong" << endl;
//}
//

//1. Write a C program to implement a stack using an array with push and pop operations.
//Expected Output :
//Elements in the stack are : 3 5 4 3 2 1
//#include<iostream>
//using namespace std;
//#define max_size 100 // max size của mảng 
//
//int stack[max_size];// tạo mảng để triển khai stack
//int top = -1;// biến để theo dõi phần trên cùng của ngăn xếp, được khởi tạo là -1 cho biết ngăn xếp trống 
//
//// Hàm để đẩy phần tử vào ngăn xếp 
//void push(int data) {
//    if (top == max_size - 1) // kiểm tra ngăn xếp chống tràn 
//    {
//        cout << "Overflow stack!" << endl;
//        return;
//    }
//    top++;// di chuyển con trỏ trên cùng tới vị trí tiếp theo
//    stack[top] = data;// thêm dữ liệu vào ngăn xếp ở vị trí trên cùng hiện tại 
//}
//// hàm lấy phần tử ra khỏi ngăn xếp
//int pop() 
//{
//    if (top == -1) // kiểm tra ngăn xếp có trống không 
//    {
//        cout << "Stack is empty!" << endl;
//        return -1; // Return a default value indicating stack underflow
//    }
//    int data = stack[top];// lấy dữ liệu ở trên đầu của ngăn xếp 
//    top--;// di chuyển con trỏ trên cùng xuống vị trí trước đó
//    return data;// trả về dữ liệu đã lấy ra 
//}
//
//int main() 
//{
//    // Đẩy các phần tử vào ngăn xếp 
//    push(1);
//    push(2);
//    push(3);
//    push(4);
//    push(5);
//    push(3);
//    cout << "Elements in the stack are: ";
//    // Lấy và in ra các phần tử cho đến khi ngăn xếp chống 
//    while (top != -1) 
//    {
//        cout << pop() << " ";
//    }
//    cout << endl;
//    return 0;
//}

//Exercise 1. (Trivial problem, but keep going …) 
//Write an algorithm that will move the top value on one stack to the top of
//another stack.c++
//#include<iostream>
//#include<stack>
//using namespace std;
//
//void moveTop(stack<int>& fromStack, stack<int>& toStack)
//{
//	if (!fromStack.empty())
//	{
//		int topValue = fromStack.top();
//		fromStack.pop();
//		toStack.push(topValue);
//		cout << "Moved " << topValue << " from Stack A to Stack B";
//	}
//	else
//	{
//		cout << "Source stack is empty!" << endl;
//	}
//}
//int main()
//{
//	stack<int>stackA, stackB;
//	stackA.push(5);
//	stackA.push(10);
//	stackA.push(15);
//	
//	moveTop(stackA, stackB);
//	cout << endl;
//	cout << "Stack A ";
//	while (!stackA.empty())
//	{
//		cout << stackA.top() << " ";
//		stackA.pop();
//	}
//	cout << endl;
//	cout << "Stack B ";
//	while (!stackB.empty())
//	{
//		cout << stackB.top() << " ";
//		stackB.pop();
//	}
//	cout << endl;
//	return 0;
//}

/*Exercise 2. (A little more interesting …) Write an algorithm that starts with a stack containing
n integers and finishes with the same integers in the same stack, but with the value that was
on the bottom of the stack moved to the top, and all other values moved down one position.
For example if the stack initially looks like this:
4 <-top
17
9
23
then it should finish like this:
23
4
17
9
*/
//#include <iostream>
//#include <stack>
//#include <queue>
//
//using namespace std;
//
//void moveBottomToTop(stack<int>& s) {
//    if (s.empty())
//        return;
//
//    // Use a queue to store elements temporarily
//    queue<int> q;
//
//    // Pop all elements from stack and enqueue them into the queue
//    while (!s.empty()) {
//        q.push(s.top());
//        s.pop();
//    }
//
//    // Dequeue the bottom element from the queue
//    int bottom = q.front();
//    q.pop();
//
//    // Enqueue all elements back to the stack except the bottom element
//    while (!q.empty()) {
//        s.push(q.front());
//        q.pop();
//    }
//
//    // Push the bottom element to the top of the stack
//    s.push(bottom);
//}
//
//int main() {
//    // Example usage
//    stack<int> s;
//    s.push(4);
//    s.push(17);
//    s.push(9);
//    s.push(23);
//
//    moveBottomToTop(s);
//
//    // Print the stack
//    while (!s.empty()) {
//        cout << s.top() << " ";
//        s.pop();
//    }
//    cout << endl;
//
//    return 0;
//}
//


/*Exercise 4: Improve the “move the smallest value to the top of the stack” algorithm from the notes so that it works properly when there are duplicates of the smallest value in the stack.*/
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void moveSmallestToTop(stack<int>& s) {
    if (s.empty()) {
        return;
    }

    int smallest = s.top(); // Assume the top element is the smallest initially
    vector<int> temp; // To store the occurrences of the smallest value

    // Find the smallest value and count its occurrences
    while (!s.empty()) {
        if (s.top() < smallest) {
            smallest = s.top();
            temp.clear(); // Clear previous occurrences
            temp.push_back(smallest);
        }
        else if (s.top() == smallest) {
            temp.push_back(smallest); // Store duplicate occurrences
        }
        s.pop();
    }

    // Push all elements back to stack except the occurrences of smallest
    for (int i = temp.size() - 1; i >= 0; --i) {
        s.push(temp[i]);
    }
}

int main() {
    // Example usage
    stack<int> s;
    s.push(4);
    s.push(17);
    s.push(9);
    s.push(3);
    s.push(9); // Duplicate of smallest value
    s.push(1);
    s.push(3); // Duplicate of smallest value

    moveSmallestToTop(s);

    // Print the stack
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
