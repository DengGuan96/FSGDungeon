#include "Component.h"
#include "GameObject.h"

Component::Component(GameObject* gameObject):
	mGameObject(gameObject),
	mUpdateOrder(100),
	mNumber(0)
{
	mGameObject->AddComponent(this);
}

Component::~Component()
{
	mGameObject->RemoveComponent(this);
}

void Component::Update()
{

}

void Component::LateUpdate()
{

}