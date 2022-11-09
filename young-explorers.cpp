#include <bits/stdc++.h>

using namespace std; 

int n_tests{}; 

void test();

int main(){
    cin >> n_tests;

    for(int i=0; i<n_tests; i++){
        test(); 
    }

    return 0; 
}

void test(){
    map<int, int> explorers; 
    int n_explorers{}; 
    int left_explorers{};  
    int n_groups{}; 

    cin >> n_explorers;  

    for(int i=0; i<n_explorers; i++){
        int explorers_experience{}; 
        cin >> explorers_experience; 

        explorers[explorers_experience] += 1; 
    }
    
    for(auto explorer: explorers){
        n_groups += (explorer.second+left_explorers) / explorer.first;
        left_explorers = (explorer.second+left_explorers) % explorer.first;
    }
    
    cout << n_groups << endl; 
}
