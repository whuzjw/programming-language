#define NotFound -1
typedef int Position;
typedef int ElementType;
Position BinarySearch(ElementType* a, int n, ElementType x){
    int left = 0, right = n-1;
    int mid;
    while(left <= right){
        mid = left + (right-left)/2;
        if(a[mid] == x) return mid;
        if(a[mid] > x) right = mid-1;
        else left = mid+1;
    }
    return NotFound;
}

// �������Ա���ֲ���
typedef int Position;
typedef struct LNode* List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* �������Ա������һ��Ԫ�ص�λ�� */
};
Position BinarySearch(List L, ElementType X) {
    int left = 0, right = L->Last;
    int mid;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (L->Data[mid] == X) return mid;
        if (L->Data[mid] > X) right = mid - 1;
        else left = mid + 1;
    }
    return NotFound;
}