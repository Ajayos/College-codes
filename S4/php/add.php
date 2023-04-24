<html>
<head>
    <title>ADD</title>
</head>
<body>
    <form action="<?php echo $_SERVER['PHP_SELF']; ?>" method="post">
        <label for="n1">Enter number 1 :</label>
        <input type="number" id="n1" name="n1">
        <br><br>
        <label for="n2">Enter number 2 :</label>
        <input type="number" id="n2" name="n2">
        <br><br>
        <label for="op">Select option :</label>
        <select id="op" name="op">
            <option disabled selected>Select option</option>
            <option value="+">+</option>
            <option value="-">-</option>
            <option value="*">*</option>
            <option value="/">/</option>
        </select>
        <br><br>
        <input type="submit" value="Submit">
    </form>
    <?php
    if ($_SERVER['REQUEST_METHOD'] === 'POST') {
        $num1 = intval($_POST['n1']);
        $num2 = intval($_POST['n2']);
        $op = $_POST['op'];
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
    }
    ?>
</body>
</html>
