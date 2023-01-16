#include <iostream>
using namespace std;
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
    float result=4*(c-32)/ 9.0;
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
    cout << "Invalid Process!" << endl;
}
int main() {
    int d,ch;
    float num,result=0;
    while(1){
     cout << "The Temperature Units:" << endl << "Celsius (Press 1)" << endl << "Kelvin (Press 2)" << endl <<"Fahrenheit (Press 3)" << endl << "Reaumur (Press 4)" << endl << "Please enter a unit : ";
    cin >> d;
     switch(d){
         case 1:
               cout << "Please enter the temperature : ";
               cin >> num;
               cout << "Temperature (Celsius) : " << num << endl;
               cout << "Celcius To Kelvin (Press 1)" << endl << "Celcius To Fahrenheit (Press 2)" << endl << "Celcius To Reaumur (Press 3)" << endl << "Please enter a process : ";
              cin >> ch;
               if(ch==1){
                   result=celtokel(num);
                   cout << num << " Celcius =  " << result << " Kelvin" << endl;
               }else if(ch==2){
                   result=celtofah(num);
                   cout << num << " Celcius =  " << result << " Fahrenheit" << endl;
               }else if(ch==3){
                   result=celtoreu(num);
                   cout << num << " Celcius =  " << result << " Reaumur" << endl;
               }else{
                   invalid();
               }
            break;
        case 2:
               cout << "Please enter the temperature : ";
               cin >> num;
               cout << "Temperature (Kelvin) : " << num << endl;
               cout << "Kelvin To Celsius (Press 1)" << endl << "Kelvin To Fahrenheit (Press 2)" << endl << "Kelvin To Reaumur (Press 3)" << endl << "Please enter a process : ";
               cin >> ch;
               if(ch==1){
                   result=keltocel(num);
                   cout << num << " Kelvin =  " << result << " Celsius" << endl;
               }else if(ch==2){
                   result=keltofah(num);
                   cout << num << " Kelvin =  " << result << " Fahrenheit" << endl;
               }else if(ch==3){
                   result=keltoreu(num);
                   cout << num << " Kelvin =  " << result << " Reaumur" << endl;
               }else{
                   invalid();
               }
            break;
        case 3:
               cout << "Please enter the temperature : ";
               cin >> num;
               cout << "Temperature (Fahrenheit) : " << num << endl;
               cout << "Fahrenheit To Celsius (Press 1)" << endl << "Fahrenheit To Kelvin (Press 2)" << endl << "Fahrenheit To Reaumur (Press 3)" << endl << "Please enter a process : ";
               cin >> ch;
               if(ch==1){
                   result=fahtocel(num);
                   cout << num << " Fahrenheit =  " << result << " Celsius" << endl;
               }else if(ch==2){
                   result=fahtokel(num);
                   cout << num << " Fahrenheit =  " << result << " Kelvin" << endl;
               }else if(ch==3){
                   result=fahtoreu(num);
                   cout << num << " Fahrenheit =  " << result << " Reaumur" << endl;
               }else{
                   invalid();
               }
            break;
        case 4:
               cout << "Please enter the temperature : ";
               cin >> num;
               cout << "Temperature (Reaumur) : " << num << endl;
               cout << "Reaumur To Celsius (Press 1)" << endl << "Reaumur To Fahrenheit (Press 2)" << endl << "Reaumur To Kelvin (Press 3)" << endl << "Please enter a process : ";
              cin >> ch;
               if(ch==1){
                   result=reutocel(num);
                   cout << num << " Reaumur =  " << result << " Celsius" << endl;
               }else if(ch==2){
                   result=reutofah(num);
                   cout << num << " Reaumur =  " << result << " Fahrenheit" << endl;
               }else if(ch==3){
                   result=reutokel(num);
                   cout << num << " Reaumur =  " << result << " Kelvin" << endl;
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