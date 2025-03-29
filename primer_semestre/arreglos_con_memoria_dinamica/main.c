//Programa que crea arreglos con memoria dinamica.

main(){
    int *arr=(int*)malloc(8*sizeof(int));
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    arr[3]=4;
    arr[4]=5;
    arr[5]=6;
    arr[6]=7;
    arr[7]=8;
    printf("%d", arr[0]);
    printf("\n%d", arr[1]);
    printf("\n%d", arr[2]);
    printf("\n%d", arr[3]);
    printf("\n%d", arr[4]);
    printf("\n%d", arr[5]);
    printf("\n%d", arr[6]);
    printf("\n%d", arr[7]);
    free(arr);
}
