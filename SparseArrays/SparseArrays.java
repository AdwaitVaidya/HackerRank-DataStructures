package com.company;

import java.io.*;
import java.util.StringTokenizer;

public class Main {

    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() throws FileNotFoundException {
            br = new BufferedReader(new
                    InputStreamReader(System.in));

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

    public static void main(String[] args) throws IOException {

//        BufferedReader input = new BufferedReader(new FileReader("Input.txt"));

        FastReader fr = new FastReader();

        int n = fr.nextInt();
        String[] strings = new String[n];

        for (int i =0;i<strings.length;i++){
            strings[i] = fr.next();
        }

        int q = fr.nextInt();
        String[] queries = new String[q];

        for (int i =0;i<queries.length;i++){
            queries[i] = fr.next();
        }

        for (int i = 0; i < q;i++){
            int num =0;
            for (int j = 0;j < n;j++){
                if (queries[i].equals(strings[j])){
                    num++;
                }
            }
            System.out.println(num);
        }
    }
}
