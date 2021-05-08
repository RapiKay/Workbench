package Playground;

import java.util.Scanner;

public class sumavg {

	public static void main(String[] args) {
		
		int n,i,tmp,sum = 0;
		float avg;
		Scanner sc = new Scanner(System.in);
		System.out.println("평균을 구하는 프로그램입니다.");
		System.out.println("몇 개의 점수를 입력하시겠습니까?");
		
		n = sc.nextInt();
		
		for(i=1;i<=n;i++) {
			System.out.println(i+"번째 수 입력");
			tmp = sc.nextInt();
			sum = sum + tmp;
		}
		
		avg = sum / n;
		
		System.out.println("평균 : "+avg);
	}

}
