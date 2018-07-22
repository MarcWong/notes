#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int findComplement(int num) {
    int num_bi[8] = {0};
    int tmp = 0;
    int result = 0;
    while(num > 0){
        num_bi[tmp] = (num - ((num >> 1) << 1)) == 0? 1:0;
        num >>= 1;
        cout<< num_bi[tmp] << endl;
        tmp++;
    }
    for(int i = tmp-2; i>=0;i--){
        cout<< i << ", " <<result << endl;
        result = (result << 1) + num_bi[i];
        
    }
    return result;
}

int main(){
    
    cout<< findComplement(5) << endl;

    return 0;
}