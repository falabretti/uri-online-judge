import java.util.Scanner;

public class Uri1118 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		while(true) {
			
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
			
			int opcao = 0;			
			while(opcao != 1 && opcao != 2) {			
				System.out.println("novo calculo (1-sim 2-nao)");				
				opcao = scan.nextInt();
			}
			
			if(opcao == 2) break;			
		}
		
		scan.close();
	}
}
