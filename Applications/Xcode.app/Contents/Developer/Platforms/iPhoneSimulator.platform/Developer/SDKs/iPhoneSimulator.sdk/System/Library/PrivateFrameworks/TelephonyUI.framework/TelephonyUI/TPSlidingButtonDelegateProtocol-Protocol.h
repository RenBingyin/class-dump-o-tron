//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TPSlidingButton;

@protocol TPSlidingButtonDelegateProtocol <NSObject>
- (void)slidingButton:(TPSlidingButton *)arg1 didSlideToProportion:(double)arg2;
- (void)slidingButtonDidFinishSlide;
- (void)slidingButtonWillFinishSlide;
@end

