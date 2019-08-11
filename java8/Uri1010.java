import java.util.Scanner;

public class Uri1010 {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		int codigo1 = scan.nextInt();
		int quantidade1 = scan.nextInt();
		double valor1 = scan.nextDouble();
		int codigo2 = scan.nextInt();
		int quantidade2 = scan.nextInt();
		double valor2 = scan.nextDouble();
		
		double total = quantidade1 * valor1 + quantidade2 * valor2;
		
		System.out.printf("VALOR A PAGAR: R$ %.2f\n", total);
	}
}
