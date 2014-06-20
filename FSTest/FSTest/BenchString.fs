module BenchString

open System
open System.Text

let test1() =
    let mutable str = ""
    for i in 0..10000-1 do
        str <- str + i.ToString() + ","
    str <- str + "10000"

    let token = str.Split([|','|])
    let mutable sum = 0
    for t in token do
        sum <- sum + System.Int32.Parse(t)

let test2() =
    let strbld = new StringBuilder()
    for i in 0..10000-1 do
        strbld.Append( i.ToString() )
        strbld.Append(',')

    strbld.Append("10000")
    let str = strbld.ToString()

    let token = str.Split([|','|])
    let mutable sum = 0
    for t in token do
        sum <- sum + System.Int32.Parse(t)
