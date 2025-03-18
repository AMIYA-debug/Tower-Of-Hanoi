#include<iostream>
using namespace std;
void hanoi(int n,char a, char b,char c){
    if(n==0) return;
    hanoi(n-1,a,c,b);
    cout<<a<< "-->"<<c<<endl;
    hanoi(n-1,b,a,c);
}
int print(int n){
if(n==2) return 3;
else return (2*print(n-1))+1 ;
}
int main(){
    int n;
    cout<<"enter value-";
    cin>>n;
    cout<<"min moves is:";
    cout<<print(n)<<endl;
    hanoi(n,'A','B','C');
}