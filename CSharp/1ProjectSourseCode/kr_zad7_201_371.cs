using System;
//Стр. 201, зад. 371б. Елементите на масива са имена на студенти (име, презиме, фамилия). Да се състави ППГ за:
//б) извеждане на екрана на имената на всички студентки (имената им завършват на "а", които имат в имената си Иван (иван)). Например Иванка Анева Пелова, Ана Иванова Гогова, Ненка Монева Караиванова.

namespace _1401682002_kr_zad7_201_371
{
    class Program
    {
        static void Main()
        {
            Console.WriteLine("Please, enter size for array n: ");
            int n = int.Parse(Console.ReadLine());
            string[] names = new string[n]; //деклариране на масив, който ще съдържа имената на студентите и заделяне на необходимата за масива памет
            for (int i = 0; i < names.Length; i++)//Обхождане на масива
            {
                Console.WriteLine("Enter name, surname and family name of {0} student", i+1);
                names[i] = Console.ReadLine();
            }

            Console.WriteLine("The names containing \"Ivan\", \"ivan\" and symbol \"a\" of the end are: ");
            output(names);//Извиквам ППГ за извеждане на масив
            //Console.WriteLine("Etner");
        }
        static void output(string[] names)//ППГ за извеждане на данните от масива
            {         
                for (int i = 0; i < names.Length; i++)
                {
                    string list = names[i];
                    int index1 = list.IndexOf("a ");//името да завършва на буквата "а" и има разделител интервал със презимето
                    int index2 = list.IndexOf("a" + (char)13 + (char)10); //ако фамилията завършва на буквата "а" и следва Enter, който вписва в буфера два символа - "carriage return" код (ASCII 13) следван от "linefeed" код (ASCII 10).
                    int index3 = list.IndexOf("Ivan"); //имената да съдържат "Иван" и "иван".
                    int index4 = list.IndexOf("ivan");
                    if ((index1 >= 0 || index2 >= 0) && (index3 >= 0 || index4 >= 0)) //Ако резултатът е неотрицателна стойност, тогава това е позицията, на която е открит първият символ от подниза
                    {                    
                        Console.WriteLine(names[i]);
                    }
                }
            }
        }
    }



