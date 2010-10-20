cd make \
&& make \
&& for ((i = 1;i<=9;i++)); \
do \
  ./$i_unittest; \
done 

