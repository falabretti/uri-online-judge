import java.util.Scanner;

public class Uri1131 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int opcao = 1;
		int totalGrenais = 0;
		int totalInter = 0;
		int totalGremio = 0;
		int totalEmpates = 0;
		
		while(opcao != 2) {
			int inter = scan.nextInt();
			int gremio = scan.nextInt();
			
			if(inter > gremio) totalInter++;
			else if(gremio > inter) totalGremio++;
			else totalEmpates++;
			totalGrenais++;
			
			System.out.println("Novo grenal (1-sim 2-nao)");
			opcao = scan.nextInt();	
		}
		
		String vencedor = null;
		
		if(totalGremio > totalInter) vencedor = "Gremio venceu mais";
		else if(totalInter > totalGremio) vencedor = "Inter venceu mais";
		else vencedor = "Nao houve vencedor";
		
		System.out.println(totalGrenais + " grenais");
		System.out.println("Inter:" + totalInter);
		System.out.println("Gremio:" + totalGremio);
		System.out.println("Empates:" + totalEmpates);
		System.out.println(vencedor);
		
		scan.close();
	}
}
