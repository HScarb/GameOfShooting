/**
*���� Ӣ��
*���� �ֱ��ģ�ling20081005@126.com ���ͣ�http://blog.csdn.net/evankaka��
*ʱ�� 2015.3.14
*/
#pragma once
#ifndef __HeroBulletTwo_H__
#define __HeroBulletTwo_H__
#include "cocos2d.h"
#include "BulletStyle.h"
USING_NS_CC;
class HeroBulletTwo : public BulletStyle {
public:
	virtual  void shootBullet(float dt);
};
#endif 