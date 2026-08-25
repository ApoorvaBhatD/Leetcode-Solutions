bool isPalindrome(int x) {
    int reversedHalf = 0;
    if (x<0 || x%10==0 && x!=0 ) return false; 
    while(x>reversedHalf){
        reversedHalf = reversedHalf * 10 + x % 10;
        x /= 10;
    }
    return x == reversedHalf || x == reversedHalf / 10;
}