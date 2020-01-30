import java.util.Scanner;

public class Uri1186 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		String op = scan.next().intern();
		double soma = 0;
		int qnt = 0;
		double resultado;
		
		double[][] m = new double[12][12];
		
		for(int i = 0; i < 12; i++) {
			for(int j = 0; j < 12; j++) {
				m[i][j] = scan.nextDouble();
				
				if(i > 11 - j) {
					soma += m[i][j];
					qnt++;
				}
			}
		}
		
		if(op == "S") resultado = soma;
		else resultado = soma / qnt;
		
		System.out.printf("%.1f\n", resultado);
		
		scan.close();
	}
}
