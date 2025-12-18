#include<iostream>
#include<vector>

using namespace std;

string find(vector<pair<string,int>>&mp, int number){

    if(number == 0) return "zero";

    for(auto it:mp){
        if(number >= it.second){
            string a = "";
            if(number >= 100){
                a = find(mp, number/it.second) + " ";
            }

            string b = it.first;
            string c = "";

            if(number%it.second !=0){
                c = " " + find(mp, number % it.second);
            }
            return a + b + c;
        }
    }

    return " ";
}

int main(){

    int number = 1234567;
    
    vector<pair<string,int>>mp ={{"Billion",1000000000}, 
                                    {"Million",1000000}, 
                                    {"Thousand",1000}, 
                                    {"Hundred",100},
                                    {"Ninety",90}, 
                                    {"Eighty",80},
                                    {"Seventy",70},
                                    {"Sixty",60},
                                    {"Fifty",50},
                                    {"Fourty",40},
                                    {"Thirty",30},
                                    {"Twenty",20},
                                    {"Nineteen",19},
                                    {"Eighteen",18},
                                    {"Seventeen",17},
                                    {"Sixteen",16},
                                    {"Fifteen",15},
                                    {"Fourteen",14},
                                    {"Thirteen",13},
                                    {"Twelve",12},
                                    {"Eleven",11},
                                    {"Ten",10},
                                    {"Nine",9},
                                    {"Eight",8},
                                    {"Seven",7},
                                    {"Six",6},
                                    {"Five",5},
                                    {"Four",4},
                                    {"Three",3},
                                    {"Two",2},
                                    {"One",1}};
    
    string ans = find(mp,number);

    cout<<"So, in english word the number is = "<<ans<<endl;

    return 0;
}