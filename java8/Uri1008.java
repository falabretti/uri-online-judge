import java.util.Scanner;

public class Uri1008 {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		int number = scan.nextInt();
		int horas = scan.nextInt();
		double valor = scan.nextDouble();
		
		double salario = horas * valor;
		
		System.out.println("NUMBER = " + number);
		System.out.printf("SALARY = U$ %.2f\n", salario);
	}
}
