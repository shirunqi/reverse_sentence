#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string words;
    while(getline(cin, words))
    {
        reverse(words.begin(),words.end());     // 全调过来，"shi run qi" → "iq unr ihs"
        unsigned i = 0, j = i;
        while(i < words.size())    // 找到单个词的首位索引
        {
            while(i < words.size() && words[i] != ' ')
                ++i;
            reverse(words.begin() + j, words.begin() + i); // 将单个词的顺序正过来
            j = ++i;
        }
        cout << words << endl;
    }
    return 0;
}