<!DOCTYPE html>
<html lang="en">
<head>
    <title>output</title>
</head>
<body>
    <center>
        <h1>Result</h1>
        <?php
        $name = $_POST['name'];
        $mark1 = $_POST['mark1'];

        $mark2 = $_POST['mark2'];

        $mark3 = $_POST['mark3'];

        $total = $mark1 + $mark2 + $mark3;
        $avg = $total / 150 *100; 
        echo "<h3>Name      :$name</h3>"; 
        if($avg > 90)
            echo "<h3>grade      :S</h3>";

        else if($avg > 80)
            echo "<h3>grade      :A</h3>";

        else if($avg > 70)
            echo "<h3>grade      :B</h3>";

        else if($avg > 60)
            echo "<h3>grade      :C</h3>";
    
        else if($avg > 50)
            echo "<h3>grade      :D</h3>";
        
        else
            echo "<h3>Status      :Failed</h3>";
        
        ?>
    </center>
</body>
</html>