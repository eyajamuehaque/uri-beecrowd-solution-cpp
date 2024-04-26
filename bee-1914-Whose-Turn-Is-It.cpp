#include <iostream>
 
using namespace std;
 
int main() {
 
int n,m,a,b;
cin>>n;
string s,p,q,r;

for(int i=0;i<n;i++){
    cin>>s>>p>>q>>r;
    cin>>m>>a;
    b=(m+a);
    if(b%2==0){
        if(p=="PAR"){
            cout<<s<<endl;
        }else if(r=="PAR"){
            cout<<q<<endl;
        }
    }else if(b%2!=0){
        if(p=="IMPAR"){
            cout<<s<<endl;
        }else if(r=="IMPAR"){
            cout<<q<<endl;
        }
    }
}
 
    return 0;
}
