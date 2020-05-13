#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str,str1;
    cin>>str1>>str;

    size_t found = str.find(str1);
    while(found != string::npos){
        cout << found << " ";
        found = str.find(str1, found + 1);
    }
    // char arr[] = str1;
    
    // while (found != string::npos){
    //     cout << "Next occurrence is " << found << endl;
    //     found = str.find(arr, found + 1);
    // }
    // return 0;
}

// week 4 ques 4