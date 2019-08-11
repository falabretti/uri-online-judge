import java.util.Scanner;

public class Uri1046 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int inicio = scan.nextInt();
		int fim = scan.nextInt();
		int duracao = 0;
		
		if(inicio < fim) {
			duracao = fim - inicio;
		} else if(inicio > fim) {
			duracao = Math.abs(inicio - fim - 24);
		} else if(inicio == fim) {
			duracao = 24;
		}
		
		System.out.printf("O JOGO DUROU %d HORA(S)\n", duracao);
	}
}
