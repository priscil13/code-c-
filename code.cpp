# code-c-
using System;

class Golem
{
    public string Name { get; set; }
    public int Power { get; set; }

    public Golem(string name, int power)
    {
        Name = name;
        Power = power;
    }

    public void Display()
    {
        Console.WriteLine("Golem Name: " + Name);
        Console.WriteLine("Golem Power: " + Power);
    }
}

class Program
{
    static void Main(string[] args)
    {
        Golem myGolem = new Golem("Stone", 100);
        myGolem.Display();
        Console.ReadLine();
    }
}
