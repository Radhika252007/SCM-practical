#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int even = 0,odd =0;
    while(n!=0){
        int temp = n%10;
        if(temp%2==0){
            even++;
        }
        else{
            odd++;
        }
        n = n/10;
    }
    
    printf("%d %d",even,odd);
}
