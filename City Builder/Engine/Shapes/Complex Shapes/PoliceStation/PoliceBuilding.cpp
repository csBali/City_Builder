#include "PoliceBuilding.h"


PoliceBuilding::PoliceBuilding()
{
	shape_transform.push_back(glm::translate(glm::vec3(0, 0.5, 0)) * glm::scale(glm::vec3(1)));
}

void PoliceBuilding::CreateBuffers()
{
	std::vector<Vertex> vertices;
	std::vector<GLuint> indices;

	CubeLayout cube_layout = CubeLayout::GenerateBasicCubeLayout();

	Shape::ConcatenateIndices(indices, Cube::GenerateIndices(cube_layout, (GLuint)vertices.size()));
	Shape::ConcatenateVertices(vertices, Cube::GenerateVertices(cube_layout));

	AttachToGPU(vertices, indices);
}