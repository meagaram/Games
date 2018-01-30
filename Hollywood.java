

import java.util.Arrays;
import java.util.Scanner;

public class Hollywood {
    public static void main(String [] args) {
        char[] film = {'I','R','U','M','U','G','A','N'};
        char[] wrong = new char[100];
        int flag = 0;
    
        char[] disp = new char[100];
        char ch;
        int chance = 10, i, j;
        for(i = 0; i < film.length; i++) {
            if(film[i] == ' ') disp[i] = ' ';
            else disp[i] = '-';
        }
        System.out.println(disp);
        int k = 0;
        while(chance > 0 ) {
            if(Arrays.equals(film, disp)) break;
            Scanner s = new Scanner(System.in);
            ch = s.next().charAt(0);
            for(i = 0; i < k; i++) {
                if(ch == wrong[i]) {
                    System.out.println("Already tried..!!");
                    break;
                }
            }
            wrong[k++] = ch;
            for(i = 0; i < film.length; i++) {
                if(ch == film[i]) {
                    disp[i] = film[i];
                    flag = 1;
                }
            }
    
            if(flag == 0) {
                chance--;
                System.out.println("Oops..!\nChance(s) Left: "+chance);
            }
            System.out.println(disp);
            
         flag = 0;
        }
        if(Arrays.equals(film, disp)) {
            System.out.println("Periya aal tha..!");
        }
        else {
            System.out.println("Better Luck Next Time..!!");
            System.out.println(film);
        }
    }
}