import java.util.Arrays;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;

public class StudentTest2 {


	public static void main(String[] args) {

		
		Student[] students = new Student[5];
		students[0] = new Student(3, 50);
		students[1] = new Student(6, 60);
		students[2] = new Student(4, 50);
		students[3] = new Student(7, 70);
		students[4] = new Student(2, 50);
		
//		학생을 점수에 따른 내림차순으로 그런데 점수가 같으면 번호의 오름차순으로 보고싶다.(2차 sort)
		Arrays.sort(students,  new Comparator<Student>(){

			@Override
			public int compare(Student o1, Student o2) {
				if(o2.score != o1.score) {
					return o2.score - o1.score;
				}else {
					return new Integer(o1.no).compareTo(o2.no);
//					return o1.no - o2.no;
				}
				// TODO Auto-generated method stub
				
			}
			
		});
//		Arrays.sort(students,  new Comparator<Student>(){
//			
//			@Override
//			public int compare(Student o1, Student o2) {
//				// TODO Auto-generated method stub
//				return o2.score - o1.score;
//			}
//			
//		});
//		Arrays.sort(students, comparator);
		
		System.out.println(Arrays.toString(students));
		
//		Queue q = new LinkedList();

	}
//	static Comparator comparator = new Comparator<Student>(){
//
//		@Override
//		public int compare(Student o1, Student o2) {
//			// TODO Auto-generated method stub
//			return o2.score - o1.score;
//		}
//		
//	};	
//	static Comparator comparator = new Comparator<Student>(){
//		
//		@Override
//		public int compare(Student o1, Student o2) {
//			// TODO Auto-generated method stub
//			return o2.score - o1.score;
//		}
//		
//	};	
	
	
	
	
	
	
	static class Student implements Comparable<Student>{
		int no;
		int score;
		public Student(int no, int score) {
			super();
			this.no = no;
			this.score = score;
		}
		@Override
		public String toString() {
			return "[no=" + no + ", score=" + score + "]";
		}
		@Override
		public int compareTo(Student o) {
			
			return this.no <= o.no ? -1 : 1;
//			return this.no - o.no;
		}
		
	}

}
