package ;

typedef Node = { left:Node, right:Node, item:Int };

/**
 * ...
 * @author Yasuo
 */
class BenchBinaryTree2
{

	public function new() 
	{
		
	}

	function itemCheck(node:Node) : Int
	{
/*		
		return switch(node)
		{
			case { left:null, right:right,item: item}: i;
			case { left:left, right:right, item:item } : item + itemCheck(left) + itemCheck(right);
			default: 0;
		}
*/
		
		if ( node.left == null )
		{
			return node.item;
		}
		else {
			return node.item + itemCheck(node.left) + itemCheck(node.right);
		}

	}
	
	function bottomUpTree(item:Int,depth:Int) : Node {
	   if (depth>0){
		  return {
			 left:	bottomUpTree(2*item-1, depth-1),
			 right:	bottomUpTree(2*item, depth-1),
			 item:	item
		  };
	   }
	   else {
		  return {left:null,right:null,item:item};
	   }
	}

	public static function test()
	{
		var a = new BenchBinaryTree2();
		Bench.bench( "binary tree 2",1,function(){
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