int main(){
    int  i = 10;
    int *p = &i;
    *p = 2;

    printf("%d", i);
    return 0;
}