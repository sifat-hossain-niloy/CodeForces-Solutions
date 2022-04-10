#include<stdio.h>

int main(){


   char s[100];
    
    while(fgets(s,100,stdin))
    {

        int length = 0;
        while(s[length]!='\0')
        {
            length++;
        }
        
        int l = 0,r = length-1;
        bool hae = true;

        while(l<r)
        {
            if(s[l]!=s[r])
            {
                hae = false;
                break;
            }
            else{
                l++;
                r--;
            }
        }
        if(hae)
        {
            printf("Palindrome\n");
        }
        else{
            printf("Not a Palindrome\n");
        }
    }
    

    return 0;
}
