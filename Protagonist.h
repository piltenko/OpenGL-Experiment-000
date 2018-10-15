#pragma once

class Protagonist
{
private:
	glm::vec3 coord;

public:
	Protagonist()
	{
		coord = glm::vec3(0.0f, 1.8f, 0.0f);
	}

	glm::vec3 GetCoord()
	{
		return coord;
	}
};