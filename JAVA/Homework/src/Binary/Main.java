package Binary;

import java.util.Scanner;

import static Binary.BinaryChecker.BinaryPrint;         // class 생성 후 호출 실습

public class Main {

    public static void main(String[] args) throws InterruptedException {

        Scanner sc = new Scanner(System.in);

        System.out.println(" 입력받은 수를 다른 진수로 변환해주는 프로그램입니다. 바꾸고 싶은 수를 입력해주세요");

        int Input = sc.nextInt();

        System.out.println(Input + "을(를) 입력받았습니다. 해당 수의 진법을 선택해주세요");
        System.out.println(" 1. 2진법\n 2. 4진법\n 3. 8진법\n 4. 16진법\n 5. 10진법");

        int Checker = 0;
        int FirstBinary = sc.nextInt(); // Input의 진법
        int Bp1 = BinaryPrint(FirstBinary); //BinaryPrint(FirstBinary)는 입력받은 FirstBinary의 진법을 출력

        try{
            Integer.parseInt(String.valueOf(Input), FirstBinary);
        }catch (NumberFormatException e){       // 에러 예외처리 (입력한 수와 맞지 않은 진법)
            Checker = -1;
        }

        if (Checker == -1) {
            System.out.println(" 입력하신 수 " + Input + "이(가) " + Bp1 + "진법과 맞지 않습니다. 다시 입력해주세요. 5초 뒤 시스템을 재시작합니다.");
            Thread.sleep(5000);
            System.out.flush();
            args = new String[0];
            main(args);
            System.exit(0);
        }

        if (Bp1 == 33) {
            System.out.println(" 진법이 맞지 않습니다. 1, 2, 3, 4, 5 중 하나를 입력해주세요.\n 시스템이 5초 뒤에 다시 시작됩니다.");
            Thread.sleep(5000);
            System.out.flush();
            args = new String[0];
            main(args);
            System.exit(0);
        }

        System.out.println(Bp1 + "진법의 수 " + Input + "을 어떤 진법으로 변환하시겠습니까?");
        System.out.println(" 1. 2진법\n 2. 4진법\n 3. 8진법\n 4. 16진법\n 5. 10진법");

        int SecondBinary;

        while (true) {
            SecondBinary = sc.nextInt();
            if (SecondBinary == FirstBinary) {
                System.out.println(Input + "은 이미 " + Bp1 + "진법 입니다! 다른 진법을 사용해주세요!");
                continue;
            }
            if (BinaryPrint(SecondBinary) == 33){
                System.out.println(" 진법이 맞지 않습니다. 1, 2, 3, 4, 5 중 하나를 입력해주세요.");
                continue;
            }
            break;
        }

        int Bp2 = BinaryPrint(SecondBinary);

        System.out.println(" 결과를 출력합니다.");
        System.out.println(" " + Bp1 + "진법의 수 " + Input);
        System.out.println(" " + Bp2 + "진법의 수 " + result(Bp1,Bp2,Input));
    }

    static String result(int FirstBinary, int SecondBinary, int input){

        int Terminal = Integer.parseInt(String.valueOf(input), FirstBinary);

        StringBuilder ans = new StringBuilder();

        while(Terminal > 0) {
            ans.insert(0, (Terminal % SecondBinary));
            Terminal /= SecondBinary;
        }

        return ans.toString();
    }

}

