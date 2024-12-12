
<?php
$data = [
    "users" => [
        ["id" => 1, "name" => "Alice"],
        ["id" => 2, "name" => "Bob"]
    ]
];

$query = json_decode(file_get_contents("php://input"), true);
if ($query["query"] === "{ users { id name } }") {
    echo json_encode($data["users"]);
}
?>
