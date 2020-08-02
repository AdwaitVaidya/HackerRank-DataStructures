package com;

import java.io.*;
import java.util.StringTokenizer;

public class Main {

    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() throws FileNotFoundException {
            br = new BufferedReader(new
                    InputStreamReader(System.in));
            /*br = new BufferedReader(new
                    FileReader("Input.txt"));*/

        }

        String next()
        {
            while (st == null || !st.hasMoreElements())
            {
                try
                {
                    st = new StringTokenizer(br.readLine());
                }
                catch (IOException  e)
                {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt()
        {
            return Integer.parseInt(next());
        }

        long nextLong()
        {
            return Long.parseLong(next());
        }

        double nextDouble()
        {
            return Double.parseDouble(next());
        }

        String nextLine()
        {
            String str = "";
            try
            {
                str = br.readLine();
            }
            catch (IOException e)
            {
                e.printStackTrace();
            }
            return str;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        FastReader input = new FastReader();

        int[] array = new int[input.nextInt()];
        int operations = input.nextInt();
        for(int operation  = 0 ; operation < operations ; operation++ ){
            int start = input.nextInt() - 1;
            int end = input.nextInt() - 1;
            int additive = input.nextInt();
            for (int i = start ; i <= end ; i++ ){
                array[i] += additive;
            }
        }
        int maximum = findMaximum(array);
        System.out.println(maximum);
    }

    private static int findMaximum(int[] array) {
        int max = array[0];
        for (int i = 0 ; i < array.length ; i++ ){
            if (array[i] > max) max = array[i];
        }
        return max;
    }
}
