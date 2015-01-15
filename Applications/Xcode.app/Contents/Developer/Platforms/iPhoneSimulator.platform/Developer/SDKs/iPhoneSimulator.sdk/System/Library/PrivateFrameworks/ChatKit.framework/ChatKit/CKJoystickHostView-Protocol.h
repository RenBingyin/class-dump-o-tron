//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CKJoystickView, NSArray, UIView, UIView<CKJoystickHostView>;

@protocol CKJoystickHostView
+ (UIView<CKJoystickHostView> *)sharedInstance;
@property(copy, nonatomic) NSArray *passthroughViews;
@property(readonly, retain, nonatomic) CKJoystickView *joystickView;
- (void)dismissJoystickViewAnimated:(_Bool)arg1;
- (void)presentJoystickView:(CKJoystickView *)arg1 fromPoint:(struct CGPoint)arg2 inView:(UIView *)arg3 animated:(_Bool)arg4;
@end

