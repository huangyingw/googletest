cd make \
&& make 2>../error.cc \
&& for ((i = 1;i<=9;i++)); \
do \
  ./$i_unittest 2>>../error.cc; \
done 

