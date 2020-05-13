import java.sql.*;
import java.io.*;
class HRDashboard implements EmployeeDetails
{
	HRDashboard(String filename)throws Exception
	{
		updateData(filename);
	}
	private void updateData(String filename)throws Exception
	{	
		String driverClass = "com.mysql.cj.jdbc.Driver";
		String path = "jdbc:mysql://localhost:3306/db";
		String username = "root";
		String password = "MySQL";
		Class.forName(driverClass);
		Connection con = DriverManager.getConnection(path,username,password);
		Statement stmt;
		
		File f = new File(filename);
		FileReader fr = new FileReader(f);
		BufferedReader br = new BufferedReader(fr);
		String d = br.readLine();
		while(d!=null)
		{
			String s[] = d.split(",");
			stmt = con.createStatement();
			;
			int eid = Integer.parseInt(s[0]);
			String ename = s[1] + " " + s[2];
			String gender = s[3];
			String dept = s[4] + "";
			String sal = s[5];
			System.out.println(sal);
			float salary = 0.00f;
			if (sal == null || sal.equals(null) || sal.equals("")) {
				salary = -1.00f;
			} else {
				sal = sal.replace("$", "");
				sal = sal.replace(",", "");
				salary = Float.parseFloat(sal);
			}
			String email = s[6];
			String sqlQuery = "insert into emp values(" + eid + ",'" + ename + "','" + gender + "','" + dept + "',"
					+ salary + ",'" + email + "');";
			int i = stmt.executeUpdate(sqlQuery);
			System.out.println(i);
			d = br.readLine();
		}
		br.close();
		con.close();
	}
		public void getHighestNumberOfFemales()
		{
			try
			{
				String driverClass = "com.mysql.cj.jdbc.Driver";
				String path = "jdbc:mysql://localhost:3306/db1";
				String username = "root";
				String password = "MySQL";
				Class.forName(driverClass);
				Connection con = DriverManager.getConnection(path,username,password);
				Statement stmt = con.createStatement();
				String F = "F";
				ResultSet rs = stmt.executeQuery("select dept,max(femalesNo) as deptWithHighNoOfFemales from (select dept,count(eid) as femalesNo from emp where gender='"+F+"'group by dept) as result");
				int count = 0;
				String dept=" ";
				while(rs.next())
				{
					dept=rs.getString(1);
					count+=rs.getInt(2);
				}
				System.out.println("Dept with high number of females");
				System.out.println(dept+" : "+count);
			}
			catch (Exception e) {
				System.out.println(e.getMessage());
			}
		}
	public void getHighestPaidEmployee() throws Exception
	{
		String driverClass="com.mysql.cj.jdbc.Driver";
		String path = "jdbc:mysql://localhost:3306/db";
		//Please specify your own server details
		String username  ="root";
		String password = "MySQL";
		Class.forName(driverClass);
		Connection con = DriverManager.getConnection(path,username,password);
		Statement stmt = con.createStatement();
		//execute query should be used for SELECT statements
		//System.out.println("max salary");
		ResultSet rs = stmt.executeQuery("select max(sal) from emp");
		//When result set is returned it always point before first row
		while(rs.next() != false)
		{
			System.out.println(rs.getInt(1));
			//System.out.println(rs.getString(2));
		}
	}
	public static void main(String[] args) throws Exception
	{
		HRDashboard hrd = new HRDashboard("Emp.csv");
		hrd.getHighestNumberOfFemales();
	}
}
