using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace CSTest
{
    class Program
    {
        delegate void f_void_void();

        static void Bench(string msg,int times,f_void_void f)
        {
            long start = System.Environment.TickCount;
            for(int i=0;i<times;i++)
            {
                f();
            }
            long end = System.Environment.TickCount;
            Console.WriteLine(msg+" " + (end-start)/1000.0);
        }
        
        static void Main(string[] args)
        {
            Bench( "binary tree",1,BenchBinaryTree.test );
        }
    }
}
