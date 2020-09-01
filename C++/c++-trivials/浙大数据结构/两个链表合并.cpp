// 主要是头结点问题
// 输入
/* 
3
1 3 5
5
2 4 6 8 10 
*/
// 输出
/*
1 2 3 4 5 6 8 10
NULL
NULL
*/
List Merge( List L1, List L2 ){
    List L3 = (List)malloc(sizeof(struct Node));
    List l3 = L3, l1, l2;
    l1 = L1->Next, l2 = L2->Next;  // 不要L2 = L2->Next,否则最后L2=Null，我们应该达到的是L2->Next == NULL
    while(l1 && l2){
        if(l1->Data <= l2->Data){
            l3->Next = l1;
            l1 = l1->Next;
        }
        else{
            l3->Next = l2;
            l2 = l2->Next;
        }
        l3 = l3->Next;
    }
    if(l1==NULL){
        while(l2){
            l3->Next = l2;
            l2 = l2->Next;
            l3 = l3->Next;
        }
    }
    else{
        while(l1){
            l3->Next = l1;
            l1 = l1->Next;
            l3 = l3->Next;
        }
    }
    l3->Next = NULL;
    L1->Next = NULL, L2->Next = NULL; //  配合输出格式
    return L3;
}