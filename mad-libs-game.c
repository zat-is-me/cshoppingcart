#include <stdio.h>
#include <string.h>

int main(){
char noun[50] ="";
char verb[50] ="";

char abjective1[50] ="";
char abjective2[50] ="";
char abjective3[50] ="";

printf("Enter an adjective (description): ");
fgets(abjective1, sizeof(abjective1), stdin);
abjective1[strlen(abjective1)-1 ] ='\0';

printf("Enter a noun (animal or person): ");
fgets(noun, sizeof(noun), stdin);
noun[strlen(noun)-1 ] ='\0';

printf("Enter an adjective (description): ");
fgets(abjective2, sizeof(abjective2), stdin);
abjective2[strlen(abjective2)-1 ] ='\0';

printf("Enter a noun (animal or person): ");
fgets(abjective3, sizeof(abjective3), stdin);
abjective3[strlen(abjective3)-1 ] ='\0';

printf("Enter a verb (ending w/ -ing): ");
fgets(verb, sizeof(verb), stdin);
verb[strlen(verb)-1 ] ='\0';

printf("%s\n", noun);
printf("%s\n", verb);
printf("%s\n", abjective1);
printf("%s\n", abjective2);
printf("%s\n", abjective3);
    return 0;
}