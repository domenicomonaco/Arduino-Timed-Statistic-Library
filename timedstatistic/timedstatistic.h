template <class T>
class TimedStast{
  private:
    Statistic values;
    long int checkTime;
    long int Delay;
    long int millisTimeDivisor;
    String id;
    
  public:
    void setDelay(long int longDelay){
      Delay= longDelay;
    }
    
    void add(T value){}
    void reset(){}
    void printlnAll(String divider){}
    void loopTiimer(){
    }
  };
  