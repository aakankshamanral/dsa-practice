bool isPalindrome(char* s) {
    int left = 0 , right = 0 ; 
    while(s[right]!='\0') right++;
    right--;

    while(left<right){
        while(left<right && !isalnum(s[left])) left++;
        while(left<right && !isalnum(s[right])) right--;

        if(tolower(s[right--]) != tolower(s[left++]))return false;
    }
    return true;
}