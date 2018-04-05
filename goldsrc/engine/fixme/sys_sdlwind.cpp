/// @file

class CGame
{
public:
	CGame();
	~CGame();
	
	void CreateGameWindow();
	
	void PlayStartupVideos();
	void PlayVideoAndWait(const char *name, bool);
};

CGame::CGame() = default;
CGame::~CGame() = default;

void CGame::CreateGameWindow()
{
};

void CGame::PlayStartupVideos()
{
};

void CGame::PlayVideoAndWait(const char *name, bool)
{
};