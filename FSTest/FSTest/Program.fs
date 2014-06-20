// F# の詳細については、http://fsharp.net を参照してください
// 詳細については、'F# チュートリアル' プロジェクトを参照してください。

open System

let bench(msg:string,times:int,f:unit->unit) =
    let starttick = System.Environment.TickCount

    for i in 1..times do
        f()

    let endtick = System.Environment.TickCount
    let sec = (float (endtick - starttick)) / 1000.0
    Console.WriteLine( Printf.sprintf "%s %f" msg sec )

[<EntryPoint>]
let main argv = 
    bench("binary tree 1",1,BenchBinaryTree.test)
(*
    bench("binary tree 2",1,BenchBinaryTree2.test)
    bench("string bench 1",100,BenchString.test1)
    bench("string bench 2",100,BenchString.test2)
*)
    0 // 整数の終了コードを返します
