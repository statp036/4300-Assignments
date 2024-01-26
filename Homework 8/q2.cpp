#include <iostream>
#include <string>
#include <stack>

using std::cout; using std::cin; using std::endl; using std::string;

// Justin Jiang
// IMPLEMENT balanced() HERE
// (and don't forget the #include you need to add)
bool balanced(string s){
    std::stack<char> pairs;
    for(int i=0;i<s.size();++i){
        if(s[i]=='(' || s[i]=='['){
            pairs.push(s[i]);
        }
        else if(!pairs.empty()){
            if(s[i]==')' && pairs.top()=='('){
                pairs.pop();
            }
            else if(s[i]==']' && pairs.top()=='['){
             pairs.pop();
            }
        }
        else{
            return false;
        }
    }
    return pairs.empty();
}
//

int main() {
    string bal1 = "(2 + [ 3 - (4*2) + 5] - 6)";
    string bal2 = "(((x + [y + (z * [w - [1]])])) + [4])";
    string bal3 = "()";
    string unbal1 = "(x[y)z]";
    string unbal2 = "(1 + (2 + (3 + 4]]]";
    string unbal3 = "1]";
    string unbal4 = "(((1 + 2";

    cout << "You should see:\n111\n0000\n";
    cout << balanced(bal1) << balanced(bal2) << balanced(bal3) << endl; 
    cout << balanced(unbal1) << balanced(unbal2) << balanced(unbal3) << balanced(unbal4) << endl; 
}

