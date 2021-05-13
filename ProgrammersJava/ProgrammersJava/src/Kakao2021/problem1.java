package Kakao2021;
/*
 *  private static Set<String> gemType = new HashSet<>();
    private static Queue<String> gemsToBuy = new LinkedList<>();
    private static Map<String, Integer> gemsToBuyCount = new HashMap<>();
 */
public class problem1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		String s="23four5six7";
		System.out.println(solution(s));

	}
	 public static int solution(String s) {
	        int answer = 0;
	        String ch = "";
	        String term="";
	        for (int i = 0; i < s.length(); i++) {
				ch+=s.substring(i,i+1);
				if(ch.equals("zero")) {
					term+="0";
					ch="";
				}else if(ch.equals("one")) {
					term+="1";
					ch="";
				}else if(ch.equals("two")) {
					term+="2";
					ch="";
				}else if(ch.equals("three")) {
					term+="3";
					ch="";
				}else if(ch.equals("four")) {
					term+="4";
					ch="";
				}else if(ch.equals("five")) {
					term+="5";
					ch="";
				}else if(ch.equals("six")) {
					term+="6";
					ch="";
				}else if(ch.equals("seven")) {
					term+="7";
					ch="";
				}else if(ch.equals("eight")) {
					term+="8";
					ch="";
				}else if(ch.equals("nine")) {
					term+="9";
					ch="";
				}
				else if(ch.equals("0")) {
					term+="0";
					ch="";
				}
				else if(ch.equals("1")) {
					term+="1";
					ch="";
				}
				else if(ch.equals("2")) {
					term+="2";
					ch="";
				}
				else if(ch.equals("3")) {
					term+="3";
					ch="";
				}
				else if(ch.equals("4")) {
					term+="4";
					ch="";
				}
				else if(ch.equals("5")) {
					term+="5";
					ch="";
				}
				else if(ch.equals("6")) {
					term+="6";
					ch="";
				}
				else if(ch.equals("7")) {
					term+="7";
					ch="";
				}else if(ch.equals("8")) {
					term+="8";
					ch="";
				}else if(ch.equals("9")) {
					term+="9";
					ch="";
				}
			}
	        answer=Integer.parseInt(term);
	        return answer;
	    }
}
