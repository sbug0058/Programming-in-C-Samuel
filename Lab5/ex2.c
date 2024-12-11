int main() {
    int src[] = {7, 8, 9, 10, 11};
    int dst[3];
    int n = sizeof(src) / sizeof(src[0]);

    // Calling the function deliberately with incorrect size
    cpArr(src, dst, 10); 

    for (int i = 0; i < 3; i++) {
        printf("%d ", dst[i]); // This might access undefined memory
    }
    return 0;
}
