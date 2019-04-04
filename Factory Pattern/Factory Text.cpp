using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Text;
using System.Globalization;

namespace ornekler
{
   

    //Factory Pattern
     public abstract class Sinema //temel sınıf soyut sınıf olucak
    {
        private String isim;
        private int salonSayisi;//özellikleri

        public String getName() { return isim; }
        public void setName(String newName) { isim = newName; }

        public int getSaloon() { return salonSayisi; }
        public void setSaloon(int yeniSayi) { salonSayisi = yeniSayi; }

        public void hangiSinema()
        {
            Console.WriteLine(getName() + " sineması");
        }
        public void kacSalon()
        {
            Console.WriteLine(getName() + " sinemasında "+getSaloon()+ " salon var");
        }
        
    }

    public class cineMaximum : Sinema// Sinema soyut sınıfından cineMAximum türetiyoruz
    {
        public cineMaximum()
        {
            setName("CineMaximum/Dolphin");
            setSaloon(6);
        }
    }
    public class cineMarine : Sinema// Sinema soyut sınıfından cineMarine türetiyoruz
    {
        public cineMarine()
        {
            setName("cineMarine/Symbol");
            setSaloon(12);
        }
    }

    //





    static class Program
    {
     
        [STAThread]
        static void Main()
        {
            //Singleton krediKartı1 = Singleton.GetInstance();
            
            //Singleton krediKartı2 = Singleton.GetInstance();
            //krediKartı1.kartIsim = "İş Bankası";
            //Console.WriteLine(krediKartı2.kartIsim);


            Sinema sinema1 = new cineMaximum();// sinema1 ilk olarak cineMaximum olarak tanımlarnıyor
            sinema1.kacSalon();
            sinema1.hangiSinema();
            sinema1 = new cineMarine();// sinema1 cinemarine oldu
            sinema1.kacSalon();
            sinema1.hangiSinema();
            //Application.EnableVisualStyles();
            //Application.SetCompatibleTextRenderingDefault(false);
            //Application.Run(new Form1());
        }
    }
}