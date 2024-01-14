bool isPalindrome(int x){
     if(x<0){
         return false;
     }
     if(x==0){
         return true;
     }
     long long int given_int=x;
     long long int reverse=0;
     while(x>0){
         reverse=reverse*10 + x%10;
         x=x/10;
     }
     if(reverse==given_int){
         return true;
     }
     else{
         return false;
     }
}