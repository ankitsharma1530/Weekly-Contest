int solve(string s) {
    int tot = 0;

    int var = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(')
            var++;
        else if (var <= 0)
            continue;
        else {
            var--;
            tot++;
        }
    }
    return tot * 2;
}
