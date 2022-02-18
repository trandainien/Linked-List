// Linked-List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* pNext;
};
int main()
{
    Node* pHead = nullptr;
    Node* pCurrent;
    
    int x;
    pCurrent = pHead;
    //init linked list
    while (cin >> x && x!=0) {
        if (pHead == nullptr) {
            pHead = new Node {x,nullptr};
            pCurrent = pHead;
        }
        else {
            pCurrent->pNext = new Node{ x,nullptr };
            pCurrent = pCurrent->pNext;
        }
    }
   

    //print the linked list
    pCurrent = pHead;
    for (Node* pCur = pHead; pCur != nullptr; pCur = pCur->pNext) {
        cout << pCur->data<<' ';
    }

    //delete linked list
    while (pHead != nullptr) {
        pCurrent = pHead->pNext;
        delete pHead;
        pHead = pCurrent;
    }

  
}

