#include<iostream>
using namespace std;

int pro(int a, int b)
{
    // static int c=0; This will execute only once
   // c=c+1;         Yahan C ki value change hoti rahegi
    return a*b;
}
int moneyReceived(int curentMoney, float factor=1.4){
    return curentMoney*factor;
}
int main(){
    // int a,b;
    int money = 100;
    // cout<<"Enter the values of a : "<<endl;
    // cin>>a;
    // cout<<"Enter the values of b : "<<endl;
    // cin>>b;
    // cout<<"The sum of a and b is : "<<pro(a,b)<<endl;
    cout<<"If you have "<<money<<"Rs in your bank account you will recieve "<<moneyReceived(money)<<"Rs after 1 year"<<endl;
    cout<<"If you have "<<money<<"Rs in your bank account you will recieve "<<moneyReceived(money, 5)<<"Rs after 1 year";
    return 0;
}
