package Binary;

public class BinaryChecker {

    static int BinaryPrint(int Input){

        return switch (Input) {
            case 1 -> 2;
            case 2 -> 4;
            case 3 -> 8;
            case 4 -> 16;
            case 5 -> 10;
            default -> 33;
        };
    }

}
