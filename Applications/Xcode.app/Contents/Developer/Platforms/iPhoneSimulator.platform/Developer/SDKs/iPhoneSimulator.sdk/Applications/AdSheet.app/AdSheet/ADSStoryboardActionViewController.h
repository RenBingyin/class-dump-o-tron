//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ADSActionViewController.h"

@class ADSStoryboardController;

@interface ADSStoryboardActionViewController : ADSActionViewController
{
    ADSStoryboardController *_storyboardController;
}

@property(retain, nonatomic) ADSStoryboardController *storyboardController; // @synthesize storyboardController=_storyboardController;
- (unsigned long long)supportedInterfaceOrientations;
- (void)storyboardDidChangeSupportedOrientations:(unsigned long long)arg1;
- (void)clientApplicationCancelledAction;
- (void)clientApplicationDidEnterBackground;
- (void)storyboardDidFinishFirstLoad;
- (void)didSetAdSpaceController;
- (void)dealloc;

@end

