package ;
import sys.db.Object;

/**
 * ...
 * @author Yasuo
 */

 /* The Computer Language Benchmarks Game
   http://benchmarksgame.alioth.debian.org/
   contributed by Isaac Gouy */



class TreeNode
{
	var left:TreeNode;
	var right: TreeNode;
	var item:Int;
	
	public function new(left, right, item)
	{
		this.left = left;
		this.right = right;
		this.item = item;
	}

	public function itemCheck(){
	   if (this.left==null) return this.item;
	   else return this.item + this.left.itemCheck() - this.right.itemCheck();
	}
	
}
	
class BenchBinaryTree
{
	public function new() 
	{
		
	}


	function bottomUpTree(item:Int,depth:Int){
	   if (depth>0){
		  return new TreeNode(
			  bottomUpTree(2*item-1, depth-1)
			 ,bottomUpTree(2*item, depth-1)
			 ,item
		  );
	   }
	   else {
		  return new TreeNode(null,null,item);
	   }
	}

	public static function test()
	{
		var a = new BenchBinaryTree();
		Bench.bench( "binary tree",1,function(){
			a.run(20);
		});
	}
	
	function run(n:Int)
	{
		var minDepth = 4;
		var maxDepth = Std.int( Math.max(minDepth + 2, n) );
		var stretchDepth = maxDepth + 1;

		var check = bottomUpTree(0,stretchDepth).itemCheck();
		trace("stretch tree of depth " + stretchDepth + "\t check: " + check);

		var longLivedTree = bottomUpTree(0,maxDepth);
		for (depth in new IntIter(minDepth,maxDepth+1,2) ){
		   var iterations = 1 << (maxDepth - depth + minDepth);

		   check = 0;
		   for (i in 1...iterations+1){
			  check += bottomUpTree(i,depth).itemCheck();
			  check += bottomUpTree(-i,depth).itemCheck();
		   }
		   trace(iterations*2 + "\t trees of depth " + depth + "\t check: " + check);
		}

		trace("long lived tree of depth " + maxDepth + "\t check: " 
		   + longLivedTree.itemCheck());
	}
}