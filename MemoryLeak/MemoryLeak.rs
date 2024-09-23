fn foo() {
    // Allocate memory for an integer on the heap using Box
    let _ptr = Box::new(100);

    // the memory get deallocated when '_ptr' goes out of scope
}

fn main () {

   loop {
       foo();
   }
}