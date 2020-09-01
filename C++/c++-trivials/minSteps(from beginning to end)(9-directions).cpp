int coverPoints(vector<int> &A, vector<int> &B) {
    int count = 0;
    int dx, dy;
    
    for(int i = 0;i<A.size()-1;i++){
        dx = abs(A[i+1] - A[i]);
        dy = abs(B[i+1] - B[i]);
        count += min(dx,dy) + abs(dy - dx);
    }
    
    return count;
}