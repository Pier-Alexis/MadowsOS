
<?php
$data = [
    ["id" => 1, "name" => "Task 1", "status" => "pending"],
    ["id" => 2, "name" => "Task 2", "status" => "completed"]
];

if ($_SERVER["REQUEST_METHOD"] === "GET") {
    echo json_encode($data);
} elseif ($_SERVER["REQUEST_METHOD"] === "POST") {
    $input = json_decode(file_get_contents("php://input"), true);
    $data[] = $input;
    echo json_encode($data);
}
?>
