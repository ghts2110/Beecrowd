import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        double r;
        Scanner sc = new Scanner(System.in);
        
        r = sc.nextDouble();
        System.out.printf("A=%.4f\n", r * r * 3.14159);
    }
}