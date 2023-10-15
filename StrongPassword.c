import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int testCases = scanner.nextInt();
        while (testCases > 0) {
            String inputString = scanner.next();
            List<List<Integer>> positions = new ArrayList<>();
            List<Integer> indices = new ArrayList<>();
            for (int i = 0; i < 10; i++) {
                positions.add(new ArrayList<>());
                indices.add(0);
            }
            for (int i = 0; i < inputString.length(); i++) {
                int digit = inputString.charAt(i) - '0';
                positions.get(digit).add(i);
            }
            int m = scanner.nextInt();
            String leftRanges = scanner.next();
            String rightRanges = scanner.next();
            int currentPosition = 0;
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < 10; j++) {
                    while (indices.get(j) < positions.get(j).size() && positions.get(j).get(indices.get(j)) < currentPosition) {
                        indices.set(j, indices.get(j) + 1);
                    }
                }
                int pickedPosition = currentPosition;
                for (int j = leftRanges.charAt(i) - '0'; j <= rightRanges.charAt(i) - '0'; j++) {
                    if (indices.get(j) >= positions.get(j).size()) {
                        pickedPosition = inputString.length();
                    } else {
                        pickedPosition = Math.max(pickedPosition, positions.get(j).get(indices.get(j)));
                    }
                }
                currentPosition = pickedPosition + 1;
            }
            if (currentPosition >= inputString.length() + 1) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
            testCases--;
        }
    }
}
