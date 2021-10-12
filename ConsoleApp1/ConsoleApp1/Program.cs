using System;
using ConsoleApp1.Challenges;

namespace ConsoleApp1
{
    class Program : arraytostring
    {
        static void Main(string[] args)
        {
            object[] arr = {1, 2, "a", "b"};
            string[] str = ParseArray(arr);
            foreach (string item in str)
            {
                Console.WriteLine(item);
            }
        }

    }
}
