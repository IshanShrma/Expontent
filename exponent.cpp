#include <iostream>
using namespace std;
int exponent(int a, int b){
    if(b==1)
        return a;

    return a *exponent(a,b-1);
    

}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"value:"<<exponent(a,b)<<endl;



    return 0;

}