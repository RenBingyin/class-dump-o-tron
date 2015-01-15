//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpriteKit/SKLabelNode.h>

@class NSObject<SKButtonNodeDelegate>, SKAction;

@interface SKButtonNode : SKLabelNode
{
    NSObject<SKButtonNodeDelegate> *_delegate;
    SKAction *_downAction;
    SKAction *_upAction;
    CDUnknownBlockType _downBlock;
    CDUnknownBlockType _upBlock;
    CDUnknownBlockType _upInsideBlock;
    int _touches;
}

+ (id)buttonWithFontNamed:(id)arg1;
@property(retain, nonatomic) SKAction *upAction; // @synthesize upAction=_upAction;
@property(retain, nonatomic) SKAction *downAction; // @synthesize downAction=_downAction;
@property(nonatomic) __weak NSObject<SKButtonNodeDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)onTouchDownInside:(CDUnknownBlockType)arg1;
- (void)onTouchUp:(CDUnknownBlockType)arg1;
- (void)onTouchUpInside:(CDUnknownBlockType)arg1;
- (void)touchEnded:(unsigned long long)arg1 location:(struct CGPoint)arg2;
- (void)touchMoved:(unsigned long long)arg1 location:(struct CGPoint)arg2;
- (void)touchBegan:(unsigned long long)arg1 location:(struct CGPoint)arg2;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

