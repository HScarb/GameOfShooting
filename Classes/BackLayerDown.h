#ifndef __BackLayerDown_H__
#define __BackLayerDown_H__
/**
*���� ���F�o�޵؈D���L��
*���� �ֱ��ģ�ling20081005@126.com ���ͣ�http://blog.csdn.net/evankaka��
*�r�g 2015.2.27
*/
#include "cocos2d.h"
#define MAP_1_Tag   1       // �궨������Map��Tag  
#define MAP_2_Tag   2 
class BackLayerDown : public cocos2d::Layer
{
public:
    virtual bool init();
    CREATE_FUNC(BackLayerDown);
private:
	void update(float time);
	virtual void onExit();
};

#endif // __BackLayerDown_H__
