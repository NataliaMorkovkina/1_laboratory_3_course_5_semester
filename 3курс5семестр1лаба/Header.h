#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int _val) : val(_val), next(nullptr) {}
};


struct list {
    Node* first;
    Node* last;
    Node* index;

    list() : first(nullptr), last(nullptr) {}

    bool is_empty() {
        return first == nullptr;
    }

    void push_back(int _val) {
        Node* p = new Node(_val);
        if (is_empty()) {
            first = p;
            last = p;
            return;
        }
        last->next = p;
        last = p;
    }

    void push_front(int _val) {
        Node* p = new Node(_val);
        if (is_empty()) {
            first = p;
            last = p;
            return;
        }

        p->next = first;
        first = p;
       
    }

    void push_by_index(int _val) {
        Node* p = new Node(_val);
        int count;
        cout << "vvedite nomer elementa\t";
        cin >> count;

        if (is_empty()) {
            first = p;
            last = p;
            return;
        }

        for (int i = 0; i < size(); i++) {
            if (i == count){
                p->next = index;
                first = p;
            }
        }
        
    }


    void print() {
        if (is_empty()) return;
        Node* p = first;
        while (p) {
            cout << p->val << " ";
            p = p->next;
        }
        cout << endl;
    }

    Node* find(int _val) {
        Node* p = first;
        while (p && p->val != _val) p = p->next;
        return (p && p->val == _val) ? p : nullptr;
    }

    void remove_first() {
        if (is_empty()) return;
        Node* p = first;
        first = p->next;
        delete p;
    }

    void remove_last() {
        if (is_empty()) return;
        if (first == last) {
            remove_first();
            return;
        }
        Node* p = first;
        while (p->next != last) p = p->next;
        p->next = nullptr;
        delete last;
        last = p;
    }

    void remove_by_index() {
        if (is_empty()) return;
        if (first == last) {
            remove_first();
            return;
        }
        for (int i = 0; i < size(); i++) {

        }
    }


    void remove(int _val) {
        if (is_empty()) return;
        if (first->val == _val) {
            remove_first();
            return;
        }
        else if (last->val == _val) {
            remove_last();
            return;
        }
        Node* slow = first;
        Node* fast = first->next;
        while (fast && fast->val != _val) {
            fast = fast->next;
            slow = slow->next;
        }
        if (!fast) {
            cout << "This element does not exist" << endl;
            return;
        }
        slow->next = fast->next;
        delete fast;
    }

    Node* operator[] (const int index) {
        if (is_empty()) return nullptr;
        Node* p = first;
        for (int i = 0; i < index; i++) {
            p = p->next;
            if (!p) return nullptr;
        }
        return p;
    }


    int size() {
        if (is_empty()) {
            return 0;
        }
        int n = 1;
        Node* p = first;
        while (p != last) {
            n++;
            p = p->next;
        }
        return n;
    }

    bool is_list_existing(list other){
        Node* p = first;
        bool ok = false;
        for (int i = 0; i < size() - other.size() + 1; i++){
            Node* p1 = p;
            Node* p2 = other.first;
            bool ok1 = true;
            for (int j = 0; j < other.size(); j++){
                if (p1->val == p2->val)
                {
                    p1 = p1->next;
                    p2 = p2->next;
                }
                else
                {
                    ok1 = false;
                    break;
                }
            }
            if (ok1)
            {
                ok = true;
                break;
            }
            p = p->next;
        }
        return ok;
    }
};