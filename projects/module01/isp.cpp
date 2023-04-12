// <<interface>>
struct ArithmeticCalculator { // abstract class --> interface
    virtual double add(double x, double y) = 0;
    virtual double sub(double x, double y) = 0;
    virtual double mul(double x, double y) = 0;
    virtual double div(double x, double y) = 0;
};

struct UnitCalculator { // abstract class --> interface
    virtual double kilometer2Mile(double km) = 0;
    virtual double newton2Kilogram(double newton) = 0;
};

class StandardCalculator : public ArithmeticCalculator,public UnitCalculator {
public:
    double add(double x, double y) override {
        return x+y;
    }

    double sub(double x, double y) override {
        return x-y;
    }

    double mul(double x, double y) override {
        return x*y;
    }

    double div(double x, double y) override {
        return x/y;
    }

};

int main() {

}