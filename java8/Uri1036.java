import java.util.Scanner;

public class Uri1036 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		double a = scan.nextDouble();
		double b = scan.nextDouble();
		double c = scan.nextDouble();
		
		double delta = Math.pow(b, 2) - 4 * a * c;
		
		if(delta < 0 || a == 0) {
			System.out.println("Impossivel calcular");
		} else {
			double r1 = (-b + Math.sqrt(delta)) / (2 * a);
			double r2 = (-b - Math.sqrt(delta)) / (2 * a);
			
			System.out.printf("R1 = %.5f\n", r1);
			System.out.printf("R2 = %.5f\n", r2);
		}
	}
}
