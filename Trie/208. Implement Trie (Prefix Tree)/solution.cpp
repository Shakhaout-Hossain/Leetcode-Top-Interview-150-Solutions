struct TrieNode {

    TrieNode* child[26];
    bool endWord;
    TrieNode()
    {
        for (int i = 0; i < 26; i++) {
            child[i] = NULL;
        }
        endWord=false;
    }
};


class Trie {
    TrieNode *root;
public:
    Trie() {
        root=new TrieNode();
    }
    
    void insert(string word) {
        TrieNode *cur=root;
        for(char ch : word){
            if(cur->child[ch-'a']==NULL){
                TrieNode *p= new TrieNode();
                cur->child[ch-'a']=p;
                
            }
            cur=cur->child[ch-'a'];
        }
        cur->endWord=true;
    }
    
    bool search(string word) {
        TrieNode *cur=root;
        for(char ch : word){
            if(cur->child[ch-'a']==NULL){
                return false;  
            }
            cur=cur->child[ch-'a'];
        }
        return cur->endWord;
    }
    
    bool startsWith(string prefix) {
        TrieNode *cur=root;
        for(char ch : prefix){
            if(cur->child[ch-'a']==NULL){
                return false;  
            }
            cur=cur->child[ch-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */