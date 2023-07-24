#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *getodd( struct ListNode **L );
void printlist( struct ListNode *L )
{
     struct ListNode *p = L;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode *L, *Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *readlist(){
    struct ListNode* L = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* r = L;
    struct ListNode* p = NULL;
    int x;
    scanf("%d", &x);
    while(x != -1){
        p = (struct ListNode*)malloc(sizeof(struct ListNode));
        p->data = x;
        r->next = p;
        r = p;
        scanf("%d", &x);
    }
    r->next = NULL;
    return L->next;
}
struct ListNode *getodd( struct ListNode **L ){
    //为单链表L增加附加头结点dummy，方便删除结点的操作
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next = *L;  //附加头结点->L
    struct ListNode* pre = dummy; //删除奇数值结点时使用的前驱指针
    struct ListNode* odd = (struct ListNode*)malloc(sizeof(struct ListNode)); //奇数值结点单链表的附加头结点

    struct ListNode* r = odd; //创建单链表时使用的尾指针
    struct ListNode* p = *L;  //指针p遍历需要操作的单链表L
    struct ListNode* q = NULL;
    while(p){
        if(p->data % 2 == 1){ //遇到奇数值结点
            q = (struct ListNode*)malloc(sizeof(struct ListNode));
            q->data = p->data;
            r->next = q;
            r = q;
            pre->next = p->next; //删除奇数值结点
            free(p);
            p = pre->next;
        }else{ //遇到偶数值结点
            pre = p;
            p = p->next;
        }
    }
    *L = dummy->next;
    r->next = NULL;
    return odd->next;
}
