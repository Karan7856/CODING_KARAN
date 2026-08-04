//FUNCTIONS IN CPP

//FIND THE COMBINATION nCr

#include <iostream>
using namespace std;
int nfact(int n){
    int nfact=1;
    for(int i=1;i<=n;i++){
        nfact=nfact*i;
    }
    return nfact;
}
int rfact(int r){
    int rfact=1;
    for(int i=1;i<=r;i++){
        rfact=rfact*i;
    }
    return rfact;
}
int nrfact(int nr){
    int nrfact=1;
    for(int i=1;i<=nr;i++){
        nrfact=nrfact*i;
    }
    return nrfact;
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int r;
    cout<<"Enter the value of r: ";
    cin>>r;
    int nr=n-r;
    int ncr=nfact(n)/(rfact(r)*nrfact(nr));
    cout<<ncr;
}