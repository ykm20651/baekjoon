
#include <iostream>
#include <string>
#include <stack>

using namespace std;

stack<int> s;

int main(){

    int N, temp;
    cin >> N ;

    string command;
    
    while(N--){
        cin >> command;
            if(command == "push"){ 
                int x;
                cin >> x;
                s.push(x);
            }

            if(command == "pop"){
                if(s.empty()) {
                    cout <<"-1"<< endl;
                }
                else {
                    cout << s.top() <<endl;
                    s.pop();
                }
            }

            if(command == "size"){
                cout << s.size() << endl;
            }

            if(command == "empty"){
                if(s.empty()){
                    cout << "1" <<endl;
                }
                else{
                    cout << "0" << endl;
                }
            }

            if(command == "top"){
                if(s.empty()){
                    cout << "-1" << endl;
                }
                else{
                    cout << s.top() << endl;
                }

            }
    }


    return 0;
}