#include <bits/stdc++.h>

using namespace std; 

int n_tests{}; 

void sum_points(vector<string>& p, map<string, int>& m, int& s, int n);
void input_words(vector<string>& p, map<string, int>& m, int n); 
void test(); 

int main(){
    ios_base::sync_with_stdio(0); 
    cout.tie(0); 
    cin.tie(0); 

    cin >> n_tests; 

    while (n_tests--)
        test();     

    return 0; 
}

void sum_points(vector<string>& p, map<string, int>& m, int& s, int n){
    for(int i=0; i<n; i++){
        if(m[p[i]] == 1)
            s += 3; 
        else if(m[p[i]] == 2)
            s += 1; 
    }
}

void input_words(vector<string>& p, map<string, int>& m, int n){
    for(int i=0; i<n; i++){
        cin >> p[i]; 
        if(m.find(p[i]) == m.end())
            m[p[i]] = 1; 
        else 
            m[p[i]] += 1; 
    }
}


void test(){
    vector<string> p1, p2, p3; 
    map<string, int> counts;  
    int n{}, s1{}, s2{}, s3{}; 

    cin >> n; 
    p1.resize(n); 
    p2.resize(n); 
    p3.resize(n); 

    input_words(p1, counts, n);
    input_words(p2, counts, n);
    input_words(p3, counts, n);

    sum_points(p1, counts, s1, n);
    sum_points(p2, counts, s2, n); 
    sum_points(p3, counts, s3, n); 

    cout << s1 << " " << s2 << " " << s3 << endl; 
}
