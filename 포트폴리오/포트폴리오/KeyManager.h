#include <Windows.h>
#include "Utility.hpp"

class KeyManager: public singleton<KeyManager>
{
	friend class singleton<KeyManager>;
private:
	KeyManager();
	~KeyManager();
public:
	bool KeyUpAction(const int &key);
	bool KeyDownAction(const int &key);
private:
	bool keydown;
};

#define keydepot KeyManager::GetReference()