import java.util.Scanner;

public class Uri1014 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int distancia = scan.nextInt();
		double combustivel = scan.nextDouble();		
		double consumo = distancia / combustivel;
		
		System.out.printf("%.3f km/l\n", consumo);
	}
}
