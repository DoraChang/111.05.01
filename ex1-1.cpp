#include <iostream>

using namespace std;

int main()
{
    int i;
    double f; //
    float f1;
    char s[30];
    
    printf("please input a integer \n");
    scanf("%d",&i);
    printf("your input integer= %d\n",i);
    
    printf("please input a float number \n");
    scanf("%f",&f);
    printf("your input float number= %1f\n",f);
    
    printf("please input a string \n");
    scanf("%s",s);
    printf("your input string= %s\n",s);
    #endif
    
    printf("char display=%c\n",s);
    printf("char display=%x\n",s);
    
    printf("your input integer=%d\n",i + 2);
    printf("your input integer=%d\n",i - 2);
    printf("your input integer=%d\n",i * 2);
    printf("your input integer=%d\n",i / 2);
    return 0;
}
