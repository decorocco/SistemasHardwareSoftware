int ex5(long a, long b){
    int dl = a > 0;
    int al = b <= 0;
    if(dl != al) goto DONE;

    long c = b - 2;
    return c;

    DONE:
    c = a + 5;
    return c;
}

int ex5(long a, long b){
    if((a>0) && (b<=0)) {
        return b-2;
    }
    return a+5;
}