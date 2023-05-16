#include<stdio.h>
#include<string.h>
int main(){
char s[1000];
printf("Enter A String: ");
gets(s);
int n=strlen(s),vowel=0,conso=0;
for(int i=0;i<n;i++){
        if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'){
            vowel++;
}
else{conso++;}
    }
printf("\nTotal Number of Vowel In The String Is: %d\n",vowel);
printf("\nTotal Number of Consonant In The String Is: %d\n",conso);
return 0;
}

