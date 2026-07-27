import java.util.Scanner;
 public class Main {
    public static void main(String[] args) {
        Scanner scanner =new Scanner(System.in);

        System.out.print("fala seu nome: ");
        String name= scanner.nextLine();

        System.out.print("fala a sua idade: ");
        int idade= scanner.nextInt();

        System.out.println("ola " + name + ", vc tem " + idade + " anos");

       if (idade < 18) {
        System.out.println("vc é menor de idade");
       }  if (idade <0) {
        System.out.println("vai nascer ainda né?");
       } else {
        System.out.println("vc é maior de idade");           
        scanner.close();
    }
 }
}