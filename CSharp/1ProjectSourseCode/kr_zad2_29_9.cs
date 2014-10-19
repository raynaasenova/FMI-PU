using System;
//Стр. 29, зад. 9. Да се намери стойността на променливата y=max(x1,x2), където х1 и х2 са различни числа по формулата max(x1,x2)=0.5*(x1+x2+|x1-x2|).

namespace _1401682002_kr_zad2_29_9
{
    class _1401682002_kr_zad2_29_9
    {
        static void Main()
        {
            Console.WriteLine("Enter x1 =");
            double x1 = double.Parse(Console.ReadLine());
            Console.WriteLine("Enter x2 =");
            double x2 = double.Parse(Console.ReadLine());
            double y = 0.5 * (x1 + x2 + Math.Abs(x1 - x2));
            Console.WriteLine("The higher number is: {0}", y);
        }
    }
}
