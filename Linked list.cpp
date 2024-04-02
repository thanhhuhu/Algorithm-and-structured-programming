/*
Linked List “là một cấu trúc dữ liệu bao gồm một tập hợp các nút cùng thể hiện một dãy”. 
Do đó, Linked List là mỗi chuỗi các nút được kết nối với nhau.*/
//single linked list, double linked list

//struct Node
//{
//	int data;
//	Node* prv, * nxt;
//	Node(int _data)
//	{
//		data = _data;
//		prv = NULL;
//		nxt = NULL;
//	}
//};
/*
#include<iostream>
#include<list>
using namespace std;

// Khai báo cấu trúc Node
struct Node
{
	int data;
	Node* prv; // Con trỏ trỏ tới node trước đó trong danh sách liên kết
	Node* nxt; // Con trỏ trỏ tới node tiếp theo trong danh sách liên kết

	// Constructor của Node
	Node(int d) : data(d), nxt(nullptr), prv(nullptr) {}; // Khởi tạo dữ liệu và con trỏ nxt, prv
};
struct LinkedList{

Node* head = nullptr; // Khai báo con trỏ head trỏ tới đầu danh sách liên kết
int sz = 0; // Biến đếm số lượng node trong danh sách liên kết

// Hàm thêm một node mới vào danh sách liên kết tại vị trí pos với dữ liệu là data
void addNewNode(int pos, int data)
{
	// Tạo một node mới với dữ liệu là data
	Node* newNode = new Node(data);

	// Kiểm tra nếu danh sách liên kết rỗng
	if (head == nullptr)
	{
		head = newNode; // Đặt node mới làm đầu danh sách
		sz++; // Tăng biến đếm số lượng node
		return; // Kết thúc hàm
	}

	// Kiểm tra nếu pos là 1, tức là thêm node vào đầu danh sách
	if (pos == 1)
	{
		newNode->nxt = head; // Con trỏ next của node mới trỏ tới node hiện tại là head
		head->prv = newNode; // Con trỏ prev của node head trỏ tới node mới
		head = newNode; // Đặt node mới làm head mới
		sz++; // Tăng biến đếm số lượng node
		return; // Kết thúc hàm
	}

	// Kiểm tra nếu pos là vị trí sau phần tử cuối cùng
	if (pos == sz + 1)
	{
		Node* temp = head; // Khai báo một node tạm thời temp và trỏ tới head

		// Di chuyển temp tới node cuối cùng trong danh sách liên kết
		while (temp->nxt != nullptr)
			temp = temp->nxt;

		newNode->prv = temp; // Con trỏ prev của node mới trỏ tới node cuối cùng
		temp->nxt = newNode; // Con trỏ next của node cuối cùng trỏ tới node mới
		sz++; // Tăng biến đếm số lượng node
	}

	int count = 1; // Khởi tạo biến đếm
	Node* temp = head; // Khai báo node tạm thời temp và trỏ tới head

	// Di chuyển temp tới vị trí pos trong danh sách liên kết
	while (count < pos) 
	{
		temp = temp->nxt; // Di chuyển tới node tiếp theo
		count++; // Tăng biến đếm
	}

	newNode->nxt = temp; // Con trỏ next của node mới trỏ tới node tại vị trí pos
	newNode->prv = temp->prv; // Con trỏ prev của node mới trỏ tới node trước node tại vị trí pos
	newNode->prv->nxt = newNode; // Con trỏ next của node trước node tại vị trí pos trỏ tới node mới
	temp->prv = newNode; // Con trỏ prev của node tại vị trí pos trỏ tới node mới
	sz++; // Tăng biến đếm số lượng node

}

void deleteNode(int pos)
{
	Node* temp = head;
	if (sz == 1) // Linked List chỉ có 1 node
	{
		head = nullptr;
		sz--;
		return;
	}
	int count = 1;
	// Node temp sau thao tác này chính là node ở vị trí thứ pos
	while (count < pos)
	{
		temp = temp->nxt;
		count++;
	}
	if (pos == 1)// Xoá bỏ node đầu
	{
		temp -> nxt -> prv = nullptr;
		head = temp->nxt;
		sz--;
		return;
	}
	if (pos == sz) 
	{ // Xoá bỏ node cuối
		temp->prv->nxt = NULL;
		sz--;
		return;
	}

	temp->prv->nxt = temp->nxt;
	temp->nxt->prv = temp->prv;
	sz--;
}
void print()
{
	Node* temp = temp;
	while (temp != nullptr)
	{
		cout << temp->data << " ";
		temp = temp->nxt;
	}
	cout << endl;
}
int main() 
{
	LinkedList.addNewNode(1, 3);
	// [3]
	LinkedList.addNewNode(2, 5);
	// [3, 5]
	LinkedList.addNewNode(2, 7);
	// [3, 7, 5]
	LinkedList.print();
	LinkedList.deleteNode(2);
	// [3, 5]
	LinkedList.print();
	LinkedList.deleteNode(2);
	// [3]
	LinkedList.print();
	LinkedList.deleteNode(1);
	// []
	LinkedList.print();

	return 0;
}
*/
/*Bài 1: Remove những phần tử trùng lặp trong linked list đã được sắp xếp*/
/*
#include<iostream>
#include<list>
using namespace std;
// định nghĩa cấu trúc node 
struct Node
{
	int data;
	Node* next;
	Node(int _data)
	{
		data = _data;
		next = nullptr;
	}
};
//xoa phan tu trung lap 
void removeDuplicate(Node* head)
{	
	// kiểm tra xem linked list có trống hay chỉ có một phần tử hay không 
	if (head == nullptr || head->next == nullptr)
		return;
	// khởi tạo con trỏ current trỏ tới đầu của danh sách 
	Node* current = head;
	// Duyệt qua danh sách liên kết
	while (current->next != NULL)
	{
		if (current->data == current->next->data)
		{
			// con trỏ dup chỉ tới phần tử tiếp theo 
			Node* duplicate = current->next;
			// loại bỏ phần tử trùng lặp bằng cảnh cập nhật con trỏ tiếp theo 
			current->next = current->next->next;
			// Giải phóng bộ nhớ của phần tử trùng lặp
			delete duplicate;
		}
		else
		{
			// Nếu không trùng, di chuyển tới phần tử tiếp theo
			current = current->next;
		}
	}
}
//in danh sách 
void printList(Node* head)
{
	Node* current = head;
	while (current != nullptr)
	{
		cout << current->data << " ";
		current = current->next;
	}
	cout << endl;
}
int main()
{
	// Khởi tạo danh sách liên kết ban đầu
	Node* head = new Node(1);
	head->next = new Node(2);
	head->next->next = new Node(2);
	head->next->next->next = new Node(2);
	head->next->next->next->next = new Node(3);
	head->next->next->next->next->next = new Node(4);
	head->next->next->next->next->next->next = new Node(4);
	head->next->next->next->next->next->next->next = new Node(5);
	cout << "Danh sach lien ket ban dau " << " ";
	printList(head);
	removeDuplicate(head);
	cout << "Danh sach lien ket sau khi xoa cac so giong nhau: " << " ";
	//in danh sach 
	printList(head);
	// Giải phóng bộ nhớ
	while (head != nullptr)
	{
		Node* temp = head;
		head = head->next;
		delete temp;
	}
	return 0;
}	
*/
//Bài 2: Đảo ngược mọi nhóm k nút trong danh sách liên kết đã cho
//Cho một danh sách liên kết, đảo ngược mọi nhóm k nút liền kề trong đó với k là số nguyên dương.
//Input: 1>2>3>4>5>6>7>8>null
/*k = 3
Output: 3>2>1>6>5>4>8>7>null
k=2
Output: 2>1>4>3>6>5>8>7>null
k = 8
Output: 8>7>6>5>4>3>2>1>null*/
//Ý tưởng là xem xét mọi nhóm k nút và đảo ngược đệ quy từng nút một. 
// Cần phải đặc biệt chú ý khi liên kết các nhóm đảo ngược với nhau.

