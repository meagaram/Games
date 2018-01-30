#include<stdio.h>

int main() {
    char flames[6]={'f','l','a','m','e','s'}, name1[20], name2[20];
    int i, j, k = 0, count = 1;
    scanf("%s",name1);
    scanf("%s",name2);
    for(i = 0; name1[i] != '\0'; i++){
        for(j = 0; name2[j] != '\0'; j++) {
            if(name1[i] == name2[j]) {
                name1[i] = '1';
                name2[j] = '1';
            }
        }
    }
    for(i = 0; name1[i] != '\0'; i++) {
        if(name1[i] > 'A' && name1[i] < 'Z')
            count += 1;
    }
    for(i = 0; name2[i] != '\0'; i++) {
        if(name2[i] > 'A' && name2[i] < 'Z')
            count += 1;
    }
   /* printf("%d",count);
    printf("\n%s",name1);
    printf("\n%s",name2); */
    j = 0;
    k = 6;
    for(i = 0; i < 5; i++) {
        jolly = count % k;
        j = jolly;
        k--;
        if(jolly == 0) jolly = i;
        flames[jolly-1] = '1';
        while(flames[j] != '\0') {
            temp = flames[jolly];
            flames[jolly] = flames[jolly-1];
            flames[jolly-1] = temp;
            j++;
        }
    } 
    for(i = 0; i < 6; i++) 
        printf("%c ",flames[i]);
   /* for(i = 0; i < 6; i++) {
        if(flames[i] > 'a' && flames[i] < 'z') {
            printf("%c",flames[i]);
        }
    } */
    return 0;
}
