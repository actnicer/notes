#pragma once 

#include <iostream>
#include <cstddef>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int count = 0;
        ListNode* curr = head;
        while (curr != nullptr) {
            count++;
            curr = curr->next;
        }

        ListNode* prev = nullptr;
        curr = head;
        for (int i = 0; i < count / 2; i++) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        if (count % 2 == 1) { // Odd number of elements, skip the middle one
            curr = curr->next;
        }

        while (prev != nullptr && curr != nullptr) {
            if (prev->val != curr->val)
                return false;
            prev = prev->next;
            curr = curr->next;
        }
        return true;
    }
};