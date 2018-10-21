/**

Description: This program will prompt a user to enter in a string of letters and will return the number of m's in the entered string.  
Filename: main.cpp
Author: Ankur Solanky  
Date: Thu Oct 18 18:22:44 PDT 2018

*/

#include<iostream>
#include<string>

using namespace std;

string get_string(string prompt)
{
        string s;
        cout << prompt;
        getline(cin, s);

        return s;
}

int char_count(string question, char m)
{   
    int count = 0;
    for (int i = 0; i < question.size(); i++)
    {
        char letter = tolower(question[i]); // This makes an uppercase letter into lowercase. 
        if(letter == 'm')
        {
            count++;
        }
    } 
    return count;
}    

int main()
{
    string task = get_string("Please enter a string letters: ");
    cout << "Please enter a letter: ";
    char m;
    cin >> m;
    int count = char_count(task,m);
    cout << "There are " << count << " letter m's in the string: " << task << endl; 
    
    return 0;  
}



