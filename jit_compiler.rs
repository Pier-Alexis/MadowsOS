
use std::process::Command;

fn compile_and_run(code: &str) -> String {
    let output = Command::new("rustc").args(&["-o", "temp_exec", "-"]).input(code.as_bytes()).output().expect("Failed to compile");
    if output.status.success() {
        let exec_output = Command::new("./temp_exec").output().expect("Failed to run");
        String::from_utf8(exec_output.stdout).unwrap_or_default()
    } else {
        String::from_utf8(output.stderr).unwrap_or_default()
    }
}
