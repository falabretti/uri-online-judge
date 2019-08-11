import java.util.Scanner;

public class Uri1179 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int[] impar = new int[5];
		int indexPar = 0;
		int[] par = new int[5];
		int indexImpar = 0;
		
		for(int i = 1; i <= 15; i++) {
			int num = scan.nextInt();
			
			if(num % 2 == 0) {
				par[indexPar] = num;
				indexPar++;
			} else {
				impar[indexImpar] = num;
				indexImpar++;
			}
			
			if(indexImpar == 5) {
				for(int j = 0; j < 5; j++) {
					System.out.printf("impar[%d] = %d\n", j, impar[j]);
				}
				indexImpar = 0;
			}			
			if(indexPar == 5) {
				for(int j = 0; j < 5; j++) {
					System.out.printf("par[%d] = %d\n", j, par[j]);
				}
				indexPar = 0;
			}
		}
		
		for(int i = 0; i < indexImpar; i++) {
			System.out.printf("impar[%d] = %d\n", i, impar[i]);
		}
		for(int i = 0; i < indexPar; i++) {
			System.out.printf("par[%d] = %d\n", i, par[i]);
		}
		
		scan.close();		
	}
}
