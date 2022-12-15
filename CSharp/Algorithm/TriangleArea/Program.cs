namespace TriangleArea
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double a, h, area;
            Console.Write("Kenar uzunluğu giriniz (cm) : ");
            a = Convert.ToDouble(Console.ReadLine());
            Console.Write("Yüksekliği giriniz (cm) : ");
            h=Convert.ToDouble(Console.ReadLine());
            area = a * h / 2;
            Console.WriteLine("Üçgenin alanı (cm2) : {0}", area);
            Console.ReadLine();
        }
    }
}
