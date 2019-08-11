import java.util.Scanner;

public class Uri1134 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int alcool = 0;
		int gasolina = 0;
		int diesel = 0;
		
		while(true) {			
			int opcao = scan.nextInt();
			
			if(opcao == 1) alcool++;
			if(opcao == 2) gasolina++;
			if(opcao == 3) diesel++;
			if(opcao == 4) break;
		}
		
		System.out.println("MUITO OBRIGADO");
		System.out.println("Alcool: " + alcool);
		System.out.println("Gasolina: " + gasolina);
		System.out.println("Diesel: " + diesel);
		
		scan.close();
	}
}
