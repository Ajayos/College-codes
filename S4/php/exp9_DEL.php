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
	$sql3 = "DELETE FROM STUDENT WHERE ID=5";
		if(mysqli_query($conn,$sql3))
		{
		echo "DELETED SUCCESSFULLY";
		}
		else
		{
		echo "DELETION FAILED" . mysqli_error($conn);;
		}
		
		mysqli_close($conn);
	?>
</body>
</html>
