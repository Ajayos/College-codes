<html>
<head>
    <title>Select Loop</title>
</head>
<body>
    <form action="<?php echo $_SERVER['PHP_SELF']; ?>" method="post">
        <label for="n">Enter Base Number:</label>
        <input type="number" id="n" name="n">
        <br><br>
        <label for="l">Enter The N:</label>
        <input type="number" id="l" name="l">
        <br><br>
        <label for="loop">Select a loop:</label>
        <select id="loop" name="loop">
            <option value="for">For</option>
            <option value="while">While</option>
            <option value="doWhile">Do...While</option>
        </select>
        <br><br>
        <input type="submit" value="Submit">
    </form>
    <?php
    if ($_SERVER['REQUEST_METHOD'] === 'POST') {
        $n = intval($_POST['n']);
        $l = intval($_POST['l']);
        $loop = $_POST['loop'];
        switch ($loop) { // $loop == Casename
            case 'for':
                echo "<p>Using for loop:</p><br>The multiplication tabe <br><br>";
                for ($i = 1; $i <= $l; $i++) {
                    $ev = $n * $i;
                    echo "$n * $i =  $ev <br>";
                }
                break;
            case 'while':
                echo "<p>Using while loop:</p><br>The multiplication tabe <br><br>";
                $i = 1;
                while ($i <= $l) {
                    $ev = $n * $i;
                    echo "$n * $i =  $ev <br>";
                    $i++;
                }
                break;
            case 'doWhile':
                echo "<p>Using do...while loop:</p><br>The multiplication tabe <br><br>";
                $i = 1;
                do {
                    $ev = $n * $i;
                    echo "$n * $i =  $ev <br>";
                    $i++;
                } while ($i <= $l);
                break;
        }
    }
    ?>
</body>
</html>
