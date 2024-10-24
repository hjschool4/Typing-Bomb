use std::thread::sleep;
use std::time::Duration;
use chrono::{Local, Timelike};

fn main() {

    loop {
        let sec = Local::now().second(); 
    
        println!("{}", sec); 
        if (sec % 15 == 0) {
            println!("Bang!");
            "a" /4 
        } 
        sleep(Duration::from_secs(1));
    } 
}