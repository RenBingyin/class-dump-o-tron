//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class GEORPProblemStatusResponse, MKMapView, NSArray, NSLayoutConstraint, NSString, UITextView;

__attribute__((visibility("hidden")))
@interface RAPFixedProblemViewController : UIViewController
{
    NSLayoutConstraint *_mapHeightConstraint;
    NSArray *_annotations;
    CDStruct_02837cd9 _mapRect;
    NSString *_headerText;
    NSString *_footerText;
    NSArray *_changes;
    MKMapView *_mapView;
    UITextView *_textView;
    GEORPProblemStatusResponse *_problemStatusResponse;
}

@property(retain, nonatomic) GEORPProblemStatusResponse *problemStatusResponse; // @synthesize problemStatusResponse=_problemStatusResponse;
- (void).cxx_destruct;
- (void)handleDone:(id)arg1;
- (void)_updateTextFieldIfLoaded;
- (void)_setHeaderText:(id)arg1 changes:(id)arg2 footerText:(id)arg3;
- (void)_updateMapViewIfLoaded;
- (void)_setAnnotations:(id)arg1 region:(CDStruct_02837cd9)arg2;
- (void)_contentSizeCategoryDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

