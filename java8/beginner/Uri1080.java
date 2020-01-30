import java.util.Scanner;


public class Uri1080 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
	
		int[] lista = new int[100];
		int maior = 0;
		int pos = 0;
		
		for(int i = 0; i < 100; i++) {
			lista[i] = scan.nextInt();
			
			if(i == 0) {
				maior = lista[i];
				pos = i + 1;
			}
			
			if(lista[i] > maior) {
				maior = lista[i];
				pos = i + 1;
			}			
		}
		
		System.out.println(maior);
		System.out.println(pos);
		
		scan.close();
	}
}
