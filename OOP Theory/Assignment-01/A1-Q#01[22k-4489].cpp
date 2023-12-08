#include <iostream>
#include <string>

class Radiator
{
private:
  int id;
  static int next_id;
  bool is_on;

public:
  Radiator() : id(next_id), is_on(false)
  {
    next_id += 15;
  }

  int get_id() const
  {
    return id;
  }

  bool get_is_on() const
  {
    return is_on;
  }

  void set_is_on(bool value)
  {
    is_on = value;
  }
};

class Room
{
private:
  std::string name;
  int max_people;
  int num_radiators;
  int radiator_ids[2];

public:
  Room(const std::string &name) : name(name), max_people(12), num_radiators(0) {}

  const std::string &get_name() const
  {
    return name;
  }

  bool add_radiator(const Radiator &radiator)
  {
    if (num_radiators >= 2)
    {
      return false;
    }

    for (int i = 0; i < num_radiators; ++i)
    {
      if (radiator_ids[i] == radiator.get_id())
      {
        return false;
      }
    }

    radiator_ids[num_radiators++] = radiator.get_id();
    return true;
  }

  int get_num_radiators() const
  {
    return num_radiators;
  }

  const int *get_radiator_ids() const
  {
    return radiator_ids;
  }
};

int Radiator::next_id = 0;

int main()
{
  std::string student_id;
  std::cout << "Enter student ID: ";
  std::cin >> student_id;

  Radiator radiator1, radiator2, radiator3;

  Room room("Classroom");

  if (room.add_radiator(radiator1))
  {
    std::cout << "Radiator 1 added to " << room.get_name() << std::endl;
  }
  else
  {
    std::cout << "Failed to add radiator 1 to " << room.get_name() << std::endl;
  }

  if (room.add_radiator(radiator2))
  {
    std::cout << "Radiator 2 added to " << room.get_name() << std::endl;
  }
  else
  {
    std::cout << "Failed to add radiator 2 to " << room.get_name() << std::endl;
  }

  if (room.add_radiator(radiator3))
  {
    std::cout << "Radiator 3 added to " << room.get_name() << std::endl;
  }
  else
  {
    std::cout << "Failed to add radiator 3 to " << room.get_name() << std::endl;
  }

  std::cout << "Number of radiators in " << room.get_name() << ": " << room.get_num_radiators() << std::endl;

  const int *radiator_ids = room.get_radiator_ids();
  for (int i = 0; i < room.get_num_radiators(); ++i)
  {
    std::cout << "Radiator " << i + 1 << " ID: " << radiator_ids[i] << std::endl;
  }

  return 0;
}
