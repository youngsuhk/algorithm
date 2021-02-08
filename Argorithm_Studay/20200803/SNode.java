
public class SNode {
	String data;
	
	SNode link;

	
	public SNode(String data) {
		super();
		this.data = data;
	}


	public SNode(String data, SNode link) {
		this.data = data;
		this.link = link;
	}


	@Override
	public String toString() {
		return "SNode [data=" + data + ", link=" + link + "]";
	}
	
	
	
	
}
