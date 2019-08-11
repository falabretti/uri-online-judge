import java.util.Scanner;

public class Uri1043 {

	public static boolean triangulo(float a, float b, float c) {
		if ((Math.abs(b - c) < a && a < (b + c))
			       || (Math.abs(a - c) < b && b < (a + c))
			       || (Math.abs(a - b) < c && c < (a + b))) {
			return true;
		}
		return false;
	}	
	
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		float a = scan.nextFloat();
		float b = scan.nextFloat();
		float c = scan.nextFloat();
		
		if(triangulo(a, b, c)) {
			System.out.printf("Perimetro = %.1f\n", a + b + c);
		} else {
			System.out.printf("Area = %.1f\n", ((a + b) * c) / 2);
		}
	}
}
