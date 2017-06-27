#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    vector<vector<vector<int>>> vec (3, vector<vector<int> >(4, vector<int>(5,20)));
    cout << vec[0][0][0] << endl;
    vec[1][0][0] = 3;
    cout << vec [1][0][0] << endl;
    return 0;
}
