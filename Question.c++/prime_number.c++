#include<iostream> 
#include<vector>
using namespace std;


 
int main(){

    int num = 30;

    vector<bool>prime(num+1, true);

    int count = 1;
    
    prime[0] = false;
    prime[1] = false;
    

    for(int i=2; i<=num; i+=2){

        prime[i] = false;
    }

    prime[2] = true;

    for(int i =3; i<=num; i+=2){

        if(prime[i] == true){

            count++;
            int a = i;

            while(i*a <= num){

                prime[i*a] = false;
                a++;
            }
        }
    }

    cout<<"Answer is = "<<count<<endl;

    for(int i=0; i<=num; i++){

        if(prime[i]){
            cout<<i<<" ";
        }
    }

    return 0;
}