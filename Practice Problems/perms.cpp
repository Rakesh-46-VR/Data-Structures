#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(vector<string> &result, string str, int index) {
    int len = str.length();
    
    if (index >= len) {
        result.push_back(str);
        return;
    }
    
    // Print the current string and index before recursion
    cout << "At depth " << index << ", str: " << str << endl;

    for (int i = index; i < len; i++) {
        swap(str[index], str[i]);
        solve(result, str, index + 1);
        cout << "After return from a leaf node : " << str << endl;

    }

}

vector<string> generatePermutations(string &str) {
    vector<string> result;

    // Sorting ensures lexicographic order
    sort(str.begin(), str.end());

    solve(result, str, 0);

    return result;
}

int main() {
    string input = "abc";
    vector<string> permutations = generatePermutations(input);

    cout << "\nAll Permutations:\n";
    for (const string &perm : permutations) {
        cout << perm << endl;
    }

    return 0;
}
