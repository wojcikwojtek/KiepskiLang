; ModuleID = 'my cool jit'
source_filename = "my cool jit"

@.str = private constant [5 x i8] c"dupa\00", align 1
@stringFormat = private unnamed_addr constant [4 x i8] c"%s\0A\00", align 1

define i32 @main() {
entry:
  %i = alloca i32, align 4
  store i32 0, ptr %i, align 4
  br label %while_cond

while_cond:                                       ; preds = %while_body, %entry
  %i_val = load i32, ptr %i, align 4
  %lttmp = icmp slt i32 %i_val, 5
  br i1 %lttmp, label %while_body, label %while_end

while_body:                                       ; preds = %while_cond
  %0 = call i32 (ptr, ...) @printf(ptr @stringFormat, ptr @.str)
  %i_val1 = load i32, ptr %i, align 4
  %addtmp = add i32 %i_val1, 1
  store i32 %addtmp, ptr %i, align 4
  br label %while_cond

while_end:                                        ; preds = %while_cond
  ret i32 0
}

declare i32 @printf(ptr, ...)
