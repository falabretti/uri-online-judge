import java.util.Scanner;

public class Uri1017 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
	
		int tempo = scan.nextInt();
		int velocidade = scan.nextInt();
		int distancia = velocidade * tempo;
		
		double consumo = distancia / 12.0;
		
		System.out.printf("%.3f\n", consumo);
	}
}
