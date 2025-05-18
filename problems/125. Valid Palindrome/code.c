bool isPalindrome(char* s) {
    int length = strlen(s);
    char str[200000] = ""; 
    int j = 0;
    bool result = true;
    
    for(int i = 0; i < length; i++) {
        if(s[i] >= 97 && s[i] <= 122) {
             str[j] = s[i] - 32;
             j++;
        } else if (s[i] >= 65 && s[i] <= 90) {
            str[j] = s[i];
            j++;
        } else if (s[i] >= 48 && s[i] <= 57) {
            str[j] = s[i];
            j++;
        }
    }

    for(int k = 0; k < j / 2; k++) {
        if(str[k] != str[j - k - 1]) {
            result = false;
            break;
        }
    }

    return result;
}