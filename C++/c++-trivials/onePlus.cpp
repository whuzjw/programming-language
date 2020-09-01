// 注意是k还是n，尤其是for时和access时 
// 当遍历从末开始时，是k-1而不是k
// 去0 -> 复制 -> +1 -> 特殊处理
// 要用push——back，如果一直用insert，那是linear time
// 考虑{0}（k==0）
vector<int> plusOne(vector<int>& A) {
    int n = A.size();
    int k = n;
    vector<int> B;

    for (int i = 0; A[i] == 0 && i < n; i++) k--;
    for (int i = 0; i < k; i++) B.push_back(A[n - k + i]);

    for (int i = k - 1; i >= 0; i--) {
        if (B[i] == 9) B[i] = 0;
        else {
            B[i] += 1;
            break;
        }
    }

    if (k == 0 || B[0] == 0) B.insert(B.begin(), 1);
    return B;
}