using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication2
{
    public class DeilTask
    {
        private IProcess _iprocess;

        public DeilTask(IProcess iprocess)
        {
            _iprocess = iprocess;
        }
      
        public void Run()
        {
            for (int i = 0; i < 100; i++)
            {
                System.Threading.Thread.Sleep(100);
                onProcess(Convert.ToSingle(i));
            }
        }
        protected virtual void onProcess(float value)
        {
            if (_iprocess != null)
            {
                _iprocess.DoProcess(value);
            }
        }
    }
}
