#ifndef MYCLASS_CPP
#define MYCLASS_CPP

using namespace std;

class MyClass
{
  protected:
    string id;

  private:
    int _value;

  public:
    MyClass(string _id) : id(_id)
    {
    }

    string getId()
    {
        return id;
    }

    void setValue(int value)
    {
        _value = value;
    }

    int getValue()
    {
        return _value;
    }

    void increment(int increment)
    {
        _value += increment;
    }
};

#endif