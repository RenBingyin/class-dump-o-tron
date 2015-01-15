//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNEventHandler.h>

@class SCNNode, UIGestureRecognizer;

@interface SCNCameraControlEventHandler : SCNEventHandler
{
    id _dReserved;
    SCNNode *_freeViewCameraNode;
    struct CGPoint _initialPoint;
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]), name: _initialMatrix
    float _initialZoom;
    float _savedZfar;
    float _savedZnear;
    float _originalFovX;
    float _originalFovY;
    float _originalOrthoScale;
    float _zoomFactor;
    // Error parsing type: , name: _clickOrigin
    int _lastGestureFingerCount;
    _Bool _isDraggingWithOneFinger;
    float _roll;
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]), name: _initialMatrixForRoll
    UIGestureRecognizer *_pressGesture;
    UIGestureRecognizer *_tapGesture;
    UIGestureRecognizer *_pinchGesture;
    UIGestureRecognizer *_panGesture;
    UIGestureRecognizer *_rotateGesture;
    long long _stickyAxis;
    // Error parsing type: {C3DSphere="vector"}, name: _viewedObjectSphere
    unsigned int _hasCheckedIfViewingAnObject:1;
    unsigned int _isViewingAnObject:1;
    unsigned int _isViewedObjectSphereComputed:1;
    unsigned int _automaticCameraTarget:1;
    unsigned int _inertia:1;
    unsigned int _alternateMode:1;
    unsigned int _upDirIsSet:1;
    unsigned int _gimbalLockMode:1;
    unsigned int _inertiaRunning:1;
    int _mode;
    struct SCNVector3 _gimbalLockVector;
    // Error parsing type: , name: _upDir
    struct SCNVector3 _cameraTarget;
    double _friction;
    struct CGPoint _totalDragWithInertia;
    struct CGPoint _inertiaVelocity;
    double _lastSimulationTime;
}

- (void)panWithGestureRecognizer:(id)arg1;
- (void)pinchWithGestureRecognizer:(id)arg1;
- (void)rotateWithGestureRecognizer:(id)arg1;
- (void)beginGesture:(id)arg1;
- (void)_handlePress:(id)arg1;
- (void)_handleDoubleTap:(id)arg1;
- (void)_handleRotation:(id)arg1;
- (void)_handlePan:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)gestureRecognizers;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)updateCameraTargetIfNeeded;
- (void)_translateTo:(struct CGPoint)arg1;
- (void)_rotateWithDrag:(struct CGPoint)arg1 mode:(long long)arg2 stickyAxis:(long long)arg3;
- (void)_beginTranslateAtLocation:(struct CGPoint)arg1;
-     // Error parsing type: 16@0:8, name: frontVector
- (struct C3DSphere)viewedObjectSphere;
- (_Bool)computeBoundingSphereOmittingFloorsForNode:(struct __C3DNode *)arg1 sphere:(struct C3DSphere *)arg2;
- (void)_startBrowsingIfNeeded:(struct CGPoint)arg1;
- (void)endDraggingWithVelocity:(struct CGPoint)arg1;
- (_Bool)wantsRedraw;
- (void)viewWillDraw;
- (void)rotateWithVector:(long long)arg1 mode: /* Error: Ran out of types for this method. */;
- (void)_onInertiaTimer;
- (void)_stopInertiaIfNeeded;
- (void)cameraDidChange;
- (void)cameraWillChange;
- (void)sceneDidChange;
- (void)sceneWillChange;
- (void)translateByX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (void)setZoomFactor:(double)arg1;
- (double)zoomFactor;
- (void)zoomBy:(float)arg1;
- (void)zoomBy:(float)arg1 animate:(_Bool)arg2;
- (void)rotateOf:(double)arg1;
- (_Bool)isViewingAnObject;
- (float)_translationCoef;
- (void)_switchToFreeViewCamera;
- (void)_installFreeViewCameraIfNeeded;
- (void)_prepareFreeViewCamera;
- (_Bool)_freeCameraActivated;
- (void)_resetFreeViewCamera;
@property long long stickyAxis;
@property struct SCNVector3 cameraTarget;
@property _Bool automaticCameraTarget;
@property struct SCNVector3 gimbalLockVector;
@property _Bool gimbalLockMode;
@property double friction;
@property _Bool enableInertia;
- (void)dealloc;
- (id)init;

@end

