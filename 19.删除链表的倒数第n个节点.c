/*
 * @lc app=leetcode.cn id=19 lang=c
 *
 * [19] 删除链表的倒数第N个节点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *p = head, *q = head;
    while(p){
        if(n < 0){ q = q -> next; }       
        n--;
        p = p -> next;
    }
    if(n == 0){ return head -> next; }
    q -> next = q -> next -> next;
    return head;
}

// @lc code=end

