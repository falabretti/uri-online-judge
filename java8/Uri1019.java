import java.util.Scanner;

public class Uri1019 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int entrada = scan.nextInt();
		
		int horas = entrada / 3600;
		entrada %= 3600;
		int minutos = entrada / 60;
		int segundos = entrada % 60;
		
		System.out.printf("%d:%d:%d\n", horas, minutos, segundos);
	}
}
