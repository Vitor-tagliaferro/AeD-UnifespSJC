#include <string.h>
#include <stdio.h>

int main(){
    int p, s;
    char palavra[11], *um = "one";

    scanf("%d\n", &p);

    for(int i = 0; i < p; ++i){
        scanf("%s\n", &palavra);

        if(strlen(palavra) == 5)    printf("3\n");
        else{
            s = 0;
            for(int j = 0; j < 3; ++j){
                if(palavra[j] == um[j]) ++s;
            }

            if(s > 1) printf("1\n");
            else                printf("2\n");
        }
    }

    return 0;
}
