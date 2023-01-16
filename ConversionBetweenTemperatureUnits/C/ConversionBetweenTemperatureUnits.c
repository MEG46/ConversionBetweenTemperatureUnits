#include <stdio.h>
float celtofah(float c){
    float result=(c*1.8)+ 32;
    return result;
}
float celtokel(float c){
    float result=c+273.15;
    return result;
}
float celtoreu(float c){
    float result=0.8*c;
    return result;
}
float fahtocel(float c){
    float result=5*(c-32) / 9.0;
    return result;
}
float fahtokel(float c){
    float result=5*(c+459.67) / 9.0;
    return result;
}
float fahtoreu(float c){
    float result=(4*(c-32))/ 9.0;
    return result;
}
float keltocel(float c){
    float result=c-273.15;
    return result;
}
float keltofah(float c){
    float result=(c-273.15)*1.8 + 32;
    return result;
}
float keltoreu(float c){
    float result=0.8*c + 273.15;
    return result;
}
float reutocel(float c){
    float result=1.25*c;
    return result;
}
float reutofah(float c){
    float result=2.25*(c-32);
    return result;
}
float reutokel(float c){
    float result=1.25*c+273.15;
    return result;
}
void invalid(){
    printf("Invalid Process!\n");
}
int main() {
    int d,ch;
    float num,result=0;
    while(1){
     printf("The Temperature Units:\nCelsius (Press 1)\nKelvin (Press 2)\nFahrenheit (Press 3)\nReaumur (Press 4)\nPlease enter a unit : ");
     scanf("%d",&d);
     switch(d){
         case 1:
               printf("Please enter the temperature : ");
               scanf("%f",&num);
               printf("Temperature (Celsius) : %f\n",num);
               printf("Celcius To Kelvin (Press 1)\nCelcius To Fahrenheit (Press 2)\nCelcius To Reaumur (Press 3)\nPlease enter a process : ");
               scanf("%d",&ch);
               if(ch==1){
                   result=celtokel(num);
                   printf("%.3f Celcius =  %.3f Kelvin\n",num,result);
               }else if(ch==2){
                   result=celtofah(num);
                   printf("%.3f Celcius =  %.3f Fahrenheit\n",num,result);
               }else if(ch==3){
                   result=celtoreu(num);
                   printf("%.3f Celcius =  %.3f Reaumur\n",num,result);
               }else{
                   invalid();
               }
            break;
        case 2:
               printf("Please enter the temperature : ");
               scanf("%f",&num);
               printf("Temperature (Kelvin) : %f\n",num);
               printf("Kelvin To Celsius (Press 1)\nKelvin To Fahrenheit (Press 2)\nKelvin To Reaumur (Press 3)\nPlease enter a process : ");
               scanf("%d",&ch);
               if(ch==1){
                   result=keltocel(num);
                   printf("%.3f Kelvin =  %.3f Celsius\n",num,result);
               }else if(ch==2){
                   result=keltofah(num);
                   printf("%.3f Kelvin =  %.3f Fahrenheit\n",num,result);
               }else if(ch==3){
                   result=keltoreu(num);
                   printf("%.3f Kelvin =  %.3f Reaumur\n",num,result);
               }else{
                   invalid();
               }
            break;
        case 3:
               printf("Please enter the temperature : ");
               scanf("%f",&num);
               printf("Temperature (Fahrenheit) : %f\n",num);
               printf("Fahrenheit To Celsius (Press 1)\nFahrenheit To Kelvin (Press 2)\nFahrenheit To Reaumur (Press 3)\nPlease enter a process : ");
               scanf("%d",&ch);
               if(ch==1){
                   result=fahtocel(num);
                   printf("%.3f Fahrenheit =  %.3f Celsius\n",num,result);
               }else if(ch==2){
                   result=fahtokel(num);
                   printf("%.3f Fahrenheit =  %.3f Kelvin\n",num,result);
               }else if(ch==3){
                   result=fahtoreu(num);
                   printf("%.3f Fahrenheit =  %.3f Reaumur\n",num,result);
               }else{
                   invalid();
               }
            break;
        case 4:
               printf("Please enter the temperature : ");
               scanf("%f",&num);
               printf("Temperature (Reaumur) : %f\n",num);
               printf("Reumer To Celsius (Press 1)\nReaumur To Fahrenheit (Press 2)\nReaumur To Kelvin (Press 3)\nPlease enter a process : ");
               scanf("%d",&ch);
               if(ch==1){
                   result=reutocel(num);
                   printf("%.3f Reaumur =  %.3f Celsius\n",num,result);
               }else if(ch==2){
                   result=reutofah(num);
                   printf("%.3f Reaumur =  %.3f Fahrenheit\n",num,result);
               }else if(ch==3){
                   result=reutokel(num);
                   printf("%.3f Reaumur =  %.3f Kelvin\n",num,result);
               }else{
                   invalid();
               }
            break;
        default:
               invalid();
               break;
               
     }
    }

    return 0;
}