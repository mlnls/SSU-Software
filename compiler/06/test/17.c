struct Point {
    int x;
    int y;
};

int sizeTest() {
    return sizeof(int) + sizeof(struct Point);
}

int main() {
    sizeTest();
    return 0;
}
