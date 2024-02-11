// Main class for screen
// By Alex Noyanov © 2024

class IndicatorScreen : public IIndication {
  private:
    bool _isEnabled;
    int _healthLevel; // 0-100%

  public:
    IndicatorScreen() {
      _isEnabled = false;
      _healthLevel = 100; // 100% By default
    }

    void init() {
      // Init the OLED screen
    }

    void setHealth(int) {
      // Set new health value to show
    }

    void showText(char* inputText) {
      // Show text value
    }
};
