package Myharbor;

import java.util.Arrays;
import java.util.Scanner;

public class InGame {

    Scanner sc = new Scanner(System.in);

    public static int[] ShipLevel = {1,1,1,1};
    public static int ShipHealth = 100;

    public static void GameMain(){
        while(true){
            UI();
        }
    }

    public static void UI(){

        System.out.println(" 배의 메인 레벨 : " + Arrays.toString(ShipLevel));
        System.out.println(" 배 HP :" + ShipHealth + " / 100");
    }
}
