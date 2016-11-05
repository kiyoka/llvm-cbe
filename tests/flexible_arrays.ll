%MyStruct = type
{
   i32,
   i32,
   [0 x i32],
   i32
}

define i32 @getFirst(%MyStruct* nocapture readonly %s)
{
  %1 = getelementptr inbounds %MyStruct, %MyStruct* %s, i64 0, i32 2, i64 0
  %2 = load i32, i32* %1, align 4
  ret i32 %2
}

