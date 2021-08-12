//
//  main.cpp
//  c++
//
//  Created by mac on 12/08/2021.
//

#include<iostream>
using namespace std;

class Node{
public:
    int value;
    Node * next;
};
Node * creatNode(int x){
    Node * temp = new Node;
    temp -> next = NULL;
    temp -> value = x;
    return temp;
}
Node * addListNode(Node * p,int x){
    Node * temp = creatNode(x);
    p -> next = temp;
    return temp;
    
}
void print(Node * l,int x){
    Node * p = l;
    while(p != NULL){
        cout << p -> value << " ";
        p = p -> next;
    }
}
Node * addHead(Node * l,int x){
    
    Node * temp = new Node;
    temp -> value = x;
    temp -> next = l;
    l = temp;
    return l;
    
}
Node * Tail(Node * l,int x){
    Node * p = l;
    while (p -> next != NULL) {
        p = p -> next;
    }
    Node * temp = new Node;
    temp -> value = x;
    temp -> next = NULL;
    p -> next = temp;
    return l;
    
}
Node * At(Node * l,int x,int k){
    Node * p = l;
    for (int i = 0; i < k -1; i++) {
        p = p -> next;
    }
    Node * temp = new Node;
    temp -> value = x;
    temp -> next = p -> next;
    p -> next = temp;
    return l;
}
int main() {
    int n,x,k;
    cin >> n;
    cin >> x;
    Node * l = creatNode(x);
    Node * p = l;
    for(int i = 1;i < n;i++){
        cin >> x;
        p = addListNode(p, x);
    }
    cin >> x >> k;
    if ( k == 0){
        l = addHead(l, x);
    }
    else if (k == n) {
        l = Tail(l, x);
    }
    else {
        l = At(l, x, k);
    }
    print(l, x);
    return 0;
}
                        

