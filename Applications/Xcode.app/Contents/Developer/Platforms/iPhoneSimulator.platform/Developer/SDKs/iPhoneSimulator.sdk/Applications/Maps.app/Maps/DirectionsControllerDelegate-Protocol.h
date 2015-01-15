//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DirectionsController, MainChromeViewController, NSError, SearchResult;

@protocol DirectionsControllerDelegate <NSObject>
@property(readonly, nonatomic) MainChromeViewController *chromeViewController;
- (void)directionsControllerHasReachedEndOfLeg:(DirectionsController *)arg1 willContinueGuidance:(_Bool)arg2;
- (void)directionsControllerHasArrived:(DirectionsController *)arg1;
- (void)directionsControllerUpdatedETA:(DirectionsController *)arg1;
- (void)directionsController:(DirectionsController *)arg1 didSetEndPin:(SearchResult *)arg2;
- (void)directionsController:(DirectionsController *)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)directionsController:(DirectionsController *)arg1 didChangeSelectedRouteIndex:(unsigned long long)arg2;
- (void)directionsControllerDidChangeRoute:(DirectionsController *)arg1;
- (void)directionsControllerDidReset:(DirectionsController *)arg1;
- (void)directionsControllerDidFailToLoad:(DirectionsController *)arg1 withError:(NSError *)arg2 canInterruptUser:(_Bool)arg3;
- (void)directionsControllerDidProceedWithExternalOverview:(DirectionsController *)arg1;
- (void)directionsControllerDidCancelLoad:(DirectionsController *)arg1;
- (void)directionsControllerDidLoad:(DirectionsController *)arg1;
- (void)directionsControllerDidStartNavigationSession:(DirectionsController *)arg1;
- (void)directionsControllerDidStartLoad:(DirectionsController *)arg1;
- (void)directionsController:(DirectionsController *)arg1 presentDirectionsStepsListWithPositioning:(id <PresenterPresentationSource> (^)(UIViewController *, struct CGRect *))arg2 completion:(void (^)(void))arg3;
- (void)directionsController:(DirectionsController *)arg1 presentDirectionsSheetWithPositioning:(id <PresenterPresentationSource> (^)(UIViewController *, struct CGRect *))arg2 completion:(void (^)(void))arg3;
- (void)directionsController:(DirectionsController *)arg1 steppingModeChoseGuideMe:(id <MainChromeModeController>)arg2 withTransportType:(int)arg3;
- (void)directionsController:(DirectionsController *)arg1 steppingModeChoseEnd:(id <MainChromeModeController>)arg2;
- (void)directionsController:(DirectionsController *)arg1 steppingModeChoseOverview:(id <MainChromeModeController>)arg2;
- (void)directionsControllerNavigationModeChoseEndNavigation:(DirectionsController *)arg1;
- (void)directionsControllerNavigationModeChoseOverview:(DirectionsController *)arg1;
- (void)directionsController:(DirectionsController *)arg1 displayDirectionsWithoutNavigationToSelectedRouteWithOptions:(long long)arg2;
@end

