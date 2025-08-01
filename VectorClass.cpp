#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

template <typename T>

class Vector
{
  size_t vsize;
  size_t vcapacity;
  T *data;

public:
  size_t Size()
  {
    return vsize;
  }

  size_t Capactiy()
  {
    return vcapacity;
  }

  Vector()
  {
    vsize = 0;
    vcapacity = 0;
    data = nullptr;
  }

  Vector(size_t new_size)
  {
    this->vsize = new_size;
    this->vcapacity = new_size;
    data = new T[new_size];
  }

  void resize(size_t newcapacity)
  {
    T *new_data = new T[newcapacity];
    for (size_t i = 0; i < vsize; i++)
    {
      new_data[i] = data[i];
    }

    delete[] data;
    data = new_data;
    vcapacity = newcapacity;
  }

  void push_back(const T &value)
  {
    if (vsize == vcapacity)
    {
      resize(vcapacity == 0 ? 1 : vcapacity * 2);
    }

    data[vsize++] = value;
  }

  void pop_back()
  {
    if (vsize > 0)
    {
      --vsize;
    }
  }

  Vector(const Vector &other)
  {
    vsize = other.vsize;
    vcapacity = other.vcapacity;
    data = new T[vcapacity];
    for (size_t i = 0; i < vsize; ++i)
    {
      data[i] = other.data[i];
    }
  }

  Vector &operator=(const Vector &other)
  {
    if (*this != &other)
    {
      delete[] data;
      vsize = other.vsize;
      vcapacity = other.vcapacity;
      data = new T[vcapacity];
      for (size_t i = 0; i < vsize; ++i)
      {
        data[i] = other.data[i];
      }
    }

    return *this;
  }

  ~Vector()
  {
    delete[] data;
  }
};

int main()
{
  Vector<int> v(5);
}