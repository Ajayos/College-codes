<html>
	<head>
		<title>Exp5</title>
	</head>
	<body>
	<?php

	$capitals = array(
		"INDIA" => "NEW DELHI",
		"CANADA" => "OTTAWA",
		"PERU" => "LIMA",
		"BANGLADESH" => "DHAKAL",
		"AFGANISTHAN" => "KABUL"
	);
	ksort($capitals, SORT_STRING);
	foreach($capitals as $x => $y){
		echo "country : $x  	,	capital: $y<hr>";
	}
	?>
	</body>
</html>

