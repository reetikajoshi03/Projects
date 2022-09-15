#include <stdio.h>

//Function to convert length
void length()
{
    float a;
    int b, c;
    printf("Enter the length you want to convert : ");
    scanf("%f", &a);
    
    printf("Select the unit of your length : \n");
    printf("1. Meter\n");
    printf("2. Kilometer\n");
    printf("3. Centimeter\n");
    printf("Enter the unit of the length : ");
    scanf("%d", &b);
    
    
    printf("Select the unit to which you want to convert : \n");
    printf("1. Meter\n");
    printf("2. Kilometer\n");
    printf("3. Centimeter\n");
    printf("Enter the unit of the length : ");
    scanf("%d", &c);
    
    if(b==1 && c==2)
    {
        a=a/1000;
    }
    
    else if(b==2 && c==1)
    {
        a=a*1000;
    }
    
    else if(b==2 && c==3)
    {
        a=a*100000;
    }
    
    else if(b==3 && c==2)
    {
        a=a/100000;
    }
    
    else if(b==1 && c==3)
    {
        a=a*100;
    }
    
    else if(b==3 && c==1)
    {
        a=a/100;
    }
    
    else
    {
        printf("Invalid choice: ");
    }
    
    printf("The converted value is : %f", a);
    
}

//Function to convert weight
void weight()
{
    float a;
    int b, c;
    printf("Enter the weight you want to convert : ");
    scanf("%f", &a);
    
    printf("Select the unit of your weight : \n");
    printf("1. Gram\n");
    printf("2. Kilogram\n");
    printf("3. Centigram\n");
    printf("Enter the unit of the weight : ");
    scanf("%d", &b);
    
    
    printf("Select the unit to which you want to convert : \n");
    printf("1. Gram\n");
    printf("2. Kilogram\n");
    printf("3. Centigram\n");
    printf("Enter the unit of the length : ");
    scanf("%d", &c);
    
    if(b==1 && c==2)
    {
        a=a/1000;
    }
    
    else if(b==2 && c==1)
    {
        a=a*1000;
    }
    
    else if(b==2 && c==3)
    {
        a=a*100000;
    }
    
    else if(b==3 && c==2)
    {
        a=a/100000;
    }
    
    else if(b==1 && c==3)
    {
        a=a*100;
    }
    
    else if(b==3 && c==1)
    {
        a=a/100;
    }
    
    else
    {
        printf("Invalid choice: ");
    }
    
    printf("The converted value is : %f", a);
    
}

//Function to convert temperature
void temperature()
{
   float a;
    int b, c;
    printf("Enter the temperature you want to convert : ");
    scanf("%f", &a);
    
    printf("Select the unit of your temperature : \n");
    printf("1. Celcius\n");
    printf("2. Fahrenheit\n");
    printf("3. Kelvin\n");
    printf("Enter the unit of the temperature : ");
    scanf("%d", &b);
    
    
    printf("Select the unit to which you want to convert : \n");
    printf("1. Celcius\n");
    printf("2. Fahrenheit\n");
    printf("3. Kelvin\n");
    printf("Enter the unit of the temperature : ");
    scanf("%d", &c);
    
    if(b==1 && c==2)
    {
        a=a*1.8+32;
    }
    
    else if(b==2 && c==1)
    {
        a=((a-32)*5)/9;
    }
    
    else if(b==2 && c==3)
    {
        a=((a-32)*5)/9+273.15;
    }
    
    else if(b==3 && c==2)
    {
        a=1.8*(a-273.15)+32;
    }
    
    else if(b==1 && c==3)
    {
        a=a+273.15;
    }
    
    else if(b==3 && c==1)
    {
        a=a-273.15;
    }
    
    else
    {
        printf("Invalid choice: ");
    }
    
    printf("The converted value is : %f", a); 
}

//driver code
void main()
{
    int ch;
    printf("                         Unit Converter(Metric System)\n                   ");
    printf("Menu\n");
    printf("1. Length\n");
    printf("2. Weight\n");
    printf("3. Temperature\n");
    printf("What do you want to convert?: ");
    scanf("%d", &ch);
     
    switch(ch)
    {
        case 1:
        length();
        break;
        
        case 2:
        weight();
        break;
        
        case 3:
        temperature();
        break;
        
        default:
        printf("Invalid choice!");
    }
    
    
}


