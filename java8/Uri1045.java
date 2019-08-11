import java.util.Scanner;
import java.util.Arrays;

public class Uri1045 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		float a = scan.nextFloat();
		float b = scan.nextFloat();
		float c = scan.nextFloat();
		
		float lista[] = {a, b, c};
		Arrays.sort(lista);
		
		a = lista[2];
		b = lista[1];
		c = lista[0];
		
		if(a >= b + c) {
			System.out.println("NAO FORMA TRIANGULO");
		} else {
			if(Math.pow(a, 2) == Math.pow(b, 2) + Math.pow(c,  2)) {
				System.out.println("TRIANGULO RETANGULO");
			}
			if(Math.pow(a, 2) > Math.pow(b, 2) + Math.pow(c,  2)) {
				System.out.println("TRIANGULO OBTUSANGULO");
			}
			if(Math.pow(a, 2) < Math.pow(b, 2) + Math.pow(c,  2)) {
				System.out.println("TRIANGULO ACUTANGULO");
			}
			if(a == b && b == c) {
				System.out.println("TRIANGULO EQUILATERO");
			}
			if(a == b && a != c || a == c && a != b || b == c && b != a) {
				System.out.println("TRIANGULO ISOSCELES");
			}
		}
	}
}
