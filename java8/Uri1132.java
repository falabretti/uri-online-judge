import java.util.Scanner;

public class Uri1132 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int x = scan.nextInt();
		int y = scan.nextInt();
		int menor, maior;
		
		if(x < y) {
			menor = x;
			maior = y;
		} else {
			menor = y;
			maior = x;
		}
		
		int total = 0;
		
		for(int i = menor; i <= maior; i++) {
			if(i % 13 != 0) total += i;
		}
		
		System.out.println(total);
		
		scan.close();
	}
}
