/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        
        // Variable to store result
        int result = 0; // Binary = 000

        while(head){
            // For each node in the list
            result = (result << 1) | (head->val); // Left shift the current result and add the current the bit
            // This loop essentially gets the binary number from the linkedlist and pushes it into the result variable
            // This apprach takes O(n) time and No extra space 

            head = head->next; // Moving to the next node of the Linkedlist
        }
    return result; // Returning the result 
    // Note that since we are manipulating the bit this will return the decimal value by defaullt 
    }
};