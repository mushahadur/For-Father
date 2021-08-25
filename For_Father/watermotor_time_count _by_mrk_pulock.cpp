#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p_hour,p_minute,p_second,hour,minute,second,t,temp,temp2,sum;
    int ph,pm,ps;
    int hpulock,mpulock,spulock,mrk;
    float taka,taka1,result=0,mtk,tk;
    char time[3],p_time[3];


    cout<<"Please Enter the item : ";
    scanf("%d",&t);
    cout<<"Please Enter the taka rate of per hour (t/h) : ";
    cin>>tk;
    mtk = tk/3600;
    int k=1;
    cout <<endl<<"Enter Your Time Format ...   :"<<endl;
    cout <<endl<<"1. Pre Time      HH:MM:SS AM/PM"<<endl;
    cout <<"2. Current Time  HH:MM:SS AM/PM"<<endl<<endl;
    while(t--)
    {

        sum=0;
        //cout <<"Time Formet HH:MM:SS AM/PM       :";
        scanf("%d:%d:%d",&p_hour,&p_minute,&p_second);
        cin>>p_time;
        //cout <<"Current Time HH:MM:SS AM/PM   :";
        scanf("%d:%d:%d",&hour,&minute,&second);
        cin>>time;
        string pt = p_time;
        string t1=time;
        char am[3] = {'A','M'};
        char apm[3] = {'P','M'};
        string ami = am;
        string pmi = apm;

        if(pt == t1)
        {
            temp = ((3600*hour)+(60*minute)+second)-((3600*p_hour)+(60*p_minute)+p_second);
            ph = temp/3600;
            temp = temp%3600;
            pm = temp/60;
            temp = temp%60;
            ps=temp;
            temp2 = ((3600*ph)+(60*pm)+ps);

            hpulock = temp2/3600;
            mrk = temp2%3600;
            mpulock = mrk/60;
            spulock = mrk%60;
            //printf("Item:%d Time => %d:%d:%d\n",k,hpulock,mpulock,spulock);
            taka = temp2*mtk;
            //printf("%.2f\n",taka);
            k++;
        }
        else if(pt==ami && t1==pmi)
        {
            temp = (43200+((3600*hour)+(60*minute)+second))-((3600*p_hour)+(60*p_minute)+p_second);
            ph = temp/3600;
            temp = temp%3600;
            pm = temp/60;
            temp = temp%60;
            ps=temp;
            temp2 = ((3600*ph)+(60*pm)+ps);
            hpulock = temp2/3600;
            mrk = temp2%3600;
            mpulock = mrk/60;
            spulock = mrk%60;
            //printf("Item No:%d Time => %d:%d:%d\n",k,hpulock,mpulock,spulock);
            taka = temp2*mtk;
            //printf("%.2f\n",taka);
            k++;
        }
        else
        {
            temp = (43200-((3600*p_hour)+(60*p_minute)+p_second))+((3600*hour)+(60*minute)+second);
            ph = temp/3600;
            temp = temp%3600;
            pm = temp/60;
            temp = temp%60;
            ps=temp;
            temp2 = ((3600*ph)+(60*pm)+ps);
            hpulock = temp2/3600;
            mrk = temp2%3600;
            mpulock = mrk/60;
            spulock = mrk%60;
            //printf("Item:%d Time => %d:%d:%d\n",k,hpulock,mpulock,spulock);
            taka = temp2*mtk;
            //printf("%.2f\n",taka);
            k++;
        }
        result = result+taka;
        cout<<endl;
    }
    printf("Total taka : %.2f\n",result);

    return 0;
}

