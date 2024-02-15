
class Temperature { 
  double temp_k;

 public:
  Temperature(double value, char unit) {
    switch (unit) {
      case 'K':
        temp_k = value;
        break;
      case 'C':
        temp_k = value + 273.15;
        break;
      case 'F':
        temp_k = (value - 32) * (5.0 / 9.0) + 273.15;
        break;
      case 'R':
        temp_k = value * (5.0 / 9.0);
        break;
      default:
        throw std::out_of_range("Unexpected Unit");
    }
  }
  double AsCelsius() { return temp_k - 273.15; }
  double AsFahrenheit() { return (temp_k - 273.15) * (9.0 / 5.0) + 32; }
  double AsKelvin() { return temp_k; }
  double AsRankine() { return temp_k * (9.0 / 5.0); }
};