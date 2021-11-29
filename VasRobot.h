#ifndef VASROBOT_H
#define VASROBOT_H
#include "Prohledavac.h"
#include "Bludiste.h"

class VasRobot : public Prohledavac
{
    public:
        VasRobot();
virtual bool start(Bludiste & map); //zapne robota
virtual void krok(BludisteOdkryte & map);
virtual bool stop(); //vypne robota
virtual void krok(Bludiste & map);

virtual std::string jmeno();
    protected:

    private:
};

#endif // VASROBOT_H
