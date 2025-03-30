; ModuleID = 'my cool jit'
source_filename = "my cool jit"

@intFormat = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@doubleFormat = private unnamed_addr constant [4 x i8] c"%f\0A\00", align 1

define i32 @main() {
entry:
  %x = alloca i32, align 4
  store i32 5, ptr %x, align 4
  %x_val = load i32, ptr %x, align 4
  %0 = call i32 (ptr, ...) @printf(ptr @intFormat, i32 %x_val)
  %y = alloca float, align 4
  store float 1.000000e+01, ptr %y, align 4
  %y_val = load float, ptr %y, align 4
  %y_val_double = fpext float %y_val to double
  %1 = call i32 (ptr, ...) @printf(ptr @doubleFormat, double %y_val_double)
  ret i32 0
}

declare i32 @printf(ptr, ...)
