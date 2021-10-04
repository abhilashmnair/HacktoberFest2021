using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FibonacciDP
{
    class Program
    {
        static long FibonacciMaster(int n)
        {
            Dictionary<long, long> cache = new Dictionary<long, long>
            {
                [0] = 0,
                [1] = 1
            };

            if (cache.ContainsKey(n))
            {
                return cache[n];
            }

            cache.Add(n, FibonacciMaster(n - 1) + FibonacciMaster(n - 2));
            return cache[n];
        }

        static void Main(string[] args)
        {
            long fib = FibonacciMaster(6);
            Console.WriteLine(fib);

            Console.Read();
        }
    }
}
