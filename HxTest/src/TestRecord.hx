package ;

/**
 * ...
 * @author Yasuo
 */

 
typedef Point = { x:Int, y:Int };
typedef Point3d = { x:Int, y:Int,z:Int };
 
class TestRecord
{

	public static function test()
	{
		var a = { x:10, y:20 };
		trace(a);
		
		var b:Point = a;
		trace(b);
		
		var c = { x:100, y:200, z:300 };
		var d:Point3d = c;
		trace(d);

		trace("1:");
		switch(b) {
			case { x:xx, y:yy} :
				trace(xx + "," + yy);
		}

		trace("2:");
		switch(d) {
			case { x:x, y:y,z:z} :
				trace(x + "," + y+","+z);
		}
	}
	
}