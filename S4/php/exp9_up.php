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
	$sql2 = "UPDATE STUDENT SET AGE=21 WHERE ID=1";
		if(mysqli_query($conn,$sql2))
		{
		echo "UPDATED SUCCESSFULLY";
		}
		else
		{
		echo "UPDATION FAILED" . mysqli_error($conn);;
		}
		
		mysqli_close($conn);
	?>
</body>
</html>
