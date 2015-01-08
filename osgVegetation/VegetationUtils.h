#pragma once
#include <osg/BoundingBox>
#include <osg/Referenced>
#include <osg/vec4>
#include <osg/vec3>
#include <osg/vec2>
#include <osg/Vec4ub>
#include <osg/Node>
#include <osg/LOD>
#include <osg/ref_ptr>
#include <osgUtil/IntersectionVisitor>
#include <osg/Texture2DArray>
#include <vector>

namespace osgVegetation
{
	struct BillboardData;
	class Utils
	{
	public:
		static double random(double min,double max) { return min + (max-min)*(double)rand()/(double)RAND_MAX; }
		static int random(int min,int max) { return min + (int)(((double)(max-min)*(double)rand()/(double)RAND_MAX) + 0.5f); }

		/**
			Helper function that load all layer textures into the returning Texture2DArray. 
			This function will also save texture index into the texture array for each layer (_TextureIndex) 
		*/
		static osg::ref_ptr<osg::Texture2DArray> loadTextureArray(BillboardData &data);
	};
}