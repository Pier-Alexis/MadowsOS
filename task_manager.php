
<?php
$tasks = json_decode(file_get_contents("tasks.json"), true);

if ($_SERVER["REQUEST_METHOD"] === "GET") {
    echo json_encode($tasks);
} elseif ($_SERVER["REQUEST_METHOD"] === "POST") {
    $input = json_decode(file_get_contents("php://input"), true);
    $tasks[] = $input;
    file_put_contents("tasks.json", json_encode($tasks));
    echo "Task added!";
}
?>
