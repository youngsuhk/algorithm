import java.lang.reflect.Field;
import java.util.ArrayList;

//
// 연결리스트 활용

public class CheckSizeCapacity {

	public static void main( String[] args )
	        throws Exception
	{
	        ArrayList al = new ArrayList();
	        getCapacity( al );
	        al.add( "SSAFY" );
	        getCapacity( al );
	        al.clear();
	        getCapacity( al );
	        
	        for (int i=0; i <11; i++) {
	        	al.add(i);
	        }
	        getCapacity( al );
	        
	        al.clear();
	        getCapacity( al );
	        
	        al.trimToSize();
	        getCapacity( al );
	}

    static void getCapacity( ArrayList<?> l )
        throws Exception
    {
        Field dataField = ArrayList.class.getDeclaredField( "elementData" );
        dataField.setAccessible( true );
        System.out.format( "Size: %2d, Capacity: %2d%n", l.size(), ( (Object[]) dataField.get( l ) ).length );
	}

}
