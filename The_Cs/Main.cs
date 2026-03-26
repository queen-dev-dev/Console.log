using System;
public class HelloWorld
{
    public void log (string message) {
        Console.WriteLine(message);
    }
    public static void Main(string[] args)
    {
        HelloWorld console = new HelloWorld();
        console.log("sigma");
    }
}
