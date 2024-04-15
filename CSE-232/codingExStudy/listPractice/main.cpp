#include "linkedPalindrome.hpp"

void print_list(ListNode* head) {
    ListNode* curr = head;
    while (curr != nullptr) {
        std::cout << curr->val << ", ";
        curr = curr->next;
    }
    std::cout << '\n';
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);

    std::cout << "Linked List: ";
    print_list(head);

    // Create an instance of the solution class
    Solution sol;

    bool isPal = sol.isPalindrome(head);

    // Output the result
    if (isPal)
        std::cout << "The list is a palindrome." << std::endl;
    else
        std::cout << "The list is not a palindrome." << std::endl;

    return 0;
}