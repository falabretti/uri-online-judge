import java.util.Scanner;

public class Uri1114 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int senha = 2002;
		int tentativa = 0;
		
		while(tentativa != senha) {
			tentativa = scan.nextInt();
			
			if(tentativa != senha) System.out.println("Senha Invalida");
		}
		
		System.out.println("Acesso Permitido");
		
		scan.close();
	}
}
