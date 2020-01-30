import java.util.Scanner;

public class Uri1117 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int quantidadeNotas = 0;
		double totalNotas = 0;
		
		while(quantidadeNotas < 2) {
			
			double nota = scan.nextDouble();
			
			if(nota < 0 || nota > 10) {
				System.out.println("nota invalida");
				continue;
			}
			
			totalNotas += nota;
			quantidadeNotas++;			
		}
		
		double media = totalNotas / quantidadeNotas;
		System.out.printf("media = %.2f\n", media);	
		
		scan.close();
	}
}
