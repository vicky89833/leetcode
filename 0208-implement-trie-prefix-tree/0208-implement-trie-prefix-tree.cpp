class Trie {
public:
    Trie() {
        
        for (int i = 0; i < 26; ++i) {
            children[i] = nullptr;
        }
        end_flag =false ;
    }
    
    
    void insert(string word) {
        int n = word.size() ;
        Trie  *  temp = this ;
        for ( int i = 0 ; i< n ; i++ ){
            
                if ( temp->children[ word [i] - 'a' ] ){
                    
                    temp = temp-> children [ word [i] - 'a'  ] ;
                }
            
                else{
                    
                    temp -> children [ word [i] - 'a'   ] = new Trie ( ) ;
                    temp = temp -> children [word [i] - 'a'  ] ;
                }
            
            
        }
        temp->end_flag =true ;
        
    }
    
    bool search(string word) {
        
        int n = word.size() ;
        Trie  *  temp = this ;
        
        for ( int i = 0 ; i< n ; i++ ){
            
            if( temp-> children [ word [ i ] - 'a' ] ){
                
                temp = temp -> children [ word [ i ] - 'a' ] ;
            }
            
            else {
                return false ;
            }
            
        }
        return  temp-> end_flag  ;
        
    }
    
    bool startsWith(string prefix) {
        
        int n = prefix.size() ;
        
        Trie  *  temp = this ;
        
        for ( int i = 0 ; i< n ; i++ ){
            
            if( temp-> children [ prefix [ i ] - 'a' ] ){
                
                temp = temp -> children [ prefix [ i ] - 'a' ] ;
            }
            else {
                return false ;
            }
            
        }
        return true ;
    }
    
    private:
    Trie* children[26];
    bool end_flag;

};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */