//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DirectionsInfoBarDelegate.h"
#import "DirectionsInfoDisplay.h"
#import "MainChromeTopBarContentProvider.h"
#import "OverviewTopBarDelegate.h"

@class DirectionsInfoBar, MainChromeViewController, NSString, OverviewTopBarContent, SteppingOverviewTopBarContent;

__attribute__((visibility("hidden")))
@interface DirectionsTopBarProvider : NSObject <OverviewTopBarDelegate, DirectionsInfoBarDelegate, MainChromeTopBarContentProvider, DirectionsInfoDisplay>
{
    DirectionsInfoBar *_legacyDirections;
    OverviewTopBarContent *_overviewContent;
    SteppingOverviewTopBarContent *_steppingOverviewContent;
    long long _directionsInfoBarMode;
    MainChromeViewController *_chromeViewController;
    id <DirectionsTopBarProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <DirectionsTopBarProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) MainChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(nonatomic) long long directionsInfoBarMode; // @synthesize directionsInfoBarMode=_directionsInfoBarMode;
- (void).cxx_destruct;
- (void)setBackdropLightness:(long long)arg1 animation:(id)arg2;
- (void)setTimeEstimate:(double)arg1 andDistanceEstimate:(double)arg2;
- (void)setSelectedRoute:(id)arg1 withIndex:(unsigned long long)arg2 destinationName:(id)arg3;
- (void)setAlternateRoutesCount:(unsigned long long)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setShowsDimmedDisplay:(_Bool)arg1 animation:(id)arg2;
- (id)_childDisplays;
- (void)directionsInfoBarDidSwitchToNewMode:(id)arg1;
- (void)directionsInfoBarChoseResumeInOverview:(id)arg1;
- (void)directionsInfoBarChoseEndInOverview:(id)arg1;
- (void)directionsInfoBarDidStartDirections:(id)arg1;
- (void)directionsInfoBarDidCancelDirections:(id)arg1;
- (void)directionsInfoBarDidClearDirections:(id)arg1;
- (void)overviewBarChoseResume:(id)arg1;
- (void)overviewBarChoseEnd:(id)arg1;
- (void)refreshRouteInfoView;
- (void)setDirectionsInfoBarMode:(long long)arg1 animated:(_Bool)arg2;
- (id)presentationSourceForShareSheet;
- (id)topBarContentForVariant:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

