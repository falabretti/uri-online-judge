import java.util.Scanner;

public class Uri1182 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int coluna = scan.nextInt();
		String op = scan.next().intern();
		
		double[][] m = new double[12][12];
		double soma = 0;
		double resultado;
		
		for(int i = 0; i < 12; i++) {
			for(int j = 0; j < 12; j++) {
				m[i][j] = scan.nextDouble();
				
				if(j == coluna) soma+= m[i][j];
			}
		}
		
		if(op == "S") resultado = soma;
		else resultado = soma / 12;
		
		System.out.printf("%.1f\n", resultado);
		
		scan.close();
	}
}
