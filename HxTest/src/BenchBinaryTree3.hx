package ;

typedef Node = { left:Node, right:Node, item:Int };

enum Tree
{
	None;
	Node(left:Tree, right:Tree, item:Int);
}

/**
 * ...
 * @author Yasuo
 */
class BenchBinaryTree3
{

	public function new() 
	{
		
	}

	function itemCheck(node:Tree) : Int
	{
		return switch(node)
		{
			case Node(None,righht,item): item;
			case Node(left, right, item) : item + itemCheck(left) - itemCheck(right);
			default: 0;
		}
	}
	
	function bottomUpTree(item:Int,depth:Int) : Tree {
	   if (depth>0){
		  return Node(
			 bottomUpTree(2*item-1, depth-1),
			 bottomUpTree(2*item, depth-1),
			 item
		  );
	   }
	   else {
		  return Node(None,None,item);
	   }
	}

	public static function test()
	{
		var a = new BenchBinaryTree3();
		Bench.bench( "binary tree 3",1,function(){
			a.run(20);
		});
	}
	
	function run(n:Int)
	{
		var minDepth = 4;
		var maxDepth = Std.int( Math.max(minDepth + 2, n) );
		var stretchDepth = maxDepth + 1;

		var check = itemCheck( bottomUpTree(0,stretchDepth) );
		trace("stretch tree of depth " + stretchDepth + "\t check: " + check);

		var longLivedTree = bottomUpTree(0,maxDepth);
		for (depth in new IntIter(minDepth,maxDepth+1,2) ){
		   var iterations = 1 << (maxDepth - depth + minDepth);

		   check = 0;
		   for (i in 1...iterations+1){
			  check += itemCheck( bottomUpTree(i,depth) );
			  check += itemCheck( bottomUpTree(-i,depth) );
		   }
		   trace(iterations*2 + "\t trees of depth " + depth + "\t check: " + check);
		}

		trace("long lived tree of depth " + maxDepth + "\t check: " 
		   + itemCheck( longLivedTree ));
	}	
}