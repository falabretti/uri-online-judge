import java.util.Scanner;

public class Uri1047 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int horaInicio = scan.nextInt();
		int minInicio = scan.nextInt();
		int horaFim = scan.nextInt();
		int minFim = scan.nextInt();
		
		int inicio = horaInicio * 60 + minInicio;
		int fim = horaFim * 60 + minFim;
		int duracao = 0;
		
		if(inicio < fim) {
			duracao = fim - inicio;
		} else if(fim < inicio) {
			duracao = fim + 1440 - inicio;
		} else if(fim == inicio) {
			duracao = 1440;
		}
		
		int horas = duracao / 60;
		int minutos = duracao % 60;
		
		System.out.printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);	
	}
}
