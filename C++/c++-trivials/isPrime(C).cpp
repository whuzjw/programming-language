#include<stdio.h>
int sqrt(int n){
    for(int i = 1; i<n;i++)
        if(i*i >= n) return i;
}
int isPrime(int n){
    if(n==2) return 1;
    if(n%2 == 0 || n == 1) return 0;
    int i;
    int max = sqrt(n);
    for(i = 3; i<= max; i += 2){
        if(n%2 == 0) return 0;
    }
    return 1;
}