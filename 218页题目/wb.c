

       int zuidagongyueshu(int num1,int num2)
       {
            /*
            ŷ������㷨��շת����
            int temp;
            do{
                temp=num1%num2;
                num1=num2;
                num2=temp;
            }while(temp!=0);
            return num1;
            */

            //ʹ�ö̳������㡣
            int chengji=1,temp;//�˻�
            do{
                temp=dancizuixiaogongyueshu(num1,num2);//���ζ̳�
                if(temp!=0)
                {
                    chengji*=temp;
                    num1/=temp;
                    num2/=temp;
                }
            }while(temp!=0);

            return chengji;

       }




       int zuixiaogongbeishu(int num1,int num2)
       {
        //ʹ�ö̳������㡣
            int chengji=1,temp;//�˻�
            do{
                temp=dancizuixiaogongyueshu(num1,num2);//���ζ̳�
                if(temp!=0)
                {
                    chengji*=temp;
                    num1/=temp;
                    num2/=temp;
                }
            }while(temp!=0);
            return chengji*num1*num2;
       }


        int dancizuixiaogongyueshu(int num1,int num2)
        {
            int i=2;
            for(;i<num1||i<num2;i++)
            {
                int temp1,temp2;
               temp1=num1%i;
               temp2=num2%i;
                if(temp1==0&&temp2==0)
                    {
                        return i;
                    }

            }
            return 0;
        }
