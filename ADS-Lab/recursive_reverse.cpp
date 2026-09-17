//rev a num
#include<iostream>
using namespace std;

int reverse(int n){
    static int rev = 0;
    if(n==0) return 0;
    rev = rev*10 + n%10;
    reverse(n/10);
    return rev;
}
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Reversed Number: " << reverse(num) << endl;
    return 0;
}