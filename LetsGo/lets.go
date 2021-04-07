package main

import (
"fmt"
)

func main() {
    
    var pincode int
    fmt.Print("Enter your password : ")
    fmt.Scan(&pincode)

    if pincode == 964358233091465775 {
        fmt.Println("Success :)")
    } else {
        fmt.Println("Wrong, Try Again!")
    }
    
}