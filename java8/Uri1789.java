import java.util.Scanner;

public class Uri1789 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		while(scan.hasNext()) {
			int tam = scan.nextInt();
			
			int maior = 0;
			
			for(int i = 0; i < tam; i++) {
				int lesma = scan.nextInt();
				
				if(lesma > maior) {
					maior = lesma;
				}
			}
			
			int nivel = 0;
			
			if(maior < 10) nivel = 1;
			if(maior >= 10 && maior < 20) nivel = 2;
			if(maior >= 20) nivel = 3;
			
			System.out.println(nivel);
		}
		
		scan.close();
	}
}
