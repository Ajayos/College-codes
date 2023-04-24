<html>
	<head>
		<title>Exp4</title>
	</head>
	<body>
	<?php
	$indexedArray = array(4,6,2,6,2,1);
	$value = $indexedArray[2];
	echo "value of index 2 = $value<br>";
	$assArray = array(
		"name" => "Akshay kumar",
		"rollNo" => 13
	);
	echo "index 'name' = ".$assArray["name"]."<br>";
	$multiArray = array(
		array("akshay", "arya"),
		array(13, 19)
	);
	$value = $multiArray[0][1];
	echo "Multi array multiArray[0][1] = '$value'";
	?>
	</body>
</html>

