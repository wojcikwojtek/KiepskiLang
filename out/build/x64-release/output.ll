; ModuleID = 'my cool jit'
source_filename = "my cool jit"

define i32 @main() {
entry:
  %x = alloca i32, align 4
  store i32 3, ptr %x, align 4
  %y = alloca i32, align 4
  store i32 5, ptr %y, align 4
  %x_val = load i32, ptr %x, align 4
  %y_val = load i32, ptr %y, align 4
  %addtmp = add i32 %x_val, %y_val
  ret i32 %addtmp
}
