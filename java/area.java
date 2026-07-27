import java.util.Scanner;
  public class area{
   public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("digite a largura do retangulo: ");
    double largura = scanner.nextDouble();
    System.out.print("digite a altura do retangulo: ");
    double altura = scanner.nextDouble();
    double area1=largura*altura;
    System.out.println("a area do retangulo é: " + area1); 
    scanner.close();
   }
  }  