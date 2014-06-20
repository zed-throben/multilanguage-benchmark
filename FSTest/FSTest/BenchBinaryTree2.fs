module BenchBinaryTree2

open System

type Tree =
    | None
    | Node of Tree * Tree * int    

let rec checkSum(node:Tree) =
    match node with
    | Node(left,None,item) -> item
    | Node(left,right,item) -> item + checkSum(left) - checkSum(right)

let rec mkTree(item, depth) =
    if depth = 0 then Node(None, None, item)
    else Node(mkTree (2*item - 1, depth-1), mkTree(2*item, depth-1), item)

let bottomUpTree (item, depth) = mkTree(item, depth - 1)

let minDepth = 4

let run(n:int) = 
    let maxDepth = Math.Max(minDepth + 2, n)
    let stretchDepth = maxDepth + 1
    let mutable check = checkSum( bottomUpTree(0, stretchDepth) )
    Console.WriteLine("stretch tree of depth {0}\t check: {1}", stretchDepth, check)
    let longLivedTree = bottomUpTree(0, maxDepth)
    for depth in minDepth .. 2 .. maxDepth do
         let iterations = 1 <<< ( maxDepth - depth + minDepth )
         check <- 0
         for i in 1 .. iterations do 
            check <- check + checkSum( bottomUpTree(i, depth) )
            check <- check + checkSum( bottomUpTree(-i, depth) )
         Console.WriteLine("{0}\t trees of depth {1}\t check: {2}",iterations * 2, depth, check)
    Console.WriteLine("long lived tree of depth {0}\t check: {1}",maxDepth, checkSum( longLivedTree ) )

let test()=
    run 20