using System;
namespace project
{
    class test
    {
        public static void main(string[,] matris)
        {
            int a = 1;
            int[,] b = new int[3, 3];
            Console.WriteLine("pls enter number: ");
            for(int i = 0; i <= 2; i++)
            {
                for(int j=0;j<=2;j++)
                {
                    b[i, j] = Convert.ToInt32(Console.ReadLine());
                    a++;
                }
            }
            int deter = Convert.ToInt32(b[0, 0] * ((b[1, 1] * b[2, 2]) - (b[1, 2] * b[2, 1] - b[1, 2])) - b[0, 1] * ((b[1, 0] * b[2, 2]) - (b[2, 0] * b[1, 2])) + b[0, 2] * ((b[1, 0] * b[2, 1]) - (b[2, 0] * b[1, 1]));
            Console.WriteLine("deter :", deter);
            Console.ReadKey();
        }
    }
}