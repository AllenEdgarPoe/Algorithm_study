#include <iostream>
using namespace std;
int gcd(int a, int b){
    while(b>0){
        int tmp = a;
        a = b;
        b = tmp%b;
    }
    return a;
}
int gcd_recursive(int a, int b){
    if(b==0) return a;
    return gcd_recursive(b, a%b);
}
int lcm(int a, int b){
    return a*b/gcd(a,b);
}

int main(void){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a1,a2,b1,b2;
    int tmp1=0, tmp2=0;
    cin>>a1>>b1>>a2>>b2;
    tmp1 = a1*b2+ a2*b1;
    tmp2 = b1*b2;
    int div = gcd(tmp1, tmp2);
    cout<<tmp1/div<<" "<<tmp2/div<<"\n";


    return 0;
}