import java.util.Arrays;
import java.util.Comparator;

public class CTest2 {

	public static void main(String[] args) {
		Data [] arr = new Data[5];
		arr[0] = new Data("홍길동1",30);
		arr[1] = new Data("김길동1",20);
		arr[2] = new Data("홍길동3",30);
		arr[3] = new Data("이길동1",10);
		arr[4] = new Data("박길동1",35);
		
		Arrays.sort(arr);

		for(Data d : arr) {
			System.out.println(d);
		}

	}
	static class Data implements Comparable<Data>{
		
		String name;
		int age;
		public Data(String name, int age) {
			this.name = name;
			this.age = age;
		}
		@Override
		public String toString() {
			return "Data [name=" + name + ", age=" + age + "]";
		}
		@Override
		public int compareTo(Data o) {
			// TODO Auto-generated method stub
			return this.name.compareTo(o.name);
//			return o.age - this.age;
		}
		
		
	}

}
