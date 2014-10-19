using System;
//Стр. 91, зад. 160a. Да се съставят функции за намиране на минимума и максимума на 2 числа x, y. С тяхна помощ да се намерят:
//а) минимумът и максимумът на произволен брой въведени от клавиатураа числа. За край на въвеждането - 0.
namespace _1401682002_kr_zad5_91_160a
{
    class _1401682002_kr_zad5_91_160a
    {
        static double max(double a, double b)
        {
            if (a > b)
            {
                return a;
            }
            else
            {
                return b;
            }
        }
        static double min(double a, double b)
        {
            if (a < b)
            {
                return a;
            }
            else
            {
                return b;
            }
        }
        static void Main()
        {
            Console.WriteLine("Please, enter the first number: ");
            double a = double.Parse(Console.ReadLine());
            double min1 = a;
            double max1 = a;
            double b;
            do
            {
                Console.WriteLine("Please, enter next number (0 for end):");
                b = double.Parse(Console.ReadLine());
                if (b != 0)
                {
                    min1 = min(min1, b);
                    max1 = max(max1, b);
                }

            } while (b != 0);
            Console.WriteLine("Maksimumut is: {0}", max1);
            Console.WriteLine("Minimumut is: {0}", min1);
        }
    }
}