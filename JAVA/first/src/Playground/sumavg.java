package Playground;

import java.util.Scanner;

public class sumavg {

	public static void main(String[] args) {
		
		int n,i,tmp,sum = 0;
		float avg;
		Scanner sc = new Scanner(System.in);
		System.out.println("����� ���ϴ� ���α׷��Դϴ�.");
		System.out.println("�� ���� ������ �Է��Ͻðڽ��ϱ�?");
		
		n = sc.nextInt();
		
		for(i=1;i<=n;i++) {
			System.out.println(i+"��° �� �Է�");
			tmp = sc.nextInt();
			sum = sum + tmp;
		}
		
		avg = sum / n;
		
		System.out.println("��� : "+avg);
	}

}
