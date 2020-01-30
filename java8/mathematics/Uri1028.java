import java.util.Scanner;

public class Uri1028 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int testes = scan.nextInt();
		
		for(int i = 1; i <= testes;i++) {
			int ricardo = scan.nextInt();
			int vicente = scan.nextInt();
			int resto = 1;
			int resultado = 0;
			
			if(ricardo > vicente) {
				while(resto != 0) {
					resto = ricardo % vicente;
					ricardo = vicente;
					vicente = resto;
				}
				resultado = ricardo;
				
			} else if(vicente > ricardo) {
				while(resto != 0) {
					resto = vicente % ricardo;
					vicente = ricardo;
					ricardo = resto;
				}
				resultado = vicente;
			}
			System.out.println(resultado);		
		}
	}
}
