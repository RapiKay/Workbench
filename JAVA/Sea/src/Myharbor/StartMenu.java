package Myharbor;

import java.util.Scanner;

public class StartMenu {

    public static void MainStartMenu() throws InterruptedException {
        System.out.println("==============================================");
        System.out.println(" MyHarbor 게임 런쳐입니다. 아래 메뉴 중 선택해주세요");
        System.out.println(" 1. 게임 시작\n 2. 개발자 보기\n 3. 게임 나가기");
        System.out.println("==============================================");

        Scanner sc = new Scanner(System.in);
        int input = sc.nextInt();

        switch (input) {
            case 1 -> MainGameStart();
            case 2 -> LookDev();
            case 3 -> {
                System.out.println(" 런쳐를 종료합니다.");
                System.exit(0);
            }
        }
    }

    public static void MainGameStart() throws InterruptedException {

        System.out.println("잠시후 게임을 시작합니다.");
        int i;
        for(i=5;i>=1;i--){
            Thread.sleep(1000);
            System.out.println(i);
        }
    }

    public static void LookDev() throws InterruptedException {
        System.out.println("============================================");
        System.out.println("Made by RapiKay");
        System.out.println("이 소스는 교역게임을 만들기 위해 제작되었습니다.");
        System.out.println("Suwon Information Science High School 20912");
        System.out.println("아니 쌤 이거 된다니깐요?");
        System.out.println("============================================");

        Scanner sc = new Scanner(System.in);

        sc.nextInt();
        MainStartMenu();
    }
}
