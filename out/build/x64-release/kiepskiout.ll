; ModuleID = 'my cool jit'
source_filename = "my cool jit"

@doubleFormat = private unnamed_addr constant [4 x i8] c"%f\0A\00", align 1

define i32 @main() {
entry:
  %x = alloca float, align 4
  store double 1.000000e+40, ptr %x, align 8
  %y = alloca double, align 8
  store double 1.000000e+40, ptr %y, align 8
  %x_val = load float, ptr %x, align 4
  %x_val_double = fpext float %x_val to double
  %0 = call i32 (ptr, ...) @printf(ptr @doubleFormat, double %x_val_double)
  %y_val = load double, ptr %y, align 8
  %1 = call i32 (ptr, ...) @printf(ptr @doubleFormat, double %y_val)
  ret i32 0
}

declare i32 @printf(ptr, ...)
