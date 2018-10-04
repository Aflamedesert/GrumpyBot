//Author: Michael Crowe

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool contains(string sentence, string query);
bool notContain(string sentence, string query);
int main(){
    cout << "Ugh. Today's a bad day";
    bool terminator = true;
    string userQuestion;
    while (terminator){
        cin >> userQuestion;
        if(contains(userQuestion, "!")){
                cout << "Calm Down, buddy.";
        }
        else if(contains(userQuestion, "?")){
                cout << "What do you think?!";
                cin >> userQuestion;
                if((userQuestion.find("how")!=string::npos) || (userQuestion.find("why")!=string::npos)){
                        cout << "Enough with the questions";
                }
        }
        else if((notContain(userQuestion, "!")) || (notContain(userQuestion, "?")) || (notContain(userQuestion, "."))){
                cout << "Didn't you learn punctuation in middle school?";
        }
        else if((userQuestion.find("bye") != string::npos) || (userQuestion.find("Bye") != string::npos)){
                cout << "Finally some peace";
                terminator = false;
        }
        else{
                cout << "Sigh...";
        }
    }
}
bool contains(string sentence, string query){
        if(sentence.find(query) != string::npos){
                return true;
        }
        return false;
}
bool notContain(string sentence, string query){
        if(!(sentence.find(query) != string::npos)){
                return true;
        }
        return false;
}
