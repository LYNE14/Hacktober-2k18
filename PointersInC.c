#include<stdio.h>
#include<stdlib.h>

char* copyy(char *p1, char *p2, int k, int i)
{
    char s3[20], *p3;

char *pp1=p1, *pp2=p2;
    int j = 0;    
    int bool = 1;
    
    p3 = s3;
    
    while(bool == 1)
    {
        if(j<k)
        {
           *p3 = *p1;
            p1++;
            p3++; 
            j++;
        }else{
            
            j=0;
            while(j!= i){j++;p2++;}//p1 = &s2[i];
            while(*p2 != '\0')
            {
                *p3 = *p2;
                p2++;
                p3++;
            }
            
            j=0;
            while(j < k){j++;pp1++;}//p1 = &s2[i];//p1 = &s1[k];
            while(*pp1 != '\0')
            {
                *p3 = *pp1;
                pp1++;
                p3++;
            }
            
            bool = 2;
         
        }
        
        
    }
    *p3 = '\0';
       
    
        
    char *p4 = s3;   
    printf("************** %s\n", s3);
        return p4;
}


int main(){
    char s1[]="poesie", s2[]="pralin", *p1, *p2, *p3, s3[20];

    int k = 2, i = 3, j=0;
    
    p1=s1;
    p2=s2;
    
    p3 = copyy(s1,s2, k, i);
    
    
    while(*p3 != '\0')
    {
        s3[j] = *p3;
        p3++;
        j++;
    }
    
    
     printf("-----------%s\n",s3);

    getch();
    return 0;
   
}