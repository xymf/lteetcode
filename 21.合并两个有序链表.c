/*
 * @lc app=leetcode.cn id=21 lang=c
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if(!l1&&!l2)
        return l2;
    struct ListNode *re=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *head=re;//head是头结点，新链表re进行复制和创建新节点

    while(l1!=NULL&&l2!=NULL){
        re->next=NULL;
        re->next=(struct ListNode*)calloc(1,sizeof(struct ListNode));
        re=re->next;
        if(l1->val<=l2->val){
            re->val=l1->val;
            l1=l1->next;
        }
        else{
            re->val=l2->val;
            l2=l2->next;
        }
    }
    while(l1!=NULL){
        re->next=NULL;
        re->next=(struct ListNode*)calloc(1,sizeof(struct ListNode));
        re=re->next;
        re->val=l1->val;
        l1=l1->next;
    }
    while(l2!=NULL){
        re->next=NULL;
        re->next=(struct ListNode*)calloc(1,sizeof(struct ListNode));
        re=re->next;
        re->val=l2->val;
        l2=l2->next;
    }
    return head->next;
}

// @lc code=end

