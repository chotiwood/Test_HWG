#include <stdio.h>
int main()
{
    int input;
    
    scanf("%d", &input);
    if(input % 3 == 0 && input % 5 == 0){
        printf("tigalima");
    }
    else if(input % 3 == 0){
        printf("tiga");
    }
    else if(input % 5 == 0){
        printf("lima");
    }else{
        printf("%d", input);
    }

    return 0;
    
    //chotiwut
}
