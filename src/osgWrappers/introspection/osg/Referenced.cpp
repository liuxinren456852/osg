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

#include <OpenThreads/Mutex>
#include <osg/DeleteHandler>
#include <osg/Referenced>
#include <osg/observer_ptr>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osg::Referenced)
	I_DeclaringFile("osg/Referenced");
	I_Constructor0(____Referenced,
	               "",
	               "");
	I_Constructor1(IN, bool, threadSafeRefUnref,
	               Properties::EXPLICIT,
	               ____Referenced__bool,
	               "",
	               "");
	I_Constructor1(IN, const osg::Referenced &, x,
	               Properties::NON_EXPLICIT,
	               ____Referenced__C5_Referenced_R1,
	               "",
	               "");
	I_Method1(void, setThreadSafeRefUnref, IN, bool, threadSafe,
	          Properties::VIRTUAL,
	          __void__setThreadSafeRefUnref__bool,
	          "Set whether to use a mutex to ensure ref() and unref() are thread safe. ",
	          "");
	I_Method0(bool, getThreadSafeRefUnref,
	          Properties::NON_VIRTUAL,
	          __bool__getThreadSafeRefUnref,
	          "Get whether a mutex is used to ensure ref() and unref() are thread safe. ",
	          "");
	I_Method0(OpenThreads::Mutex *, getRefMutex,
	          Properties::NON_VIRTUAL,
	          __OpenThreads_Mutex_P1__getRefMutex,
	          "Get the mutex used to ensure thread safety of ref()/unref(). ",
	          "");
	I_Method0(void, ref,
	          Properties::NON_VIRTUAL,
	          __void__ref,
	          "Increment the reference count by one, indicating that this object has another pointer which is referencing it. ",
	          "");
	I_Method0(void, unref,
	          Properties::NON_VIRTUAL,
	          __void__unref,
	          "Decrement the reference count by one, indicating that a pointer to this object is referencing it. ",
	          "If the reference count goes to zero, it is assumed that this object is no longer referenced and is automatically deleted. ");
	I_Method0(void, unref_nodelete,
	          Properties::NON_VIRTUAL,
	          __void__unref_nodelete,
	          "Decrement the reference count by one, indicating that a pointer to this object is referencing it. ",
	          "However, do not delete it, even if ref count goes to 0. Warning, unref_nodelete() should only be called if the user knows exactly who will be responsible for, one should prefer unref() over unref_nodelete() as the later can lead to memory leaks. ");
	I_Method0(int, referenceCount,
	          Properties::NON_VIRTUAL,
	          __int__referenceCount,
	          "Return the number pointers currently referencing this object. ",
	          "");
	I_Method1(void, addObserver, IN, osg::Observer *, observer,
	          Properties::NON_VIRTUAL,
	          __void__addObserver__Observer_P1,
	          "Add a Observer that is observing this object, notify the Observer when this object gets deleted. ",
	          "");
	I_Method1(void, removeObserver, IN, osg::Observer *, observer,
	          Properties::NON_VIRTUAL,
	          __void__removeObserver__Observer_P1,
	          "Add a Observer that is observing this object, notify the Observer when this object gets deleted. ",
	          "");
	I_StaticMethod0(OpenThreads::Mutex *, getGlobalReferencedMutex,
	                __OpenThreads_Mutex_P1__getGlobalReferencedMutex_S,
	                "Get the optional global Referenced mutex, this can be shared between all osg::Referenced. ",
	                "");
	I_StaticMethod1(void, setThreadSafeReferenceCounting, IN, bool, enableThreadSafeReferenceCounting,
	                __void__setThreadSafeReferenceCounting__bool_S,
	                "Set whether reference counting should be use a mutex to create thread reference counting. ",
	                "");
	I_StaticMethod0(bool, getThreadSafeReferenceCounting,
	                __bool__getThreadSafeReferenceCounting_S,
	                "Get whether reference counting is active. ",
	                "");
	I_StaticMethod1(void, setDeleteHandler, IN, osg::DeleteHandler *, handler,
	                __void__setDeleteHandler__DeleteHandler_P1_S,
	                "Set a DeleteHandler to which deletion of all referenced counted objects will be delegated to. ",
	                "");
	I_StaticMethod0(osg::DeleteHandler *, getDeleteHandler,
	                __DeleteHandler_P1__getDeleteHandler_S,
	                "Get a DeleteHandler. ",
	                "");
	I_ProtectedMethod0(void, deleteUsingDeleteHandler,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __void__deleteUsingDeleteHandler,
	                   "",
	                   "");
	I_SimpleProperty(OpenThreads::Mutex *, RefMutex, 
	                 __OpenThreads_Mutex_P1__getRefMutex, 
	                 0);
	I_SimpleProperty(bool, ThreadSafeRefUnref, 
	                 __bool__getThreadSafeRefUnref, 
	                 __void__setThreadSafeRefUnref__bool);
END_REFLECTOR
