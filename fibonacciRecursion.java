import java.util.Scanner;

public class fibonaccirecursion {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n;
		n =sc.nextInt();
		
		System.out.println(fibonacci(n));
	}

	private static long fibonacci(int n) {
		if(n<=1) {
			return n;
		}
		return (fibonacci(n - 1) + fibonacci(n - 2));
		// TODO Auto-generated method stub
		
	}

}
