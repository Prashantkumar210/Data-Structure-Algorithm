#include<iostream>
using namespace std;

void Square_root(int num, int &ans){

    int s = 0;
    int e = num;

    int mid = s + (e-s)/2;

    while(s<=e){

        if(mid*mid==num){
            ans = mid;
            return;
        }
        else if(mid*mid<num){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid -1;
        }
        mid = s+ (e-s)/2;
    }

    return;
}

int main(){

    int num;
    cout<<"Enter of a number : ";
    cin>>num;
   

    int ans = -1;
    Square_root(num, ans);

    cout<<"The Answer is : "<<ans<<endl;

    // in decimal point 
    // here the user give the output that after How many digits are needed after the decimal
    
    int precision;
    cout<<"Enter the pricision : ";
    cin>>precision;
    cout<<endl;

    double finalans = ans;

    double step = 0.1;

    for(int i=0; i<precision; i++){

        for(double j=finalans; j*j<=num; j=j+step){
            finalans = j;
        }

        step = step/10;
    }

    cout<<"Final ans is : "<<finalans<<endl;
    return 0;
}  