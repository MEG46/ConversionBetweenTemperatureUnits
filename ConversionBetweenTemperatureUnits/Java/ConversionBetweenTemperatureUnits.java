

import java.util.Scanner;
	public class ConversionBetweenTemperatureUnits {
	public static double celtofah(double c){
	    double result=(c*1.8)+ 32;
	    return result;
	}
	public static double celtokel(double c){
	    double result=c+273.15;
	    return result;
	}
	public static double celtoreu(double c){
	    double result=0.8*c;
	    return result;
	}
	public static double fahtocel(double c){
	    double result=5*(c-32) / 9.0;
	    return result;
	}
	public static double fahtokel(double c){
	    double result=5*(c+459.67) / 9.0;
	    return result;
	}
	public static double fahtoreu(double c){
	    double result=(4*(c-32))/ 9.0;
	    return result;
	}
	public static double keltocel(double c){
	    double result=c-273.15;
	    return result;
	}
	public static double keltofah(double c){
	    double result=(c-273.15)*1.8 + 32;
	    return result;
	}
	public static double keltoreu(double c){
	    double result=0.8*c + 273.15;
	    return result;
	}
	public static double reutocel(double c){
	    double result=1.25*c;
	    return result;
	}
	public static double reutofah(double c){
	    double result=2.25*(c-32);
	    return result;
	}
	public static double reutokel(double c){
	    double result=1.25*c+273.15;
	    return result;
	}
	public static void invalid(){
	    System.out.println("Invalid Process!");
	}
	    public static void main(String[] args) {
	    Scanner input = new Scanner(System.in);
	    int d,ch;
	    double num,result=0;
	    while(true){
	    System.out.print("The Temperature Units:\nCelsius (Press 1)\nKelvin (Press 2)\nFahrenheit (Press 3)\nReaumur (Press 4)\nPlease enter a unit : ");
	    d=input.nextInt();
	     System.out.println();
	     switch(d){
	         case 1:
	               System.out.print("Please enter the temperature : ");
	               num=input.nextFloat();
	               System.out.println();
	               System.out.println("Temperature (Celsius) : " + num);
	               System.out.print("Celcius To Kelvin (Press 1)\nCelcius To Fahrenheit (Press 2)\nCelcius To Reaumur (Press 3)\nPlease enter a process : ");
	              ch=input.nextInt();
	               System.out.println();
	               if(ch==1){
	                   result=celtokel(num);
	                   System.out.println(num + " Celcius =  " + result + " Kelvin");
	               }else if(ch==2){
	                   result=celtofah(num);
	                   System.out.println(num + " Celcius =  " + result + " Fahrenheit");
	               }else if(ch==3){
	                   result=celtoreu(num);
	                   System.out.println(num + " Celcius =  " + result + " Reaumur");
	               }else{
	                   invalid();
	               }
	            break;
	        case 2:
	               System.out.print("Please enter the temperature : ");
	               num=input.nextFloat();
	               System.out.println();
	               System.out.println("Temperature (Kelvin) : " + num);
	               System.out.print("Kelvin To Celsius (Press 1)\nKelvin To Fahrenheit (Press 2)\nKelvin To Reaumur (Press 3)\nPlease enter a process : ");
	               ch=input.nextInt();
	               System.out.println();
	               if(ch==1){
	                   result=keltocel(num);
	                   System.out.println(num + " Kelvin =  " + result + " Celsius");
	               }else if(ch==2){
	                   result=keltofah(num);
	                   System.out.println(num + " Kelvin =  " + result + " Fahrenheit");
	               }else if(ch==3){
	                   result=keltoreu(num);
	                   System.out.println(num + " Kelvin =  " + result + " Reaumur");
	               }else{
	                   invalid();
	               }
	            break;
	        case 3:
	              System.out.print("Please enter the temperature : ");
	              num=input.nextFloat();
	               System.out.println();
	               System.out.println("Temperature (Fahrenheit) : " + num);
	               System.out.print("Fahrenheit To Celsius (Press 1)\nFahrenheit To Kelvin (Press 2)\nFahrenheit To Reaumur (Press 3)\nPlease enter a process : ");
	               ch=input.nextInt();
	               System.out.println();
	               if(ch==1){
	                   result=fahtocel(num);
	                   System.out.println(num + " Fahrenheit =  " + result + " Celsius");
	               }else if(ch==2){
	                   result=fahtokel(num);
	                   System.out.println(num + " Fahrenheit =  " + result + " Kelvin");
	               }else if(ch==3){
	                   result=fahtoreu(num);
	                   System.out.println(num + " Fahrenheit =  " + result + " Reaumur");
	               }else{
	                   invalid();
	               }
	            break;
	        case 4:
	              System.out.print("Please enter the temperature : ");
	              num=input.nextFloat();
	               System.out.println();
	               System.out.println("Temperature (Reaumur) : " + num);
	              System.out.print("Reaumer To Celsius (Press 1)\nReaumer To Fahrenheit (Press 2)\nReaumer To Kelvin (Press 3)\nPlease enter a process : ");
	               ch=input.nextInt();
	               System.out.println();
	               if(ch==1){
	                   result=reutocel(num);
	                   System.out.println(num + " Reaumur =  " + result + " Celsius");
	               }else if(ch==2){
	                   result=reutofah(num);
	                   System.out.println(num + " Reaumur =  " + result + " Fahrenheit");
	               }else if(ch==3){
	                   result=reutokel(num);
	                   System.out.println(num + " Reaumur =  " + result + " Kelvin");
	               }else{
	                   invalid();
	               }
	            break;
	        default:
	               invalid();
	               break;
	               
	     }
	    }
	    }
	}

