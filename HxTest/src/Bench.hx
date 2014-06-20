package ;

/**
 * ...
 * @author Yasuo
 */
class Bench
{

	public function new() 
	{
		
	}

	public static function seconds( f:Void->Void ) : Float
	{
		var start = Date.now();
		f();
		var end = Date.now();
		return (end.getTime() - start.getTime()) / DateTools.seconds( 1 );
	}
	
	public static function bench( msg:String,times:Int,f:Void->Void )
	{
		var sec = seconds(function() {
			for (i in 0...times )
			{
				f();
			}
		} );
		trace(msg + " " + sec);
	}	
}