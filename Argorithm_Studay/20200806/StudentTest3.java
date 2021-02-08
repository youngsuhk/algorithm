import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;

public class StudentTest3 {


	public static void main(String[] args) {


		ArrayList<Student> students = new ArrayList<Student>();
		students.add(new Student(3, 50));
		students.add( new Student(3, 80));
		students.add( new Student(4, 50));
		students.add(new Student(7, 70));
		students.add( new Student(2, 50));
		
		Collections.sort(students, new Comparator<Student>() {

			@Override
			public int compare(Student o1, Student o2) {
				// TODO Auto-generated method stub
				return o2.score - o1.score;
			}
		});



		System.out.println(students);


	}

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
