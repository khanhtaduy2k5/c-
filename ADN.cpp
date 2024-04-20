#include<iostream>
#include <string>
using namespace std;
char doimach(char c){
    if (c == 'A') return 'T';
    else if (c == 'T') return 'A';
    else if (c == 'X') return 'G';
    else if (c == 'G') return 'X';
    else return c;
}
string complement_strand(const string& dna_strand){
    string complemented_strand = "";
    for(char c : dna_strand){
        complemented_strand += doimach(c);
    }
    return complemented_strand;
}


int main(){
    string input_strand;
    cin >> input_strand;
    string complementary_strand = complement_strand(input_strand);
    cout << complementary_strand << endl;
    return 0;
}

