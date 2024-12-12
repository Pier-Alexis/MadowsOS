
<?php
function list_files($dir) {
    return scandir($dir);
}

function create_file($path, $content) {
    file_put_contents($path, $content);
    return "File created!";
}
?>