/*
#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
	Node(int d) : data(d), next(nullptr) {}
};

// Hàm để đảo ngược một nhóm k nút từ head
Node* reverseGroup(Node* head, int k) {
	Node* current = head;
	Node* next = nullptr;
	Node* prev = nullptr;
	int count = 0;

	// Đảo ngược các nút trong nhóm k nút
	while (current != nullptr && count < k) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
		count++;
	}

	// Đệ quy để đảo ngược nhóm tiếp theo và kết nối với nhóm đã đảo ngược trước đó
	if (next != nullptr) {
		head->next = reverseGroup(next, k);
	}

	// Trả về nút cuối cùng của nhóm đã đảo ngược
	return prev;
}

// Hàm để in danh sách liên kết
void printList(Node* head) {
	Node* current = head;
	while (current != nullptr) {
		cout << current->data;
		if (current->next != nullptr) {
			cout << " > ";
		}
		current = current->next;
	}
	cout << endl;
}

int main() {
	// Khởi tạo danh sách liên kết ban đầu
	Node* head = new Node(1);
	head->next = new Node(2);
	head->next->next = new Node(3);
	head->next->next->next = new Node(4);
	head->next->next->next->next = new Node(5);
	head->next->next->next->next->next = new Node(6);
	head->next->next->next->next->next->next = new Node(7);
	head->next->next->next->next->next->next->next = new Node(8);

	// In danh sách liên kết ban đầu
	cout << "Input: ";
	printList(head);

	int k = 3; // Kích thước của nhóm cần đảo ngược

	// Đảo ngược các nhóm k nút trong danh sách liên kết
	head = reverseGroup(head, k);

	// In danh sách liên kết sau khi đảo ngược các nhóm k nút
	cout << "Output: ";
	printList(head);

	// Giải phóng bộ nhớ
	while (head != nullptr) {
		Node* temp = head;
		head = head->next;
		delete temp;
	}

	return 0;
}
*/
/*
Di chuyển nút cuối cùng lên phía trước trong Danh sách được liên kết nhất định
Cho một danh sách được liên kết, hãy di chuyển nút cuối cùng của nó lên phía trước.
Ví dụ: Input: 1,2,3,4
Output: 4,1,2,3
Gợi ý: Ý tưởng là làm cho danh sách được liên kết có hình tròn và sau đó ngắt chuỗi trước nút cuối cùng sau khi làm cho danh sách này hướng đến nút cuối cùng.*/
#include<iostream>
#include<list>
using namespace std;
struct Node
{
	int data;
	Node* prv;
	Node* nxt;
	Node(int _data)
	{
		data = _data;
		Node* prv = nullptr;
		Node* nxt = nullptr;
	}
};
void swapNumb(Node* head)
{
	Node* current = head;
	int count = 0;
	if (Node* head = nullptr && )
	{
		return;
	}
}
