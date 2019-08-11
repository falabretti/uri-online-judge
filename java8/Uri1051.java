import java.util.Scanner;

public class Uri1051 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		double salario = scan.nextDouble();
		
		if(salario <= 2000) {
			System.out.println("Isento");
		} else {
			double imposto = 0;
			
			if(salario > 4500) {
				imposto += (salario - 4500) * 0.28;
				salario = 4500;
			}
			if(salario > 3000 && salario <= 4500) {
				imposto += (salario - 3000) * 0.18;
				salario = 3000;
			}
			if(salario > 2000 && salario <= 3000) {
				imposto += (salario - 2000) * 0.08;
			}
			
			System.out.printf("R$ %.2f\n", imposto);
		}
	}
}
