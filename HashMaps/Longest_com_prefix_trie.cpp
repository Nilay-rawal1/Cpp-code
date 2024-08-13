#include<bits/stdc++.h>
using namespace std;

class TrieNode {
public:
    char data;
    TrieNode* children[26];
    int childcount;
    bool isTerminal;

    TrieNode(char ch) {
        data = ch;
        for(int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        childcount = 0;
        isTerminal = false;
    }
};

class Trie {
public:
    TrieNode* root;

    Trie(char ch) {
        root = new TrieNode(ch); 
    }

    void insertUtil(TrieNode* root, string word) {
        // base case
        if(word.length() == 0) {
            root->isTerminal = true;
            return;
        }

        // assumption: word will be in lowercase
        int index = word[0] - 'a';
        TrieNode* child;

        if(root->children[index] != NULL) {
            child = root->children[index];
        } else {
            // absent
            child = new TrieNode(word[0]);
            root->childcount++;
            root->children[index] = child;
        }

        // recursion
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word) {
        insertUtil(root, word);
    }

    void lcp(TrieNode* node, string str, string &ans) {
        for(int i = 0; i < str.length(); i++) {
            char ch = str[i];
            if(node->childcount == 1) {
                ans.push_back(ch);
                // move to the next node
                int index = ch - 'a';
                node = node->children[index];
            } else {
                break;
            }
            if(node->isTerminal)
                break;
        }
    }
};

string longestCommonPrefix(vector<string> &arr, int n) {
    Trie *t = new Trie('\0');

    for(int i = 0; i < n; i++) {
        t->insertWord(arr[i]);
    }

    string first = arr[0];
    string ans = "";
    t->lcp(t->root, first, ans);
    return ans;
}

int main() {
    vector<string> arr = {"flower", "flow", "flight"};
    int n = arr.size();
    cout << "Longest Common Prefix: " << longestCommonPrefix(arr, n) << endl;
    return 0;
}
