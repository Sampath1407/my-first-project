#include<stdio.h>

int add(int a, int b){
    int sum=a+b;
    return sum;
}


int sub(int a, int b){
    int m;
    if (a>b){
        m=a-b;
    }else if(b>a){
        m=b-a;
    }else{
        m=a-b;
    }
    return m;
}

int mul(int a, int b){
    int v=a*b;
    return v;
}

int div(int a, int b){
    int d;
    if (b==0){
        printf("ZeroDivisionError\n");
        return 0;
    }else{
        d=a/b;
        return d;
    }
}


int re(int a, int b){
    int r= a%b;
    return r;
}


int main(){
    int x, y, z;
    printf("ENETR TWO NUMBERS:\n");
    scanf("%d%d", &x, &y);
    char ch;
    printf("ENTER YOUR CHOICE (+,-,*,/,%)\n");
    scanf(" %c", &ch);
    if(ch=='+'){
        z=add(x,y);
        printf("Sum = %d\n", z);
    }else if(ch=='-'){
        z= sub(x,y);
        printf("sub = %d\n", z);
    }else if(ch=='*'){
        z=mul(x,y);
        printf("mul = %d\n", z);
    }else if(ch=='/'){
        z=div(x,y);
        printf("div = %d\n", z);
    }else if(ch=='%'){
        z=re(x,y);
        printf("rem = %d\n", z);
    }
    return 0;
}

