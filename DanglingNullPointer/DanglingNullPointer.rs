fn main() {
    // Allocate memory for an integer on the heap using Box
    let mut ptr = Box::new(100);

    // Use the allocated memory
    println!("Value: {}", *ptr);

    // After this block, 'ptr' is automatically dropped, 
    // and the memory is freed safely, preventing dangling pointer issues.

    // Manually dropping ptr early (optional)
    std::mem::drop(ptr); // This explicitly frees the memory early

    // After dropping, 'ptr' cannot be used anymore, preventing dangling pointer access
    // Trying to use 'ptr' now would result in a compile-time error.
    println!("Value: {}", *ptr); // Uncommenting this line would cause a compile-time error
    // *ptr = 200; // Uncommenting this line would cause a compile-time error
}