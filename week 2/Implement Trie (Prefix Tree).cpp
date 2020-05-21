// Create a trienode
// trienode is a node of character nodes and end of word.

class TrieNode{
    public:
        TrieNode* next[26];
        bool is_end_of_word;
    
        TrieNode(bool b = false){
            memset(next,0,sizeof(next));
            is_end_of_word= false;
        }
};
class Trie {
public:
    /** Initialize your data structure here. */
    TrieNode* root;
    Trie() {
        root = new TrieNode();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode* currentNode = root;
        
        for(int i= 0; i< word.size(); ++i){
            if(currentNode->next[word[i]-'a'] == NULL)
                currentNode->next[word[i]-'a'] = new TrieNode();   
            currentNode = currentNode->next[word[i]-'a'];
        }
        currentNode -> is_end_of_word= true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode* currentNode =  find(word); 
        return currentNode != NULL && currentNode -> is_end_of_word;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        return find(prefix) != NULL ;
    }
    
    
    private:
    
    TrieNode* find(string key){
         TrieNode* currentNode = root;
        for(int i =0; i< key.size() && currentNode != NULL; ++i)
            currentNode = currentNode-> next[key[i]-'a'];
        return currentNode;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
