int ex4(long a, long c) {
    if (a <= 0) goto LABEL;

    END:
    int b = 2;
    return c *= b;

    LABEL:
    b = 1;

    goto END;
}

int ex4(long a, long c) {
    int b;
    if (a > 0) {
        b = 1;
    }

    b = 2;
    return c *= b
}