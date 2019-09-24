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
            float bigdivisible = 0;
            for (float i = 2; i <= 600851475143; i++)
            {
                if (600851475143 % i == 0)
                    bigdivisible = i;
            }
            textBox1.Text = "divisible:" + bigdivisible.ToString();
        }
        }
    }

