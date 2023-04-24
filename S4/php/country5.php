<html>
<body>
	<?php
		$country = array("PERU" => "LIMA" ,
				  "BANGLADESH" => "DHAKA" ,
				  "CANADA" => "OTTAWA" ,
				  "INDIA" => "NEW DELHI" ,
				  "AFGANISTHAN" => "KABUL");
		ksort($country, SORT_STRING);		
		foreach($country as $x => $y)
			{
			echo "COUNTRY : $x  	,	CAPITAL : $y <hr>";
			
			}
	?>

</body>
</html>
