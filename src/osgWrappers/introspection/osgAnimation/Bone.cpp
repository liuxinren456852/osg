// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CopyOp>
#include <osg/Matrix>
#include <osg/Node>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/Quat>
#include <osg/Vec3>
#include <osgAnimation/Bone>
#include <osgAnimation/Channel>
#include <osgAnimation/Target>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(osg::ref_ptr< osgAnimation::Bone >, osgAnimation::Bone::PointerType)

TYPE_NAME_ALIAS(std::map< std::string COMMA  osgAnimation::Bone::PointerType >, osgAnimation::Bone::BoneMap)

TYPE_NAME_ALIAS(osg::Matrix, osgAnimation::Bone::MatrixType)

BEGIN_OBJECT_REFLECTOR(osgAnimation::Bone)
	I_DeclaringFile("osgAnimation/Bone");
	I_BaseType(osg::Transform);
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "clone an object of the same type as the node. ",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "return a clone of a node, with Object* return type. ",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "return true if this and obj are of the same kind of object. ",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the node's class type. ",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the node's library. ",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "Visitor Pattern : calls the apply method of a NodeVisitor with this node's type. ",
	          "");
	I_ConstructorWithDefaults2(IN, const osgAnimation::Bone &, b, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Bone__C5_Bone_R1__C5_osg_CopyOp_R1,
	                           "",
	                           "");
	I_ConstructorWithDefaults1(IN, const std::string &, name, "",
	                           Properties::NON_EXPLICIT,
	                           ____Bone__C5_std_string_R1,
	                           "",
	                           "");
	I_MethodWithDefaults1(void, setDefaultUpdateCallback, IN, const std::string &, name, "",
	                      Properties::NON_VIRTUAL,
	                      __void__setDefaultUpdateCallback__C5_std_string_R1,
	                      "",
	                      "");
	I_Method2(bool, computeLocalToWorldMatrix, IN, osg::Matrix &, matrix, IN, osg::NodeVisitor *, nv,
	          Properties::VIRTUAL,
	          __bool__computeLocalToWorldMatrix__osg_Matrix_R1__osg_NodeVisitor_P1,
	          "",
	          "");
	I_Method2(bool, computeWorldToLocalMatrix, IN, osg::Matrix &, matrix, IN, osg::NodeVisitor *, nv,
	          Properties::VIRTUAL,
	          __bool__computeWorldToLocalMatrix__osg_Matrix_R1__osg_NodeVisitor_P1,
	          "",
	          "");
	I_Method0(osgAnimation::Bone *, getBoneParent,
	          Properties::NON_VIRTUAL,
	          __Bone_P1__getBoneParent,
	          "",
	          "");
	I_Method0(const osgAnimation::Bone *, getBoneParent,
	          Properties::NON_VIRTUAL,
	          __C5_Bone_P1__getBoneParent,
	          "",
	          "");
	I_Method1(void, setTranslation, IN, const osg::Vec3 &, trans,
	          Properties::NON_VIRTUAL,
	          __void__setTranslation__C5_osg_Vec3_R1,
	          "",
	          "");
	I_Method1(void, setRotation, IN, const osg::Quat &, quat,
	          Properties::NON_VIRTUAL,
	          __void__setRotation__C5_osg_Quat_R1,
	          "",
	          "");
	I_Method1(void, setScale, IN, const osg::Vec3 &, scale,
	          Properties::NON_VIRTUAL,
	          __void__setScale__C5_osg_Vec3_R1,
	          "",
	          "");
	I_Method0(const osg::Vec3 &, getTranslation,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec3_R1__getTranslation,
	          "",
	          "");
	I_Method0(const osg::Quat &, getRotation,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Quat_R1__getRotation,
	          "",
	          "");
	I_Method0(const osg::Vec3 &, getScale,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec3_R1__getScale,
	          "",
	          "");
	I_Method0(osg::Matrix, getMatrixInBoneSpace,
	          Properties::NON_VIRTUAL,
	          __osg_Matrix__getMatrixInBoneSpace,
	          "",
	          "");
	I_Method0(const osg::Matrix &, getBindMatrixInBoneSpace,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Matrix_R1__getBindMatrixInBoneSpace,
	          "",
	          "");
	I_Method0(const osg::Matrix &, getMatrixInSkeletonSpace,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Matrix_R1__getMatrixInSkeletonSpace,
	          "",
	          "");
	I_Method0(const osg::Matrix &, getInvBindMatrixInSkeletonSpace,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Matrix_R1__getInvBindMatrixInSkeletonSpace,
	          "",
	          "");
	I_Method1(void, setMatrixInSkeletonSpace, IN, const osg::Matrix &, matrix,
	          Properties::NON_VIRTUAL,
	          __void__setMatrixInSkeletonSpace__C5_osg_Matrix_R1,
	          "",
	          "");
	I_Method1(void, setBindMatrixInBoneSpace, IN, const osg::Matrix &, matrix,
	          Properties::NON_VIRTUAL,
	          __void__setBindMatrixInBoneSpace__C5_osg_Matrix_R1,
	          "",
	          "");
	I_Method0(bool, needToComputeBindMatrix,
	          Properties::NON_VIRTUAL,
	          __bool__needToComputeBindMatrix,
	          "",
	          "");
	I_Method0(void, computeBindMatrix,
	          Properties::VIRTUAL,
	          __void__computeBindMatrix,
	          "",
	          "");
	I_Method1(void, setNeedToComputeBindMatrix, IN, bool, state,
	          Properties::NON_VIRTUAL,
	          __void__setNeedToComputeBindMatrix__bool,
	          "",
	          "");
	I_Method1(bool, addChild, IN, osg::Node *, child,
	          Properties::VIRTUAL,
	          __bool__addChild__Node_P1,
	          "Add Node to Group. ",
	          "If node is not NULL and is not contained in Group then increment its reference count, add it to the child list and dirty the bounding sphere to force it to recompute on next getBound() and return true for success. Otherwise return false. Scene nodes can't be added as child nodes. ");
	I_Method0(osgAnimation::Bone::BoneMap, getBoneMap,
	          Properties::NON_VIRTUAL,
	          __BoneMap__getBoneMap,
	          "",
	          "");
	I_SimpleProperty(const osg::Matrix &, BindMatrixInBoneSpace, 
	                 __C5_osg_Matrix_R1__getBindMatrixInBoneSpace, 
	                 __void__setBindMatrixInBoneSpace__C5_osg_Matrix_R1);
	I_SimpleProperty(osgAnimation::Bone::BoneMap, BoneMap, 
	                 __BoneMap__getBoneMap, 
	                 0);
	I_SimpleProperty(osgAnimation::Bone *, BoneParent, 
	                 __Bone_P1__getBoneParent, 
	                 0);
	I_SimpleProperty(const std::string &, DefaultUpdateCallback, 
	                 0, 
	                 __void__setDefaultUpdateCallback__C5_std_string_R1);
	I_SimpleProperty(const osg::Matrix &, InvBindMatrixInSkeletonSpace, 
	                 __C5_osg_Matrix_R1__getInvBindMatrixInSkeletonSpace, 
	                 0);
	I_SimpleProperty(osg::Matrix, MatrixInBoneSpace, 
	                 __osg_Matrix__getMatrixInBoneSpace, 
	                 0);
	I_SimpleProperty(const osg::Matrix &, MatrixInSkeletonSpace, 
	                 __C5_osg_Matrix_R1__getMatrixInSkeletonSpace, 
	                 __void__setMatrixInSkeletonSpace__C5_osg_Matrix_R1);
	I_SimpleProperty(bool, NeedToComputeBindMatrix, 
	                 0, 
	                 __void__setNeedToComputeBindMatrix__bool);
	I_SimpleProperty(const osg::Quat &, Rotation, 
	                 __C5_osg_Quat_R1__getRotation, 
	                 __void__setRotation__C5_osg_Quat_R1);
	I_SimpleProperty(const osg::Vec3 &, Scale, 
	                 __C5_osg_Vec3_R1__getScale, 
	                 __void__setScale__C5_osg_Vec3_R1);
	I_SimpleProperty(const osg::Vec3 &, Translation, 
	                 __C5_osg_Vec3_R1__getTranslation, 
	                 __void__setTranslation__C5_osg_Vec3_R1);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::Bone::UpdateBone)
	I_DeclaringFile("osgAnimation/Bone");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Constructor2(IN, const osgAnimation::Bone::UpdateBone &, apc, IN, const osg::CopyOp &, copyop,
	               ____UpdateBone__C5_UpdateBone_R1__C5_osg_CopyOp_R1,
	               "",
	               "");
	I_ConstructorWithDefaults1(IN, const std::string &, name, "",
	                           Properties::NON_EXPLICIT,
	                           ____UpdateBone__C5_std_string_R1,
	                           "",
	                           "");
	I_Method1(void, update, IN, osgAnimation::Bone &, bone,
	          Properties::NON_VIRTUAL,
	          __void__update__osgAnimation_Bone_R1,
	          "",
	          "");
	I_Method0(osgAnimation::QuatTarget *, getQuaternion,
	          Properties::NON_VIRTUAL,
	          __osgAnimation_QuatTarget_P1__getQuaternion,
	          "",
	          "");
	I_Method0(osgAnimation::Vec3Target *, getPosition,
	          Properties::NON_VIRTUAL,
	          __osgAnimation_Vec3Target_P1__getPosition,
	          "",
	          "");
	I_Method0(osgAnimation::Vec3Target *, getScale,
	          Properties::NON_VIRTUAL,
	          __osgAnimation_Vec3Target_P1__getScale,
	          "",
	          "");
	I_Method0(bool, needLink,
	          Properties::NON_VIRTUAL,
	          __bool__needLink,
	          "",
	          "");
	I_Method1(bool, link, IN, osgAnimation::Channel *, channel,
	          Properties::VIRTUAL,
	          __bool__link__osgAnimation_Channel_P1,
	          "Link channel. ",
	          "");
	I_SimpleProperty(osgAnimation::Vec3Target *, Position, 
	                 __osgAnimation_Vec3Target_P1__getPosition, 
	                 0);
	I_SimpleProperty(osgAnimation::QuatTarget *, Quaternion, 
	                 __osgAnimation_QuatTarget_P1__getQuaternion, 
	                 0);
	I_SimpleProperty(osgAnimation::Vec3Target *, Scale, 
	                 __osgAnimation_Vec3Target_P1__getScale, 
	                 0);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgAnimation::Bone >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osgAnimation::Bone *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osgAnimation::Bone > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osgAnimation::Bone *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osgAnimation::Bone *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osgAnimation::Bone > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osgAnimation::Bone *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_MAP_REFLECTOR(std::map< std::string COMMA  osgAnimation::Bone::PointerType >)
