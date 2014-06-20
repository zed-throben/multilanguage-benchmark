package ;

/**
 * ...
 * @author Yasuo
 */
class Debug
{

	public function new() 
	{
		
	}
	
	
	public static function assert(msg:String,a:Bool)
	{
		if (!a)
		{
			trace("assertion failed: " + msg);
		}
	}
}