//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSDGLDataBufferAttribute;

@protocol TSDGLDataBufferAccessor <NSObject>
- (void)setGLPoint4D:(CDStruct_818bb265)arg1 forAttribute:(TSDGLDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_818bb265)GLPoint4DForAttribute:(TSDGLDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
- (void)setGLPoint3D:(CDStruct_03942939)arg1 forAttribute:(TSDGLDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_03942939)GLPoint3DForAttribute:(TSDGLDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
- (void)setGLPoint2D:(CDStruct_b2fbf00d)arg1 forAttribute:(TSDGLDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_b2fbf00d)GLPoint2DForAttribute:(TSDGLDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
- (void)setCGFloat:(double)arg1 forAttribute:(TSDGLDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLfloat:(float)arg1 forAttribute:(TSDGLDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (float)GLfloatForAttribute:(TSDGLDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
@end

