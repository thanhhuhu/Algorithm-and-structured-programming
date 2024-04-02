//QUEUE
/*phần tử nào được vào trong queue trước sẽ được ra trước.*/
/*push: Thêm phần tử vào cuối queue
pop: Loại bỏ phần tử ở đầu queue
front: Trả về giá trị là phần tử đầu tiên trong queue
size: Trả về số nguyên là kích thước của queue
empty: Trả về giá trị bool, true nếu queue rỗng, false nếu queue không rỗng*/


// #include<iostream>
//#include<queue>
//using namespace std;
//queue<int> q;
//int main()
//{
//	q.push(3);
//	q.push(2);
//	q.push(1);
//	cout << "Phan tu dau tien trong queue la: " << q.front() << endl;
//	cout << "Kich thuoc cua queue la: " << q.size() << endl;
//	cout << "Loai bo phan tu dau trong queue la: "  << endl;
//	q.pop();
//	if (q.empty()) cout << "Queue rong! " << endl;
//	else cout << "Queue khong rong! " << endl;
//	cout << "Phan tu dau tien trong queue la: " << q.front() << endl;
//	cout << "Kich thuoc cua queue la: " << q.size() << endl;
//	return 0;
//}

//DEQUEUE
/*push_front: Thêm phần tử vào đầu deque
push_back: Thêm phần tử vào cuối deque
pop_front: Loại bỏ phần tử ở đầu deque
pop_back: Loại bỏ phần tử ở cuối deque
front: Trả về giá trị là phần tử đầu trong deque
back: Trả về giá trị là phần tử cuối trong deque
size: Trả về giá trị nguyên là kích thước của deque
empty: Trả về giá trị bool, true nếu deque rỗng, false nếu deque không rỗng*/

#include<iostream>
#include<deque>
using namespace std;

deque<int> dq;  

int main() {
    // Thêm 3, 6 vào cuối deque
    dq.push_back(3);
    dq.push_back(6);
    // Lúc này deque là [3, 6]
    // Thêm 4 vào đầu deque
    dq.push_front(4);
    // Lúc này deque là [4, 3, 6]
    // Thêm 1 vào đầu deque
    dq.push_front(1);
    // Lúc này deque là [1, 4, 3, 6]

    cout << "Kich thuoc cua deque la: " << dq.size() << endl;
    cout << "Phan tu dau tien trong deque la: " << dq.front() << endl;
    cout << "Phan tu cuoi cung trong deque la: " << dq.back() << endl;

    cout << "Xoa bo phan tu cuoi deque" << endl;
    dq.pop_back();
    // Lúc này deque là [1, 4, 3]

    cout << "Kich thuoc cua deque la: " << dq.size() << endl;
    cout << "Phan tu dau tien trong deque la: " << dq.front() << endl;
    cout << "Phan tu cuoi cung trong deque la: " << dq.back() << endl;

    cout << "Xoa bo phan tu dau deque" << endl;
    dq.pop_front();
    // Lúc này deque là [4, 3]

    cout << "Kich thuoc cua deque la: " << dq.size() << endl;
    cout << "Phan tu dau tien trong deque la: " << dq.front() << endl;
    cout << "Phan tu cuoi cung trong deque la: " << dq.back() << endl;
}
