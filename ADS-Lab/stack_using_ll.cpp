#include <iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int x){
        val=x;
        next=NULL;
    }
};
class Stackk{
public:
    Node* h;
    Stackk(){
        h=NULL;
    }
    void push(int x){
        if(h==NULL){
            Node* ele=new Node(x);
            h=ele;
        }else{
            Node* temp=h;
            Node* ele=new Node(x);
            h=ele;
            ele->next=temp;
        }
    }
    void top(){
        if(h==NULL) cout<<"emoty stack"<<endl;
        else cout<<h->val<<endl;
    }
    void pop(){
        if(h==NULL){
            cout<<"empty"<<endl;
        }
        else if(h->next==NULL){
            delete h;
            h=NULL;
        }else{
            Node* temp=h->next;
            delete h;
            h=temp;
        }
    }
};

int main() {
    Stackk s;
    s.push(10);
    s.push(20);
    s.top();
    s.pop();
    s.top();
    return 0;
    

}
