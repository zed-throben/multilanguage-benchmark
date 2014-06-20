package ;

/**
 * ...
 * @author Yasuo
 */
class BenchString
{

	public function new() 
	{
		
	}

	public static function test()
	{
		Bench.bench("string", 100, function() {
			var str = "";
			for (i in 0...10000)
			{
				str += Std.string(i) + ",";
			}
			var token = str.split(",");
			var sum = 0;
			for (t in token)
			{
				sum += Std.parseInt(t);
			}
			//trace(sum);
		} );
	}
	
	public static function test2()
	{
		Bench.bench("string", 100, function() {
			var str = new StringBuf();
			for (i in 0...10000)
			{
				str.add( Std.string(i) );
				//str.addChar();
				str.add(",");
			}
			var token = str.toString().split(",");
			var sum = 0;
			for (t in token)
			{
				sum += Std.parseInt(t);
			}
			//trace(sum);
		} );
	}
	
}