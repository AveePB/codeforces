#include <bits/stdc++.h>

using namespace std; 

vector<string> words; 
unsigned int n_words = 0; 

int main(){
    ios_base::sync_with_stdio(0); 
    cout.tie(0); 
    cin.tie(0); 

    cin >> n_words; 
    words.resize(n_words); 

    for(int i=0; i<n_words; i++)
        cin >> words[i]; 

    for(int i=0; i<n_words; i++){
        if (words[i].length() <= 10){
            cout << words[i] << endl; 
            continue; 
        }
        else{
            cout << words[i][0]; 
            cout << words[i].length()-2; 
            cout << words[i][words[i].length()-1] << endl; 
        }
    }

    return 0; 
}
