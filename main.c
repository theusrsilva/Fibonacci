#include <stdio.h>
#include <time.h>
#include <stdlib.h>

long fibo(int k);
long fibo2(long f1, long f2, int k);
int main() {
    clock_t begin = clock();
    //codigo 1A

//    long f[150]={0,1,1};
//    long k=90;
//    for(int i = 3;i<=k;i++){
//        f[i]=f[i-1]+f[i-2];
//    }
//    printf("%lu",f[k]);



    //codigo 1B

//    int k=100;
//    if(k<=2){
//        printf("%d",1);
//    }else{
//        long a=1;
//        long b=1;
//        long aux;
//        for(int i=3;i<=k;i++){
//            aux= a+b;
//            a=b;
//            b=aux;
//
//        }
//        printf("%lu",aux);
//    }


//    codigo 2A
//    long aux = fibo(43);
//    printf("%lu",aux);


    //codigo 2B

//    int f1 = 0;
//    int f2 = 1;
//    long aux = fibo2(f1,f2,10);
//    printf("%lu",aux);

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\n\n %lf time spent",time_spent);
    return 0;
}

long fibo(int k){
    if (k<=2){
        return(1);
    }else{
        return(fibo(k-1)+fibo(k-2));
    }
}

long fibo2(long f1, long f2, int k){
    if (k==0){
        return(f1);

    }else{
        return(fibo2(f2,f1+f2,k-1));
    }
}