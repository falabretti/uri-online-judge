import java.util.Scanner;

public class Uri1021 {
	
	public static void mostrarNotas(int valor, double nota[]) {
		System.out.println("NOTAS:");
		for(int i = 0; i < 6; i++) {
		System.out.printf("%d nota(s) de R$ %.2f\n", valor / (int) nota[i], nota[i]);
		valor %= (int) nota[i];
		}
		System.out.println("MOEDAS:");
		System.out.printf("%d moeda(s) de R$ %.2f\n", valor, 1.0);;
	}
	public static void mostrarMoedas(int valor, double moeda[]) {
		for(int i = 0; i < 5; i++) {
			System.out.printf("%d moeda(s) de R$ %.2f\n", valor / (int) moeda[i], moeda[i] / 100);;
			valor %= (int) moeda[i];
		}
	}

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		double valorNotas[] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0};	
		double valorMoedas[] = {50.0, 25.0, 10.0, 5.0, 1.0};
		
		double entrada = scan.nextDouble();
		int notas = (int) entrada;
		int moedas = (int) ((entrada - notas) * 100);		
		
		mostrarNotas(notas, valorNotas);
		mostrarMoedas(moedas, valorMoedas);
	}
}
