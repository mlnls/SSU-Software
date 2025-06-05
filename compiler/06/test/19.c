int func(int num) {
    return 0;
}

int main(){
    int (*fptr)(int) = func;
    return 0;
}