using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Half_a_step_higher_than_c
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            clickNumber++;
            label1.Text = "" + clickNumber;
        }
        int clickNumber = 0;

        private void button2_Click(object sender, EventArgs e)
        {
            clickNumber--;
            label1.Text = "" + clickNumber;
        }
    }
}
