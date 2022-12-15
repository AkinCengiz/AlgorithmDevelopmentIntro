//Üçgenin alanı
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        float a, h, area;
        Scanner input = new Scanner(System.in);
        System.out.print("Kenar uzunluğu giriniz (cm) : ");
        a = input.nextFloat();
        System.out.print("Yüksekliği giriniz (cm) : ");
        h = input.nextFloat();
        area = a * h / 2;
        System.out.printf("Üçgenin alanı (cm2) : %.2f", area);
    }
}