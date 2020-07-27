template<typename T>
struct Rect
{
public:
	T x, y, width, height;

	Rect(const T& X, const T& Y, const T& Width, const T& Height) : x(X), y(Y), width(Width), height(Height) {};

	
};

typedef Rect<int> RectI;
typedef Rect<float> RectF;
typedef Rect<unsigned int> RectU;