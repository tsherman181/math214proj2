//
//  main.cpp
//  math214 decode
//
//  Created by Tom Sherman on 10/22/21.
//

#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<utility>
#include <string>
#include <map>
#include <sstream>
using namespace std;

bool operator +(const string &rhs, const string &lhs){
    bool firstTime = false;
    for(int i=0; i<rhs.size(); i++){
        if(rhs[i]==lhs[i]){continue;}
        else if(!firstTime){firstTime=true;}
        else{return false;}
    }
    return true;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    stringstream s;
    s<<"011010011 000011011 101011001 011001100 001011110 011010111 001011001 001001001 010011101 001111010 100010101 000010000 010010101 100110100 000000000 101001001 010001100 001011101 000000000 100001111 011110000 001011111 101001001 100101100 110011010 000000000 011110000 001100101 001000000 011001011 011110000 001111100 110010101 000111010 000011001 011001010 000000100 010010101 001000110 001011111 000011001 110110101 000000000 000011011 011000010 001100011 001011111 100100100 101001001 000000000 001010111 010110101 011101001 100110101 101001101 001011111 010010101 011101001";
    const vector<string> binaryStrings = {"000011001","000100011","000111010","001000110","001011111","001100101","001111100","010001100","010010101","010101111","010110110","011001010","011010011","011101001","011110000","100001111","100010110","100101100","100110101","101001001","101010000","101101010","101110011","110000011","110011010","100101100","000000000"};
    
    const vector<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};
    
    string temp;
    string res="";
    while(s>>temp){
        for(int i=0; i<binaryStrings.size(); i++){
            if(binaryStrings[i]+temp){
                res+=alphabet[i];
                break;
            }
        }
    }
    cout<<res;
    return 0;
}
