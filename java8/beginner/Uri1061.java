import java.util.Scanner;

public class Uri1061 {
	
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		scan.next();
		int diaInicio = scan.nextInt();
		int horaInicio = scan.nextInt();
		scan.next();
		int minutoInicio = scan.nextInt();
		scan.next();
		int segundoInicio = scan.nextInt();
		
		scan.next();
		int diaFim = scan.nextInt();
		int horaFim = scan.nextInt();
		scan.next();
		int minutoFim = scan.nextInt();
		scan.next();
		int segundoFim = scan.nextInt();
		
		int inicio = segundoInicio + minutoInicio * 60 + horaInicio * 3600 + diaInicio * 3600 * 24;
		int fim = segundoFim + minutoFim * 60 + horaFim * 3600 + diaFim * 3600 * 24;
		int duracao = fim - inicio;
		
		int duracaoDia = duracao / (3600 * 24);
		duracao %= (3600 * 24);
		int duracaoHora = duracao / 3600;
		duracao %= 3600;
		int duracaoMinuto = duracao / 60;
		int duracaoSegundo = duracao % 60;
		
		System.out.printf("%d dia(s)\n", duracaoDia);
		System.out.printf("%d hora(s)\n", duracaoHora);
		System.out.printf("%d minuto(s)\n", duracaoMinuto);
		System.out.printf("%d segundo(s)\n", duracaoSegundo);
		
		scan.close();
	}
}
