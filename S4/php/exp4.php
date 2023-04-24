<html>
<head>
    <title>ADD</title>
</head>
<body>
    <form action="<?php echo $_SERVER['PHP_SELF']; ?>" method="post">
        <label for="op">Select option :</label>
        <select id="op" name="op">
            <option disabled selected>Select option</option>
            <option value="1">Indexed Array</option>
            <option value="2">Associative Array</option>
            <option value="3">Multi Array</option>
        </select>
        <br><br>
        <input type="submit" value="Submit">
    </form>
    <?php
    if ($_SERVER['REQUEST_METHOD'] === 'POST') {
        $op = $_POST['op'];
        $indexedArray = array(4,6,2,6,2,1);
	    $value = $indexedArray[5];
        switch($op)
			{
			case '1': {
                echo "value of index 2 = $value<br>";
            }
			break;
			case '2': {
                $assArray = array(
                    "name" => "Ajay o s",
                    "rollNo" => 13
                );
                echo "index 'name' = ".$assArray["name"]."<br>";
            };
			break;
			case '3': {
                $multiArray = array(
                    array("Ajay", "Akash"),
                    array(13, 19)
                );
                $value = $multiArray[0][1];
                echo "Multi array multiArray[0][1] = '$value'";
            };
			break;
			default: echo "Operator is Not Correct";
			}
    }
    ?>
</body>
</html>
