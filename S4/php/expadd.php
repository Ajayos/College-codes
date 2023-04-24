<html>
<body>
	<?php
		$num1=20;
		$num2=10;
		$op='+';
		switch($op)
			{
			case '+': echo $num1 + $num2;
			break;
			case '-': echo $num1 - $num2;
			break;
			case '*': echo $num1 * $num2;
			break;
			case '/': echo $num1 / $num2;
			break;
			default: echo "Operator is Not Correct";
			}
	?>
</body>
</html>
