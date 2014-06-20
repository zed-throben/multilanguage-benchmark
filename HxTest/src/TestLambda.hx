package ;

/**
 * ...
 * @author Yasuo
 */
class TestLambda
{

	public static function test() 
	{
		map();
	}
	
	static function map()
	{
		// result is list object
		var a = Lambda.map([1, 2, 3], function(X) { return X * 2; }  );
		trace(a);
		
		// result is array
		var b = Lambda.array( Lambda.map([1, 2, 3], function(X) { return X * 2; }  ) );
		trace(b);
		
	}
	
	
	
}