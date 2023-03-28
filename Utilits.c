//
// Created by User on 26.03.2023.
//
int punctuationMark(char c) {
    char marks[] = " \t\n\"'.(),?!-=";
    for(int i = 0; i < 13; i++) {
        if(c == marks[i])
            return 1;
    }
    return 0;
}