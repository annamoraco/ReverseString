#include<iostream>
#include<string>
#include<cstring>

using namespace std;

string reversestring(string input_str){

    int str_len = input_str.length();

    int str_position = 1;

    while(str_position <= str_len){
        
        input_str = input_str[str_position] + input_str;

        input_str.erase(str_position + 1, 1);

        str_position++;

    }

    return input_str;
}

int main()
{
    string test_string;
    cout << endl << "Type a string: ";
    cin >> test_string;

    cout << reversestring(test_string);
}