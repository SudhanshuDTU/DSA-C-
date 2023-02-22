#include<iostream>
using namespace std;
void print(int *ptr){
    cout<<*ptr<<endl;
}

void update(int *ptr){
    ptr = ptr + 1;
     
}
int main(){
    int value = 5;
    int *p = &value;
    cout<<"before "<<p;
    update(p);
    cout<<"after "<<p;
    
    return 0;
}