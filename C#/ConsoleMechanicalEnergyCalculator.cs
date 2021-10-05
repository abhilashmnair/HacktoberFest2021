using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MechanicalEnergy
{
    class Program
    {
        static void Main(string[] args)
        {
            double mass, velocity, height, gravity;

            Console.Write("Mass: ");
            mass = double.Parse(Console.ReadLine());

            Console.Write("Velocity: ");
            velocity = double.Parse(Console.ReadLine());

            Console.WriteLine();

            Console.Write("Height: ");
            height = double.Parse(Console.ReadLine());

            Console.Write("Gravity Acceleration: ");
            gravity = double.Parse(Console.ReadLine());

            Console.WriteLine();

            Console.WriteLine("Mechanical Energy = {0}", EC(mass: mass, velocity: velocity, height: height, gravity: gravity));
            Console.ReadLine();
        }

        public static double ME(double mass, double velocity, double height, double gravity)
        {
            double result = (mass * gravity * height) + ((mass * Math.Pow(velocity, 2)) / 2);
            return result;
        }
    }
}
