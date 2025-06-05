struct S { int x; };
int main() {
    struct S s;
    for (; s; );
    return 0;
}
