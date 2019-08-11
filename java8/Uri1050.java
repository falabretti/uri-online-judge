import java.util.Scanner;

public class Uri1050 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int ddd = scan.nextInt();
		String saida = null;
		
		if(ddd == 61) saida = "Brasilia";
		else if(ddd == 71) saida = "Salvador";
		else if(ddd == 11) saida = "Sao Paulo";
		else if(ddd == 21) saida = "Rio de Janeiro";
		else if(ddd == 32) saida = "Juiz de Fora";
		else if(ddd == 19) saida = "Campinas";
		else if(ddd == 27) saida = "Vitoria";
		else if(ddd == 31) saida = "Belo Horizonte";
		else saida = "DDD nao cadastrado";
		
		System.out.println(saida);		
	}
}
