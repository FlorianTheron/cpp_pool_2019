#ifndef __IMININGLASER_HH__
# define __IMININGLASER_HH__

class IAsteroid;

class IMiningLaser
{
    public:
        virtual ~IMiningLaser() {}
        virtual void mine(IAsteroid *) = 0;
};

#endif
