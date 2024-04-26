#include <iostream>
 
using namespace std;
 
int main() {
 
int n,s,sum;
cin>>n;

for(int i=0;i<n;i++){
    cin>>s;
    if(s%2==0){
        sum=0;
    }else{
        sum=1;
    }
    cout<<sum<<endl;
}


 
    return 0;
}
