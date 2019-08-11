import java.util.Scanner;

public class Uri1020 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int entrada = scan.nextInt();
		
		int ano = entrada / 365;
		entrada %= 365;
		int mes = entrada / 30;
		int dia = entrada %= 30;
		
		System.out.printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
	}
}
