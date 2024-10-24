<!DOCTYPE html>
<html>
<body>

<?php
while (true) {
    $sec = date("s");
    echo $sec;

    if ($sec % 15 == 0) {
        echo "boom";

        $result = "Hello" / 4;
        echo $result;
        echo gettype($result);

    }

    sleep(1);
}
?>
</body>
</html>
