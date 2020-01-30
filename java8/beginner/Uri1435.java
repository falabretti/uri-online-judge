import java.util.Scanner;

public class Uri1435 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		while(true) {
			int tam = scan.nextInt();
			
			if(tam == 0) break;
			
			int[][] m = new int[tam][tam];
			
			int v = 1;
			int inicio = 0;
			int fim = tam - 1;
			
			for(int i = 0; i < tam; i++) {
				for(int l = inicio; l <= fim; l++) {
					for(int c = inicio; c <= fim; c++) {
						if(l == inicio || l == fim || c == inicio || c == fim) {
							m[l][c] = v;
						}
					}
				}
				
				v++;
				inicio++;
				fim--;
			}
			
			for(int i = 0; i < tam; i++) {
				String linha = "";
				for(int j = 0; j < tam; j++) {
					linha = linha.concat(String.format("%3d", m[i][j]));
//					System.out.printf("%3d", m[i][j]);
					
					if(!(j == tam - 1)) linha = linha.concat(" ");
				}
				System.out.println(linha);
			}
			System.out.println();
		}
		
		scan.close();
	}
}
