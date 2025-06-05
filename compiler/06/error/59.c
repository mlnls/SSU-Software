void f(int x) {}
int main() {
    struct S { int a; } s;
    f(s);
    return 0;
}
