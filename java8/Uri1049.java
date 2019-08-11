import java.util.Scanner;

public class Uri1049 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		String p1 = scan.next().intern();
		String p2 = scan.next().intern();
		String p3 = scan.next().intern();
		String saida = null;
		
		if(p1 == "vertebrado") {
			if(p2 == "ave" ) {
				if(p3 == "carnivoro") saida = "aguia";
				else if(p3 == "onivoro") saida = "pomba";
			} else if(p2 == "mamifero") {
				if(p3 == "onivoro") saida = "homem";
				else if(p3 == "herbivoro") saida = "vaca";
			}
		} else if(p1 == "invertebrado") {
			if(p2 == "inseto" ) {
				if(p3 == "hematofago") saida = "pulga";
				else if(p3 == "herbivoro") saida = "lagarta";
			} else if(p2 == "anelideo") {
				if(p3 == "hematofago") saida = "sanguessuga";
				else if(p3 == "onivoro") saida = "minhoca";
			}
		}
		
		System.out.println(saida);
	}
}
