import java.io.*;
import java.sql.*;

class HRDashboard {
	public HRDashboard(String fileName) throws Exception {
		updateData(fileName);
	}

	private void updateData(String fileName) throws Exception {
		String driverClass = "com.mysql.cj.jdbc.Driver";
		String path = "jdbc:mysql://localhost:3306/db";
		String username = "root";
		String password = "MySQL";
		Class.forName(driverClass);

		Connection con = DriverManager.getConnection(path, username, password);

		File f = new File(fileName);
		FileReader fr = new FileReader(f);
		BufferedReader br = new BufferedReader(fr);
		String d = br.readLine();
		while (d != null) {
			String empDetails[] = d.split(",");
			Statement stmt = con.createStatement();
			int eid = Integer.parseInt(empDetails[0]);
			String eName = empDetails[1] + " " + empDetails[2];
			String gender = empDetails[3];
			String dept = empDetails[4] + "";
			String saly = empDetails[5];
			float sal = 0.0f;
			if (saly == null || saly.equals("")) {
				sal = -1.00f;
			} else {
				System.out.println(eName + " " + empDetails[5]);
				saly = empDetails[5].replace("$", "");
				System.out.println(saly.substring(0));
				sal = Float.valueOf(saly.substring(0).trim());
			}
			String email = empDetails[7];

			String sqlQuery = "insert into emp values(" + eid + ",'" + eName + "','" + gender + "','" + dept + "',"
					+ sal + ")";
			System.out.println(sqlQuery);
			int i = stmt.executeUpdate(sqlQuery);
			System.out.println(i);
			d = br.readLine();
		}
		br.close();
	}

	public void getHigherNumberOfFemales() throws Exception {
		String driverClass = "com.mysql.cj.jdbc.Driver";
		String path = "jdbc:mysql://localhost:3306/cse";
		String username = "root";
		String password = "MySQL";
		Class.forName(driverClass);
		Connection con = DriverManager.getConnection(path, username, password);
		Statement stmt = con.createStatement();
		ResultSet rs = stmt.executeQuery("select count(*),dept from emp where gender='F' group by dept");
		while (rs.next() != false) {
			System.out.println(rs.getInt(1));
			System.out.println(rs.getString(2));
		}
	}

	public void getHighestPaidEmployee() throws Exception {
		String driverClass = "com.mysql.cj.jdbc.Driver";
		String path = "jdbc:mysql://localhost:3306/cse";
		String username = "root";
		String password = "MySQL";
		Class.forName(driverClass);
		Connection con = DriverManager.getConnection(path, username, password);
		Statement stmt = con.createStatement();
		ResultSet rs = stmt.executeQuery("select max(sal) from emp");
		while (rs.next() != false) {
			System.out.println(rs.getInt(1));
		}
	}

	public static void main(String[] args) throws Exception {
		HRDashboard hrd = new HRDashboard("Emp.csv");
		hrd.getHigherNumberOfFemales();
		hrd.getHighestPaidEmployee();
	}
}
