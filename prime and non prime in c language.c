#include<stdio.h>
int prime(int number);
int not_prime(int number);
int main(){
    int number;
    printf("\nEnter Range not less than 2 : ");
    scanf("%d",&number);
    printf("\n");
    printf("prime Number:\n");
    prime(number);
    printf("\n");
    printf("Non prime Number:\n");
    not_prime(number);
    return 0;
}
int prime(int number){
    int i,counter=2,flag,counter_one=0;
    while(counter<=number){
            for(i=2;i<counter;i++){
                flag=0;
                if(counter%i==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                counter_one++;
                printf("%d\t",counter);
            }
            counter++;
    }
    printf("\nTotal Prime Number: %d\n",counter_one);
}

int not_prime(int number){
    int i,counter=2,flag,counter_one=0;
    while(counter<=number){
            for(i=2;i<counter;i++){
                flag=0;
                if(counter%i==0){
                    printf("%d\t",counter);
                    counter_one++;
                    break;
                }
            }
            counter++;
    }
    printf("\nTotal Non prime Number: %d\n",counter_one);
}
