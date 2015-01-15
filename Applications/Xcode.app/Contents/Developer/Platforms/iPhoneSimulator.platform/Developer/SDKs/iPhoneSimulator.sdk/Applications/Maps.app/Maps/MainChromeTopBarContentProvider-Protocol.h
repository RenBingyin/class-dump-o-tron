//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MainChromeViewControllerBackdropLightness.h"
#import "NSObject.h"

@class MainChromeViewController;

@protocol MainChromeTopBarContentProvider <NSObject, MainChromeViewControllerBackdropLightness>
- (id <MainChromeTopBarContent>)topBarContentForVariant:(long long)arg1;

@optional
@property(nonatomic) MainChromeViewController *chromeViewController;
- (void)chromeViewController:(MainChromeViewController *)arg1 topBarDidMoveFromContent:(id <MainChromeTopBarContent>)arg2 toContent:(id <MainChromeTopBarContent>)arg3;
- (void)chromeViewController:(MainChromeViewController *)arg1 topBarWillMoveFromContent:(id <MainChromeTopBarContent>)arg2 toContent:(id <MainChromeTopBarContent>)arg3;
@end

