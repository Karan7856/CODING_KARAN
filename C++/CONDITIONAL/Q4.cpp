//IF COST PRICE AND SELLING PRICE OF AN ITEM IS INPUT THROUGH THE KEYBOARD. WRITE A PROGRAM TO DETERMINE WHETHER THE SELLER HAS MADE PROFIT OR INCURRED LOSS OR NO PROFUT NO LOSS. ALSO DETERMINE  HOW MUCH PROFIT HE MADE OR LOSS HE INCURRED
#include <iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter the cost price of the item:";
    cin>>cp;
    int sp;
    cout<<"Enter the selling price of the item:";
    cin>>sp;
    if(cp>sp){
        int loss=cp-sp;
        cout<<"The seller has suffered a loss which is equal to=";
        cout<<loss;
    }
    else if(cp<sp){
        int profit=sp-cp;
        cout<<"There is profit of:";
        cout<<profit;
        
    }
    else{

        cout<<"There is no profit no loss";
    }

}