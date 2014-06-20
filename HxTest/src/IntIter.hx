package ;

/**
 * ...
 * @author Yasuo
 */
class IntIter {
    var min : Int;
    var max : Int;
	var step : Int;

    public function new( min : Int, max : Int,?step:Int ) {
        this.min = min;
        this.max = max;
		this.step = step;
    }

    public function hasNext() {
        return( min < max );
    }

    public function next() {
		var r = min;
		min += step;
        return r;
    }
}