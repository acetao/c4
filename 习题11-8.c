#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *deletem( struct ListNode *L, int m );
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
    int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode* getNewNode(int x)
{
    struct ListNode* p = (struct ListNode*)malloc(sizeof(struct ListNode));
    p->data = x;
    p->next = NULL;
    return p;
}
struct ListNode *readlist()
{
    //创建附加头结点
    struct ListNode* dummy = getNewNode(0x80000000);
    //尾指针rear
    struct ListNode* rear = dummy;
    while (1) {
        int x;
        scanf("%d", &x);
        if (x == -1)break;
        //生成新结点p
        struct ListNode* p = getNewNode(x);
        //尾插法：尾指针rear链接到新结点p
        rear->next = p;
        //新插入的结点p为尾结点
        rear = p;
    }
    //返回附加头结点后面的结点
    return dummy->next;
}
struct ListNode *deletem( struct ListNode *L, int m )
{
    //创建附加头结点
    struct ListNode* dummy = getNewNode(0x80000000);
    //附加头结点链接到链表的第一个结点
    dummy->next = L;
    //前趋指针pre：指向当前结点cur（被删结点）的前趋结点
    struct ListNode* pre = dummy;
    //当前结点cur：初始值为链表第一个结点
    struct ListNode* cur = L;
    //遍历单链表
    while (cur) {
        //当前遍历到的结点cur的值==被删的值
        if (cur->data == m) {
            //删除当前结点：当前结点cur的前趋结点pre指向当前结点的后继结点
            pre->next = cur->next;
            //释放被删结点的内存
            free(cur);
            //cur后移到被删结点的后继结点
            cur = pre->next;
        }
        //当前结点cur不是要删除的结点
        else {
            pre = cur;
            cur = cur->next;
        }
    }

    //返回附加头结点后面的结点
    return dummy->next;
}