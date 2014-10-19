using System;
//Стр. 35, зад. 36. Запишете израз, който е истина при изпълнение на указаното условие и лъжа в противен случай:
//а) x принадлежи на интервала [0,1];

namespace _1401682002_kr_zad3_35_36a
{
    class _1401682002_kr_zad3_35_36a
    {
        static void Main()
        {
            Console.WriteLine("Enter x = ");
            double x = double.Parse(Console.ReadLine());
            if (x>=0 && x<=1)
            {
                Console.WriteLine("x = {0} prinadleji na intervala [0,1]", x);
            }
            else
            {
                Console.WriteLine("x = {0} ne prinadleji na intervala [0,1]", x);
            }
        }
    }
}
