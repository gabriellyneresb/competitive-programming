// Gabrielly Neres Barbara - Ciência da Computação PUC Minas
// O Imperador Júlio César foi um dos principais nomes do Império Romano. Entre suas contribuições, temos um algoritmo de criptografia chamado 
// “Ciframento de César”.
//Segundo os historiadores, César utilizava esse algoritmo para criptografar as mensagens que enviava aos seus generais durante as batalhas. A ideia básica é um simples deslocamento de caracteres. 
//Assim, por exemplo, se a chave utilizada para criptografar as mensagens for 3, todas as ocorrências do caractere ’a’são substituídas pelo caractere ’d’, as do ’b’ por ’e’, e assim sucessivamente. 
//Crie um método iterativo que recebe uma string como parˆametro e retorna outra contendo a entrada de forma cifrada. 
//Neste exercício, suponha a chave de ciframento três.
//Na saída padrão, para cada linha de entrada, escreva uma linha com a mensagem criptografada, até que a entrada seja "FIM"

import java.util.Scanner;
public class Ciframento{
	public static String cifrar (String palavra){
		String novaPalavra = "";
		char novaletra;
		for (int i = 0; i < palavra.length(); i++){
			char c = palavra.charAt(i);
			// primeiro pega cada leta e anda 3 caracteres
			novaletra= (char) (c+3);
			// depois passa cada letra para uma nova string
			novaPalavra += novaletra;
		}
		return novaPalavra;
	}
        
	public static void main (String[] args){
		Scanner scanner = new Scanner (System.in);
		String palavra = scanner.nextLine();

		while (!palavra.equals("FIM")){
			System.out.println(cifrar(palavra));
			palavra = scanner.nextLine();
		}
	}	
}

//TESTES:
/*
amor
dpru
roma
urpd
legal
ohjdo
o rei disse que e para selar os portoes
r#uhl#glvvh#txh#h#sdud#vhodu#rv#sruwrhv
FIM 
*/
