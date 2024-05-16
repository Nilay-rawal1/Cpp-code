#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
class Solution {
public:
    // Function to sort the given linked list using Merge Sort.

    Node* findmid(Node* head) {
        // Middle element findout
        Node* slow = head;
        Node* fast = head->next;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    Node* merge(Node* left, Node* right) {
        if (left == NULL) {
            return right;
        }
        if (right == NULL) {
            return left;
        }

        Node* ans = new Node(-1);
        Node* temp = ans;
        // Merge two sorted linked lists
        while (left != NULL && right != NULL) {
            if (left->data < right->data) {
                temp->next = left;
                temp = left;
                left = left->next;
            } else {
                temp->next = right;
                temp = right;
                right = right->next;
            }
        }

        while (left != NULL) {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        while (right != NULL) {
            temp->next = right;
            temp = right;
            right = right->next;
        }
        ans = ans->next;
        return ans;
    }

    Node* mergeSort(Node* head) {
        // Base case
        if (head == NULL || head->next == NULL) {
            return head;
        }
        Node* mid = findmid(head);
        Node* right = mid->next;
        mid->next = NULL;
        // Recursive call to sort both
        Node* left = mergeSort(head);
        right = mergeSort(right);
        // Merge both left or right
        Node* result = merge(left, right);

        return result;
    }
};
