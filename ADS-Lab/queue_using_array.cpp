#include<iostream>
using namespace std;
int MAX=100;
class Queue{
public:
    int arr[100];
    int fr;
    int r;
    Queue(){
        fr=-1;
        r=-1;
    }
    void push(int x){
        if(fr==-1){
            fr=r=0;
            arr[r]=x;
        }else if(r+1==MAX){
            cout<<"over"<<endl;
            return;
        }else{
            r+=1;
            arr[r]=x;
        }
    }
    void front(){
        if(fr==-1){
            cout<<"empty"<<endl;
        }else{
            cout<<arr[fr]<<endl;
        }
    }
    void pop(){
        if(fr=-1){
            cout<<"under"<<endl;
            return;
        }else if(fr==0 || fr+1==MAX){
            fr=r=-1;
        }else{
            fr+=1;
        }
    }
};
int main(){
    Queue q;
    q.push(10);
    q.front();
    q.push(20);
    q.front();
    q.pop();
    q.front();
    return 0;
}