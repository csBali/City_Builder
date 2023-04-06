#include "SchoolBuilding2.h"

SchoolBuilding2::SchoolBuilding2()
{
	shape_transform.push_back(glm::translate(glm::vec3(0, 0.5, 0)) * glm::scale(glm::vec3(1)));
}

void SchoolBuilding2::CreateBuffers()
{
	std::vector<Vertex> vertices;
	std::vector<GLuint> indices;

	CubeLayout cube_layout = CubeLayout::GenerateBasicCubeLayout();
	cube_layout.TextureDetails.FRONT_ID = 82;
	cube_layout.TextureDetails.BACK_ID = 82;
	cube_layout.TextureDetails.LEFT_ID = 82;
	cube_layout.TextureDetails.RIGHT_ID = 82;
	cube_layout.TextureDetails.TOP_ID = 83;
	cube_layout.TextureDetails.BOTTOM_ID = 83;

	Shape::ConcatenateIndices(indices, Cube::GenerateIndices(cube_layout, (GLuint)vertices.size()));
	Shape::ConcatenateVertices(vertices, Cube::GenerateVertices(cube_layout));

	AttachToGPU(vertices, indices);
}