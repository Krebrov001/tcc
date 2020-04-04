#include "pm_std.h"
#include "lang_std.h"
extern int32_T ex_AYw_1C1hAo2dXKmju97mm0(const int32_T);extern int32_T
ex_jP6qyn5SvHsksFqu53Ywt1(uint32_T);int32_T ex_AYw_1C1hAo2dXKmju97mm0(const
int32_T seed){int32_T ex_KHc8r6Sy_YS3xj9YUAdZ3_;int32_T
ex_9XrVUbKOf0_gIQQThpSEr2;int32_T ex_kWrZl1g3VtfO9dr0CnEQr1;
ex_KHc8r6Sy_YS3xj9YUAdZ3_=seed%127773*16807;ex_9XrVUbKOf0_gIQQThpSEr2=seed/
127773*2836;if(ex_KHc8r6Sy_YS3xj9YUAdZ3_<ex_9XrVUbKOf0_gIQQThpSEr2){
ex_kWrZl1g3VtfO9dr0CnEQr1=2147483647-(ex_9XrVUbKOf0_gIQQThpSEr2-
ex_KHc8r6Sy_YS3xj9YUAdZ3_);}else{ex_kWrZl1g3VtfO9dr0CnEQr1=
ex_KHc8r6Sy_YS3xj9YUAdZ3_-ex_9XrVUbKOf0_gIQQThpSEr2;}return
ex_kWrZl1g3VtfO9dr0CnEQr1;}int32_T ex_jP6qyn5SvHsksFqu53Ywt1(uint32_T
ex_t5hS_ODn7Tv6mr3XDp9oE1){int32_T ex_2KXuAphrqc_TLcinUGD4E1=(int32_T)(
ex_t5hS_ODn7Tv6mr3XDp9oE1>>16U);int32_T t=(int32_T)(ex_t5hS_ODn7Tv6mr3XDp9oE1&
32768U);ex_t5hS_ODn7Tv6mr3XDp9oE1=((((ex_t5hS_ODn7Tv6mr3XDp9oE1-((uint32_T)
ex_2KXuAphrqc_TLcinUGD4E1<<16U))+(uint32_T)t)<<16U)+(uint32_T)t)+(uint32_T)
ex_2KXuAphrqc_TLcinUGD4E1;if(ex_t5hS_ODn7Tv6mr3XDp9oE1<1U){
ex_t5hS_ODn7Tv6mr3XDp9oE1=1144108930U;}else{if(ex_t5hS_ODn7Tv6mr3XDp9oE1>
2147483646U){ex_t5hS_ODn7Tv6mr3XDp9oE1=2147483646U;}}return(int32_T)
ex_t5hS_ODn7Tv6mr3XDp9oE1;}
