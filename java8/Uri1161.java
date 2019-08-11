import java.util.Scanner;

public class Uri1161 {
	
	static long fatorial(long num) {
		if(num == 0) return 1;
		return num * fatorial(num - 1);
	}

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		while(scan.hasNext()) {			
			long m = scan.nextInt();
			long n = scan.nextInt();
			
			long fatM = fatorial(m);
			long fatN = fatorial(n);			
			long soma = fatN + fatM;
			
			System.out.println(soma);			
		}
		
		scan.close();
	}
}
