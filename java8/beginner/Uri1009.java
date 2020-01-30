import java.util.Scanner;

public class Uri1009 {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		String nome = scan.next();
		double salario = scan.nextDouble();
		double vendas = scan.nextDouble();
		
		salario += vendas * 0.15;
		
		System.out.printf("TOTAL = R$ %.2f\n", salario);
	}
}
