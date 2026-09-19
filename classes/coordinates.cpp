class Coordinates {
    private:
        int posX;
        int posY;
    public:
        Coordinates(int x, int y): posX(x), posY(y){}
        Coordinates(): Coordinates(10, 10){}
        int getPosX() const {
            return posX;
        }
        int getPosY() const {
            return posY;
        }
};