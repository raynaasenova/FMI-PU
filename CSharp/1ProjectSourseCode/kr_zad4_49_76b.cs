using System;
//Стр. 49, зад. 76б. Да се намери сумата Zn = 1 + 1/2^2 + 1/3^2 + … + 1/n^2 за произволно естествено n.
namespace _1401682002_kr_zad4_49_76b
{
    class _1401682002_kr_zad4_49_76b
    {
        static void Main()
        {
            //stepenuvam na 2-ra stepen kato umnojavam chhisloto samo po sebe si:
            Console.WriteLine("Enter integer n > 0 ");
            int n = int.Parse(Console.ReadLine());
            double Z = 0;
            for (int i = 1; i <= n; i++)
            {
                Z += 1.0 / (i * i);
            }
            Console.WriteLine("The sum is = {0}", Z);
        }
    }
}
