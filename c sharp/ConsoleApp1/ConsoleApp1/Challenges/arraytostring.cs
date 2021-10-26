using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1.Challenges
{
    public class arraytostring
    {
        public static string[] ParseArray (object[] arr)
	    {
            string[] array = Array.ConvertAll(arr, s => s.ToString());

            //string[] array = {"1","2","34","asdf"};
           return array;
	    }

    }
}
