//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpriteKit/SKNode.h>

@class SCNNode, SCNScene;

@interface SK3DNode : SKNode
{
    id <SCNRenderer> _scnRenderer;
    struct SCNVector3 _originalCameraPosition;
    SCNScene *_scene;
    BOOL playing;
    BOOL loops;
    BOOL autoenablesDefaultLighting;
    double sceneTime;
    SCNNode *pointOfView;
}

+ (id)nodeWithViewportSize:(struct CGSize)arg1;
@property(nonatomic) BOOL autoenablesDefaultLighting; // @synthesize autoenablesDefaultLighting;
@property(retain, nonatomic) SCNNode *pointOfView; // @synthesize pointOfView;
@property(nonatomic) BOOL loops; // @synthesize loops;
@property(getter=isPlaying) BOOL playing; // @synthesize playing;
@property(nonatomic) double sceneTime; // @synthesize sceneTime;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_renderForTime:(double)arg1;
-     // Error parsing type: 32@0:816, name: unprojectPoint:
-     // Error parsing type: 32@0:816, name: projectPoint:
- (id)hitTest:(struct CGPoint)arg1 options:(id)arg2;
@property(retain, nonatomic) SCNScene *scnScene;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property struct CGSize viewportSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewportSize:(struct CGSize)arg1;
- (id)init;
- (void)commonInit;

@end

