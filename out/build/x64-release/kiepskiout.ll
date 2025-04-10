; ModuleID = 'my cool jit'
source_filename = "my cool jit"

%string = type { ptr, i32 }

@.str = private constant [7 x i8] c"Hello \00", align 1
@.str.1 = private constant [7 x i8] c"World!\00", align 1
@stringFormat = private unnamed_addr constant [4 x i8] c"%s\0A\00", align 1

define i32 @main() {
entry:
  %concat_buf = call ptr @malloc(i32 12)
  call void @memcpy(ptr %concat_buf, ptr @.str, i32 6, i1 false)
  %second_part_ptr = getelementptr inbounds i8, ptr %concat_buf, i32 6
  call void @memcpy(ptr %second_part_ptr, ptr @.str.1, i32 6, i1 false)
  %concat_data = insertvalue %string undef, ptr %concat_buf, 0
  %concat_len = insertvalue %string %concat_data, i32 12, 1
  %0 = extractvalue %string %concat_len, 0
  %1 = call i32 (ptr, ...) @printf(ptr @stringFormat, ptr %0)
  ret i32 0
}

declare i32 @printf(ptr, ...)

declare ptr @malloc(i32)

declare void @memcpy(ptr, ptr, i32, i1)
