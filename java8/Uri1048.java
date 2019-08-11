import java.util.Scanner;

public class Uri1048 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		double salario = scan.nextFloat();
		double percentual = 0;
		
		if(salario <= 400) percentual = 0.15;
		if(salario > 400 && salario <= 800) percentual = 0.12;
		if(salario > 800 && salario <= 1200) percentual = 0.1;
		if(salario > 1200 && salario <= 2000) percentual = 0.07;
		if(salario > 2000) percentual = 0.04;
		
		double reajuste = salario * percentual;
		
		System.out.printf("Novo salario: %.2f\n", salario + reajuste);
		System.out.printf("Reajuste ganho: %.2f\n", reajuste);
		System.out.printf("Em percentual: %.0f %%\n", percentual * 100);
	}
}
