package motga;

import java.util.Scanner;

import jdk.internal.net.http.common.Log;


class Main {
    public static void main(String[] args) {
       
        
        double firstRoot=0;
        double secondRoot=0;
       
    
      
         System.out.println("Input your formula needed");
        Scanner sc = new Scanner(System.in);
        String scanned = sc.next();
        
        if (scanned.equals("squareroot")) {
            System.out.println("insert number");
            int input = sc.nextInt();
            if (input>0) {
                System.out.println(sqrt.squareroot(input));
            }else if (input<0) {
                    System.out.println(input +"i.");
            } else{
                System.out.println("go onto quadratic formula");
            }
        } else if(scanned.equals("quadratic")){
                System.out.println("input a, b , and c value");
                double a = sc.nextDouble();
            double b= sc.nextDouble();
            double c= sc.nextDouble();
            
            double determinant=(b*b) -4*a*c;
            double squerroot =Math.sqrt(determinant);
             
                if (determinant>0){
            
            
                firstRoot=(-b+squerroot)/(2*a);
                secondRoot=(-b-squerroot)/(2*a);
                System.out.println("Roots are   " + firstRoot + "and    "+ secondRoot +".");
            } else if (determinant==0){
                System.out.println("Root is     " +(-b + squerroot)/(2*a));
            } else if (determinant<0){
                System.out.println(firstRoot+"+i"+ "and"+ secondRoot +"i.");
            }
        }else if(scanned.equals("circlearea")){
            System.out.println("input radius");
           
            double radius =sc.nextDouble();
                if (radius>0){
            System.out.println(sqrt.areaOfCircle(radius));
           
        }  
            
    }else if(scanned.equals("circlecircumference")){
        System.out.println("enter radius");
        double radiusTwo=sc.nextDouble();
    if (radiusTwo>0){
        System.out.println(sqrt.circumferenceOfCircle(radiusTwo));
    }  
}else if (scanned.equals("sin")){
 System.out.println("Insert theta value for sin:  radians only");
        double theta =sc.nextDouble();

        if (theta>0){
            System.out.println(Math.sin(theta));
        }// make a thetaTwo =pi code here
} else if (scanned.equals("cosine")){

        System.out.println("Insert for theta value of cosine: radians only");
        double thetaTwo= sc.nextDouble();
        if (thetaTwo>0){
            System.out.println(Math.cos(thetaTwo));
        } // make a thetaTwo =pi code here
    }else if (scanned.equals("logbase10")) {
        double base=sc.nextDouble();
        if (base>=0){
            System.out.println(Math.log10(base));
        }}else if (scanned.equals("ln")){
            System.out.println("enter number");
            double h=sc.nextDouble();
            System.out.println(sqrt.naturallog(h));
        } else if (scanned.equals("e")){
            System.out.println("enter power:");
            double kl=sc.nextDouble();
            System.out.println(sqrt.e(kl));
        } else if (scanned.equals("exponent")){
            System.out.println("enter base and power");
            double q=sc.nextDouble();
            double u=sc.nextDouble();
            System.out.println(Math.pow(q, u)); 
        }else if (scanned.equals("arcsin")){
            System.out.println("enter theta value");
            double theta =sc.nextDouble();
            System.out.println(sqrt.arcsin(theta));

        }else if (scanned.equals("arccosine")){
            System.out.println("enter a theta:");
            double theta =sc.nextDouble();
            System.out.println(Math.acos(theta));

        } else if (scanned.equals("arctan")){
            System.out.println("enter a theta:");
            double theta =sc.nextDouble();
            System.out.println(Math.atan(theta));

        }else if (scanned.equals("cosecant")){
            System.out.println("enter a theta");
            double theta =sc.nextDouble();
            System.out.println(1/Math.sin(theta));
        }else if (scanned.equals("secant")){
            System.out.println("enter a theta");
            double theta =sc.nextDouble();
            System.out.println(1/Math.cos(theta));
        }else if (scanned.equals("cotan")){
            System.out.println("enter a theta");
            double theta=sc.nextDouble();
            System.out.println(1/Math.tan(theta));
        }else if (scanned.equals("lawofcosine")){
        System.out.println("enter a theta"); 
        }
        
        
        
    
    }

    }
        
    


