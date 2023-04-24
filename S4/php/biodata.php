<html>
<head>
    <title>Bio Data</title>
</head>
<body>
    <center><h1>Bio Data</h1></center>
    <form action="<?php echo $_SERVER['PHP_SELF']; ?>" method="post">
    <h3> Name &nbsp;&nbsp;&nbsp;&nbsp;: <input type="text" name="name" /> </h3>
        <h3> Dob &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;: <input type="date" name="dob" /> </h3>

        <h3> Address : </h3>
        <h3>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<textarea name="address" cols="20" rows="5"></textarea> </h3>

        <h3>
          Gender : <input type="radio" name="gender" placeholder="Male" value="male" />Male
                   <input type="radio" name="gender" placeholder="Female" value="female" />Female
        </h3>

        <h3>
          Qualification :
          <input type="checkbox" value="sslc" name="quali[]" checked />SSLC
          <input type="checkbox" name="quali[]" value="plustwo" />Plus Two
          <input type="checkbox" name="quali[]" value="iti" />ITI
        </h3>

        <h3>
          District :
          <select name="district">
            <option disabled selected>Select District</option>
            <option value="ekm">Ernakulam</option>
            <option value="malapuram">Malapura</option>
            <option value="kochikode">Kozhikode</option>
          </select>
        </h3>

        <h3><input type="submit" /> <input type="reset" /></h3>
    </form>
    <?php
    if ($_SERVER['REQUEST_METHOD'] === 'POST') {
        $name = $_POST['name'];
        $dob = $_POST['dob'];
        $address = $_POST['address'];
        $gender = $_POST['gender'];
        $dist = $_POST['district'];
        echo "<h1>Details</h1>";
        echo "<h3>Name    : $name</h3>";
        echo "<h3>DoB     : $dob</h3>";
        echo "<h3>Address : $address</h3>";
        echo "<h3>gender  : $gender</h3>";
        echo "<h3>Qualificatio are</h3>";
        foreach ($_POST['quali'] as $option) {
            echo " $option ";
        }
    }
    ?>
</body>
</html>
