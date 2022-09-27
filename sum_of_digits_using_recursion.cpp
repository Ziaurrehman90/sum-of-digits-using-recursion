#include<iostream>
using namespace std;
int sum_of_digits(int n){
    if(n==0){
        return 0;
    }
    int a=n%10;
    int count=sum_of_digits(n/10);
    return count+a;
}
int main(){
    int n;
    cin>>n;
    cout<<sum_of_digits(n)<<endl;
    return 0;
}
