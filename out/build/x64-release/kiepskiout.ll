; ModuleID = 'my cool jit'
source_filename = "my cool jit"

%string = type { ptr, i32 }

@.str = private constant [6 x i8] c"Hello\00", align 1
@.str.1 = private constant [13 x i8] c"Hello World!\00", align 1
@stringFormat = private unnamed_addr constant [4 x i8] c"%s\0A\00", align 1

define i32 @main() {
entry:
  %x = alloca %string, align 8
  store %string { ptr @.str, i32 5 }, ptr %x, align 8
  %0 = call i32 (ptr, ...) @printf(ptr @stringFormat, ptr @.str.1)
  ret i32 0
}

declare i32 @printf(ptr, ...)
