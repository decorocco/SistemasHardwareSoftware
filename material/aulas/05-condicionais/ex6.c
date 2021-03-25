int ex6(long a, long b) {
    if (a <= b) goto LABEL;

    b = a;

    LABEL:
    if (b <= 0) goto LABEL2;
    
    a = -a;

    LABEL2:

    return a;
}

int ex6(long a, long b) {
    if (a > b) {
        b = a;
    }
    else {
        a = -a;
    }

    return a;
}