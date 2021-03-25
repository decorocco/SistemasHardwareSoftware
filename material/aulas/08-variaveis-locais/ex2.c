void ex2(int rsp) {
    int var1, var2;
    var1 = 10;
    var2 = 11;

    func2(&var1);
    var2 += 1;
    func2(&var2);
}