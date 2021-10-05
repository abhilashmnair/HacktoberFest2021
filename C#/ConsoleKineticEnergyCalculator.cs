using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace KineticEnergy
{
    class Program
    {
        static void Main(string[] args)
        {
            double mass, velocity;

            Console.Write("mass: ");
            mass = double.Parse(Console.ReadLine());

            Console.Write("Velocity: ");
            velocity = double.Parse(Console.ReadLine());

            Console.WriteLine();

            Console.WriteLine("KineticEnergy = {0}\n To exit press Enter...", KE(mass: mass, velocity: velocity));
            Console.ReadLine();
        }

        public static double KE(double mass, double velocity)
        {
            double result = (mass * Math.Pow(velocity, 2)) / 2;
            return result;
        }
    }
}
