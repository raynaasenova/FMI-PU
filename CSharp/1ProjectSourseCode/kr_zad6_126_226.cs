using System;
//Стр. 126, зад. 226. Да се намери минималният и максималният елементи на даден едномерен масив.

namespace _1401682002_kr_zad6_126_226
{
    class _1401682002_kr_zad6_126_226
    {     
        static void Main()
        {
            Console.WriteLine("Please, enter size for array n: ");
            int n = int.Parse(Console.ReadLine());
            int[] array = new int[n]; //деклариране на масив, който ще съдържа цели числа и заделяне на необходимата за масива памет
            for (int i = 0; i < array.Length; i++)
                {
                    Console.WriteLine("Enter an integer number: ");
                    array[i] = int.Parse(Console.ReadLine());
                }
            
            SortArray(array);
            Console.WriteLine("Min = {0,2}", array[0]); //отпечатвам най-малкият елемент след сортирането - 0-вият елемент
            Console.WriteLine("Max = {0,2}", array[array.Length-1]); //отпечатвам най-големият елемент след сортирането - последният елемент
            }
        static void SortArray(int[] array)
        {
            for (int i = 0; i < array.Length - 1; i++) //сортировка на масива по метода на мехурчето
            {
                for (int j = i + 1; j < array.Length; j++)
                {
                    if (array[i] > array[j])
                    {
                        int tmp = array[i];
                        array[i] = array[j];
                        array[j] = tmp;
                    }
                }
            }
        }
    }
}

