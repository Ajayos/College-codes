<html>
<head>
    <title>DB</title>
</head>
<body>
<?php
	$host="localhost";
	$user="root";
	$pass="";
	$conn = mysqli_connect($host,$user,$pass);
	if(!$conn) {
		die("COULD NOT CONNECT !" . mysqli_connect_error());
	}
	echo "CONNECTED SUCCESSFULLY <br/> ";
	$sql = "CREATE database s4ct";
		if(mysqli_query($conn,$sql))
		{
		echo "DATABASE CREATED SUCCESSFULLY";
		}
		else
		{
		echo "SORRY DATABASE CREATION FAILED" . mysqli_error($conn);;
		}
		
		mysqli_close($conn);
	?>
</body>
</html>
