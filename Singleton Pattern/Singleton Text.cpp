using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ornekler
{
    class Singleton
    {
        
        private static Singleton krediKarti; 
        // Nesnemizin daha önceden oluşturulmadığını anlayabilmemiz için statik instance özelliği tanımlıyoruz.

        //Sınıfımızın construct metodunu private yada protected tanımlıyoruz.



        private Singleton()
        {

        }
        // Dışarıdan sınıfımızı çağıracağımız metodumuz.
        public static Singleton GetInstance()
        {
            // eğer daha önce örnek oluşturulmamış ise sınıfın tek örneğini oluştur
            if (krediKarti == null)
                krediKarti = new Singleton();
            return krediKarti;
        }

        string kartAdı;
        public string kartIsim
        {
            get { return kartAdı; }
            set { kartAdı = value; }
        }
    }

    //Factory Pattern
    

    //





    static class Program
    {
     
        [STAThread]
        static void Main()
        {
            Singleton krediKartı1 = Singleton.GetInstance();
            
            Singleton krediKartı2 = Singleton.GetInstance();
            krediKartı1.kartIsim = "İş Bankası";
            Console.WriteLine(krediKartı2.kartIsim);

            
            //Application.EnableVisualStyles();
            //Application.SetCompatibleTextRenderingDefault(false);
            //Application.Run(new Form1());
        }
    }
}
