using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication2
{
    class AppUser : IProcess
    {
        public void StartWork()
        {
            DeilTask task = new DeilTask(this);
            task.Run();
        }
        public void DoProcess(float value)
        {
            Console.WriteLine(value);
        }
    }
}
