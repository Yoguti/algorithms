bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }

    char buff[12];
    sprintf(buff, "%d", x); 

    int size = 0;

    while (buff[size] != '\0') {
        size++; 
    }

    for (int i = 0; i < size / 2; i++) {
        if (buff[i] != buff[size - 1 - i]) {
            return false;
        }
    }
    return true;
}
