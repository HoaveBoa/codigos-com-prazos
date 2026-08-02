import java.util.ArrayList;
import java.util.Scanner;
public class biblioteca {
    public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
     ArrayList<String> livros = new ArrayList<>(); 
        boolean continuar = true;
        while (continuar) {
        System.out.println("bem vindo a biblioteca");
        System.out.println("selecione uma opção");
        System.out.println("1 - listar livros");
        System.out.println("2 - adicionar livro");
        System.out.println("3 - remover livro");
        System.out.println("4 - sair");
        int opcao = scanner.nextInt();
        scanner.nextLine();
       
        switch (opcao) {
           case 1:
            System.out.println("livros disponiveis: ");
            for (String livro : livros) {
                System.out.println(livros);
            }

            break;
           case 2:
            System.out.println("digite o nome do livro");
            String nome1 = scanner.nextLine();
            System.out.println("digite o autor do livro");
            String autor1 = scanner.nextLine();
            livros.add(nome1 + " - " + autor1);
            break;


            case 3: 
            System.out.println("digite o nome do livro que deseja remover");
            String nome2 = scanner.nextLine();
            System.out.println("digite o autor do livro");
            String autor2 = scanner.nextLine();
            livros.remove(nome2 + " - " + autor2);
            System.out.println("livro removido com sucesso");
            break;
         
            case 4:
                continuar = false;
                break;
            }
        }
    }
    
}
