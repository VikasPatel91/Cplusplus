#include<iostream>
using namespace std;
template<class T>
void maxValue(T num1, T num2){
    if(num1>num2){
        cout<<"Maximum value: "<<num1<<endl;
    }else{
        cout<<"Maximum value: "<<num2<<endl;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    float c,d;
    cin>>c>>d;
    maxValue(a,b);
    maxValue(c,d);
    return 0;
}