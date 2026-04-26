import java.util.Scanner;
public class TotalCost{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the item name: ");
        String a= scanner.nextLine();

        System.out.print("Enter the price for one unit of " + a+ ": ");
        double b=scanner.nextDouble();

        System.out.print("Enter units bought: ");
        int z=scanner.nextInt();

        double c=b*z;
        System.out.println("total money spent to buy " + z+ " units of "+ a +" is Rs" + c);
    scanner.close();
    }
}