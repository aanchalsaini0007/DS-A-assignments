/*https://leetcode.com/problems/unique-morse-code-words/
Unique Morse Code Words
*/
#include<iostream>
#include<vector>
#include<set>
using namespace std;

 int uniqueMorseRepresentations(vector<string>& words) {
        string morse[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> s;
        for(int i=0;i<words.size();i++)
        {
            int index;
            string res="";
            for(int j=0;j<words[i].size();j++)
            {
                index=words[i][j]-'a';
                res+=morse[index];
            }
            s.insert(res);
        }
        return s.size();
    }

int main()
{
    vector<string> words;
    int size;
    string val;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>val;
        words.push_back(val);
    }
    
    int count=uniqueMorseRepresentations(words);
    cout<<count;
}