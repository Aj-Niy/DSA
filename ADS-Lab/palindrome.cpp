#include <iostream>
using namespace std;

int main() {
    stack<char>s1;
    stack<char>s2;
    string nums="1221";
    for(int i=0;i<nums.size();i++){
        s1.push(nums[i]);
        s2.push(nums[nums.size()-i-1]);
    }
    bool gg=true;
    while(!s1.empty()){
        if(s1.top()!=s2.top()){
            gg=false;
            break;
        }
        s1.pop();
        s2.pop();
    }
    if(gg) cout<<"palin";
    else cout<<"not palin";
    
    
    return 0;
}
