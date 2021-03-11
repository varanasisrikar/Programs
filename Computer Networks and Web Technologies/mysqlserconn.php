<?php
$servername = "localhost";
$username = "root";
$password = "MySQL";

// Create connection
$conn = new mysqli($servername, $username, $password);

// Check connection
if ($conn->connect_error) {
  die("Connection failed: " . $conn->connect_error);
}
echo "Connected successfully";
$result = mysqli_query($conn, "drop table")
?>