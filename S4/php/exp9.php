<html>
<head>
    <title>DB</title>
</head>
<body>
<?php
	$host="localhost";
	$user="root";
	$pass="";
	$dbname="s4ct";
	$conn = mysqli_connect($host,$user,$pass,$dbname);
	if(!$conn) {
		die("COULD NOT CONNECT !" . mysqli_connect_error());
	}
	echo "CONNECTED SUCCESSFULLY <br/> ";
	$sql = "CREATE table STUDENT(ID INT AUTO_INCREMENT,NAME VARCHAR(40),AGE INT(3),MARKS INT(4), PRIMARY KEY(ID));";
		if(mysqli_query($conn,$sql))
		{
		echo "TABLE STUDENT CREATED SUCCESSFULLY<br/>";
		}
		else
		{
		echo "CREATION FAILED" . mysqli_error($conn);
		}
		
	$sql1 = "INSERT INTO STUDENT(NAME,AGE,MARKS)
		VALUES('AKASH',20,100),
		('AKSHAY',20,90),
		('AJAY',20,60),
		('AKARSH',20,70),
		('IJAZ',20,80);";
		if(mysqli_query($conn,$sql1))
		{
		echo "RECORD INSERTED SUCCESSFULLY";
		}
		else
		{
		echo "INSERTION FAILED" . mysqli_error($conn);
		}
		mysqli_close($conn);
		
	?>
</body>
</html>
