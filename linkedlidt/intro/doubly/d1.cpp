#include <iostream>
#include <vector>
using namespace std;

class node {
public:
  int data;
  node* next;
  node* back;

  node(int data1, node* next1, node* back1) {
    data = data1;
    next = next1;
    back = back1;
  }
  node(int data1) {
    data = data1;
    next = nullptr;
    back = nullptr;
  }
};

node* convertArrToDl(vector<int>& arr) {
  if (arr.empty()) return nullptr;
  node* head = new node(arr[0]);
  node* prev = head;
  for (size_t i = 1; i < arr.size(); ++i) {
    node* temp = new node(arr[i], nullptr, prev);
    prev->next = temp;
    prev = temp;
  }
  return head;
}

void print(node* head) {
  while (head != nullptr) {
    cout << head->data << " ";
    head = head->next;
  }
  cout << '\n';
}

node* deleteHead(node* head) {
  if (head == nullptr) return nullptr;
  if (head->next == nullptr) {
    return nullptr;
  }
  node* prev = head;
  head = head->next;
  head->back = nullptr;
  prev->next = nullptr;
  delete prev;
  return head;
}
node*deletetail(node*head){
  if (head == nullptr) return nullptr;
  if (head->next ==nullptr) {
    delete head;
    return nullptr;
  }

  node*tail=head;
  while (tail->next!=nullptr)
  {
    tail=tail->next;

  }
  node*newtail=tail->back;
  newtail->next=nullptr;
  tail->back=nullptr;
  delete tail;
  return head;
  

}
node* deleteKth(node* head, int k) {
    if (head == nullptr) return head;

    // Case 1: delete head
    if (k == 1) {
        node* temp = head;
        head = head->next;
        if (head != nullptr) head->back = nullptr;
        delete temp;
        return head;
    }

    // Move to the kth node
    node* temp = head;
    int count = 1;
    while (temp != nullptr && count < k) {
        temp = temp->next;
        count++;
    }

    if (temp == nullptr) return head; // k out of range

    node* prev = temp->back;
    node* nxt = temp->next;

    prev->next = nxt;
    if (nxt != nullptr) nxt->back = prev;

    delete temp;
    return head;
}
  node* insertBeforeTail(node* head, int val) {
    if (head == nullptr) {
        // empty list
        return new node(val);
    }

    // if list has only one node, insert before head
    if (head->next == nullptr) {
        node* newnode = new node(val, head, nullptr);
        head->back = newnode;
        return newnode;
    }

    // find tail
    node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }

    node* prev = tail->back;
    node* newnode = new node(val, tail, prev);

    prev->next = newnode;
    tail->back = newnode;

    return head;
}

int main() {
  vector<int> arr = {12, 5, 8, 7};
  node* head = convertArrToDl(arr);
  // head = deleteHead(head);
  // head=deletetail(head);
  // head=insertBeforeHead(head,10);
  head=insertBeforeTail(head,10);
  print(head);
}

