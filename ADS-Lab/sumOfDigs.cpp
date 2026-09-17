//tower of hanoi
//sum of digits
#include<iostream>
using namespace std;

void hanoi(int n, char A, char B, char C){
    if(n==0) return;
    hanoi(n-1,A,C,B);
    cout << A << " -> " << C << endl;
    hanoi(n-1,B,A,C);
}
int sum(int n){
    if(n==0) return 0;
    return n%10 + sum(n/10);
}
int main(){
    
    return 0;
}