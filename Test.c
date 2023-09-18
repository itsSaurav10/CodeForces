
int  a,b,c,k,l,o,q,r;
#include <stdio.h>

int main()
{
   char sen[1000];
   printf ("welcome \n please enter your name\n");
    scanf("%[^\n]", &sen);
   printf ("your name is %s \n press a for addition \n s for subtraction \n m for multiplication \n d for division \n q for quit \n",sen);
char input;
 while(1)
 {
  
  int  a,b,c,k,l,o,q,r;

  scanf("%c",&input);
 

  switch(input)
   {
     case 'a':
    
      printf("enter the first number\n");
      scanf("%d",&a);
      
      printf("enter the second  number\n");
      scanf("%d",&b);
      
      printf("sum=%d\n",a+b);
      printf("enter the input\n");
      break;
      
     case 's':
    
      printf("enter the first number\n");
      scanf("%d",&c);
      
      printf("enter the second  number\n");
      scanf("%d",&k);
      
      printf("sum=%d\n",c-k);
      printf("enter the input\n");
      break;
    
    case 'm':
    
      printf("enter the first number\n");
      scanf("%d",&l);
      
      printf("enter the second  number\n");
      scanf("%d",&o);
      
      printf("sum=%d\n",l*o);
      printf("enter the input\n");
      break;
      
    case 'd':
    
      printf("enter the first number\n");
      scanf("%d",&q);
      
      printf("enter the second  number\n");
      scanf("%d",&r);
      
      printf("sum=%d\n",q/r);
      printf("enter the input\n");
      break;
      
    case 'q':
    
     goto end;
      
       
   } 
     
 }
    
   
    
    
    end:
     printf("thankyou");
    
    return 0;
    
}

  scanf("%c",&input);
 

  switch(input)
   {
     case 'a':
    
      printf("enter the first number\n");
      scanf("%d",&a);
      
      printf("enter the second  number\n");
      scanf("%d",&b);
      
      printf("sum=%d\n",a+b);
      printf("enter the input\n");
      break;
      
     case 's':
    
      printf("enter the first number\n");
      scanf("%d",&c);
      
      printf("enter the second  number\n");
      scanf("%d",&k);
      
      printf("sum=%d\n",c-k);
      printf("enter the input\n");
      break;
    
    case 'm':
    
      printf("enter the first number\n");
      scanf("%d",&l);
      
      printf("enter the second  number\n");
      scanf("%d",&o);
      
      printf("sum=%d\n",l*o);
      printf("enter the input\n");
      break;
      
    case 'd':
    
      printf("enter the first number\n");
      scanf("%d",&q);
      
      printf("enter the second  number\n");
      scanf("%d",&r);
      
      printf("sum=%d\n",q/r);
      printf("enter the input\n");
      break;
      
    case 'q':
    
     goto end;
      
       
   } 
     
 }
    
   
    
    
    end:
     printf("thankyou");
    
    return 0;
    
}
