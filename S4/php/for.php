<html>
<head>
    <title>Select Loop</title>
</head>
<body>
    <form action="<?php echo $_SERVER['PHP_SELF']; ?>" method="post">
        <label for="n">Enter a number:</label>
        <input type="number" id="n" name="n">
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
        $loop = $_POST['loop'];
        switch ($loop) {
            case 'for':
                echo "<p>Using a for loop:</p>";
                for ($i = 1; $i <= $n; $i++) {
                    echo $i . " ";
                }
                break;
            case 'while':
                echo "<p>Using a while loop:</p>";
                $i = 1;
                while ($i <= $n) {
                    echo $i . " ";
                    $i++;
                }
                break;
            case 'doWhile':
                echo "<p>Using a do...while loop:</p>";
                $i = 1;
                do {
                    echo $i . " ";
                    $i++;
                } while ($i <= $n);
                break;
        }
    }
    ?>
</body>
</html>
