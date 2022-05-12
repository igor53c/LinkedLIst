// LinkedLIst.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Node
{
public:
	int data;
	Node* next;
	Node(int d) {
		data = d;
		next = nullptr;
	}
};

class Solution {
public:

	Node* insert(Node* head, int data)
	{
		Node* temp = head;

		while (temp != nullptr && temp->next != nullptr)
			temp = temp->next;

		if (head == nullptr)
			head = new Node(data);
		else
			temp->next = new Node(data);

		return head;
	}

	void display(Node* head)
	{
		Node* start = head;
		while (start)
		{
			cout << start->data << " ";
			start = start->next;
		}
	}

	void deleteList(Node* head)
	{
		Node* temp = head;

		while (head)
		{
			temp = head;
			head = head->next;
			delete temp;
		}
	}
};

int main()
{
	Node* head = nullptr;

	Solution mylist;

	int T, data;

	cin >> T;

	while (T-- > 0) {
		cin >> data;
		head = mylist.insert(head, data);
	}

	mylist.display(head);

	mylist.deleteList(head);

	return EXIT_SUCCESS;
}
