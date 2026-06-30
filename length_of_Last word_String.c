int stringLength(char* s){ // calculate the length of a string 
    int i=0;
    while(s[i] != '\0'){
        i=i+1;
    }
    return i;
}
int lengthOfLastWord(char* s) {
    int i=stringLength(s)-1;
    int Length=0;
    if(s[i]==' '){
        while((i>=0)&&(s[i]==' ')){   //Case where the string ends with spaces
            i--;
        }
    }
    while((i>=0)&&(s[i] != ' ')){   // calculate length until finding a space
        Length++;
        i--;
    }
    return Length;
}
