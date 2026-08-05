bool isValid(char* s) {
    char stack[10000] ;
    int top = -1;
    for(int i = 0 ; s[i]!= '\0' ; i++){
        if (s[i]=='(' ||  s[i]=='{' || s[i]=='[' ) stack[++top] = s[i];
        else if (s[i]==')' ||  s[i]=='}' || s[i]==']' ) {
            if (top==-1) return false;
            char a = stack[top--];
            if (a=='(' && s[i]!=')') return false;
            else if (a=='{' && s[i]!='}') return false;
            else if (a=='[' && s[i]!=']') return false;
        }
    }

    if (top == -1) return true;
    else return false;
}