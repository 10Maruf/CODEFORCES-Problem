import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while (t-- > 0) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken());
            int k = Integer.parseInt(st.nextToken());
            int[] a = new int[n];
            st = new StringTokenizer(br.readLine());
            for (int i = 0; i < n; i++) {
                a[i] = Integer.parseInt(st.nextToken());
            }
            int[] b = new int[k / 2 + 1];
            int idx = 0;
            for (int i = 1; i < k; i += 2) {
                b[idx++] = a[i];
            }
            b[idx] = 0;
            int cost = 1;
            for (int i = 0; i < b.length; i++) {
                if (b[i] != i + 1) {
                    cost = i + 1;
                    break;
                }
            }
            System.out.println(cost);
        }
    }
}
