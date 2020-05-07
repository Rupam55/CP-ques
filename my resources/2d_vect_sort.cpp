#include <iostream>
#include <vector>    // for 2D vector
#include <algorithm> // for sort()
using namespace std;

// Driver function to sort the 2D vector
// on basis of a particular column
bool sortcol(const vector<int> &v1,
             const vector<int> &v2)
{
    return v1[2] < v2[2];
}

int main()
{
    vector<vector<int>> vect;
    int m,n,num; 
    cin>>m>>n;

    for (int i = 0; i < m; i++){
        vector<int> v1;
        for (int j = 0; j < n; j++){
            cin >> num;
            v1.push_back(num);
        }
        vect.push_back(v1);
    }

    sort(vect.begin(), vect.end(), sortcol);

    cout << "The Matrix after sorting is:\n";
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
            cout << vect[i][j] << " ";
        cout << endl;
    }
}

// for vector of structures
// bool compareByLength(const data &a, const data &b)
// {
//     return a.word.size() < b.word.size();
// }