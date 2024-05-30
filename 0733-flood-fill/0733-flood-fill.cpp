class Solution {
public:
    void f(vector<vector<int>>& image, int sr, int sc, int color , int rcolor ){
        if( sr < 0 || sc < 0 || sr >= image.size() ||  sc >= image[0].size() ){
            return ;
        }
        if( image[sr][sc] != rcolor ) return ;
        
        image[sr][sc] = color ;
        
        f(image,  sr,      sc -1 ,  color ,  rcolor ) ;
        f(image,  sr,      sc + 1 , color ,  rcolor ) ;
        f(image,  sr -1 ,  sc  ,    color ,  rcolor ) ;
        f(image,  sr + 1,  sc  ,    color ,  rcolor ) ;
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        //for that operation we have to move four directions
        //(i , j - 1) ,(i , j + 1 ) ,( i-1 ,j) ,( i + 1 , j)
        
        if( color == image[sr][sc] ) return image ;
        f(image,  sr,  sc  ,  color , image[sr][sc] ) ;
        return image ;
        
            
    }
};