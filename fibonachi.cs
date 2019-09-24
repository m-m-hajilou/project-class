using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;                  
namespace fibonachi
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            int counters=0, sumer =0,B=0 ;
            for (int i = 2; i <= 4000000; i++)
            {                                                                
                if (((i - 1) + (i - 2))%2==1) {
                    counters += 1;
                    sumer += ((i - 1) + (i - 2));
                }                                                            
            }
            textBox1.Text = "COUNT:" + counters.ToString() + " SUM:" + sumer;
        }
    }
}
