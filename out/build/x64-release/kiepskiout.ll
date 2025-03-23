; ModuleID = 'my cool jit'
source_filename = "my cool jit"

@fmt = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@fmt.1 = private unnamed_addr constant [3 x i8] c"%d\00", align 1
@fmt.2 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

define i32 @main() {
entry:
  %x = alloca i32, align 4
  store i32 5, ptr %x, align 4
  %y = alloca i32, align 4
  store i32 10, ptr %y, align 4
  %x_val = load i32, ptr %x, align 4
  %y_val = load i32, ptr %y, align 4
  %multmp = mul i32 %y_val, 2
  %addtmp = add i32 %x_val, %multmp
  %0 = call i32 (ptr, ...) @printf(ptr @fmt, i32 %addtmp)
  %1 = call i32 (ptr, ...) @scanf(ptr @fmt.1, ptr %x)
  %x_val1 = load i32, ptr %x, align 4
  %2 = call i32 (ptr, ...) @printf(ptr @fmt.2, i32 %x_val1)
  ret i32 0
}

declare i32 @printf(ptr, ...)

declare i32 @scanf(ptr, ...)
