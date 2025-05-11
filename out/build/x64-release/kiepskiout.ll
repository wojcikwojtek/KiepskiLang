; ModuleID = 'my cool jit'
source_filename = "my cool jit"

%myClass = type { i32, float }

@intFormat = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@doubleFormat = private unnamed_addr constant [4 x i8] c"%f\0A\00", align 1

define void @pokaz(ptr %this) {
entry:
  %fieldptr = getelementptr inbounds nuw %myClass, ptr %this, i32 0, i32 0
  %fieldval = load i32, ptr %fieldptr, align 4
  %0 = call i32 (ptr, ...) @printf(ptr @intFormat, i32 %fieldval)
  %fieldptr1 = getelementptr inbounds nuw %myClass, ptr %this, i32 0, i32 1
  %fieldval2 = load float, ptr %fieldptr1, align 4
  %fieldval2_double = fpext float %fieldval2 to double
  %1 = call i32 (ptr, ...) @printf(ptr @doubleFormat, double %fieldval2_double)
  ret void
}

declare i32 @printf(ptr, ...)

define i32 @main() {
entry:
  %x = alloca %myClass, align 8
  %fieldptr = getelementptr inbounds nuw %myClass, ptr %x, i32 0, i32 0
  store i32 10, ptr %fieldptr, align 4
  %fieldptr1 = getelementptr inbounds nuw %myClass, ptr %x, i32 0, i32 1
  store float 5.500000e+00, ptr %fieldptr1, align 4
  %fieldptr2 = getelementptr inbounds nuw %myClass, ptr %x, i32 0, i32 0
  %fieldval = load i32, ptr %fieldptr2, align 4
  %0 = call i32 (ptr, ...) @printf(ptr @intFormat, i32 %fieldval)
  ret i32 0
}
