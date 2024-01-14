/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    *returnSize=1;
    if(digitsSize==0){
        digits = malloc(sizeof(int));
        digits[0]=1;
        
    }
    
    else if(digits[digitsSize-1]<9){
        *returnSize=digitsSize;
        digits[digitsSize-1]=digits[digitsSize-1]+1;
        return digits;
    }

    else{ 
        
        
        for(int i=digitsSize-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]=digits[i]+1;
                *returnSize=digitsSize;
                return digits;
            }
            digits[i]=0;

        }


    }
    
        digits = realloc(digits, (digitsSize + 1) * sizeof(int));
        digits[0]=1;
        digits[digitsSize]=0;
 
   int a=digitsSize+1;
  *returnSize=a;
  return digits;
}