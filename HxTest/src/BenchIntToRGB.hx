package ;
import haxe.io.Bytes;

/**
 * ...
 * @author Yasuo
 */
class BenchIntToRGB
{

	public function new() 
	{
		
	}
	
	public static function test()
	{
		var src = new Array<Int>();
		for (i in 0...256 * 256)
		{
			src[i] = i;
		}
		Debug.assert("array size", src.length == 256 * 256);
		trace("* src length = " + src.length);

		Bench.bench( "IntToRGB", 1000, function() {
			var dst = Bytes.alloc( src.length * 4 );
			for (i in 0...src.length)
			{
				dst.set(i * 4 + 0, Std.int(i / 1000 )&0xff );
				dst.set(i * 4 + 1, Std.int(i / 100 )&0xff );
				dst.set(i * 4 + 2, Std.int(i / 10 )&0xff );
				dst.set(i * 4 + 3, if((i%2)==0) 255 else 0 );
			}
			var data = dst.getData();
			//trace(data.length);
			cpp.vm.Gc.compact();
		} );
	}
}