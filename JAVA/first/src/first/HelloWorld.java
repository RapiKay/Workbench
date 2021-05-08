package first;

public class HelloWorld {

	public static void main(String[] args) {
	
		int value = 3;
		
		switch(value) {
			case 1:
				System.out.println("1");
				break;
			case 2:
				System.out.println("2");
				break;
			case 3:
				System.out.println("3");
				break;
			default :
				System.out.println("그 외 다른 숫자");
		}
	}
}
