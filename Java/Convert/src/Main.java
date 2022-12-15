import java.util.Scanner;
import java.math.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double degree, radian, grad;
        System.out.print("Açıyı derece cinsinden giriniz : ");
        degree = input.nextDouble();
        radian = Math.toRadians(degree);
        grad = degree * 200 / 180;
        System.out.printf("%.2f Derece = %.2f Radian\n%.2f Derece = %.2f Grad",degree,radian,degree,grad);
    }
}