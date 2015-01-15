//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class EKEvent, EKEventEditViewController, EKEventViewController, EventDetailNavigationController, NSArray, UITraitCollection;

@interface EventDetailContainerViewController : UIViewController
{
    EKEventViewController *_eventViewController;
    EKEventEditViewController *_activeEventEditor;
    UIViewController *_baseViewController;
    EKEvent *_event;
    NSArray *_viewControllersOnNavStack;
    EventDetailNavigationController *_detailsNavController;
    struct CGSize _preferredContentSize;
    UITraitCollection *_destinationTraits;
}

+ (Class)_ABPersonViewControllerClass;
+ (id)eventEditContainerWithEvent:(id)arg1 eventStore:(id)arg2 editViewDelegate:(id)arg3;
+ (id)eventDetailContainerWithEvent:(id)arg1 delegate:(id)arg2;
- (void).cxx_destruct;
- (id)_navigationControllerToUse;
- (void)_putEditViewControllerInPlace;
- (void)_putDetailsViewControllerInPlace;
- (_Bool)_needToHaveOwnNavController;
- (_Bool)_baseIsABPersonVC;
- (void)backPressed;
- (void)donePressed;
- (_Bool)_isPageSheetPresentation;
- (void)completePresentationAfterSizeClassChangeWithEventViewDelegate:(id)arg1;
- (void)_cleanUpBaseViewController;
- (void)_cleanUpDetailsNavigationController;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_resetStyling;
@property(readonly, nonatomic) EKEvent *event;
@property(readonly, nonatomic) EKEventEditViewController *activeEventEditor;
- (void)setActiveEventEditor:(id)arg1;
@property(readonly, nonatomic) EKEventViewController *eventViewController;
- (void)setEventViewController:(id)arg1;
@property(readonly, nonatomic) UIViewController *baseViewController;
- (id)toolbarItems;
- (id)navigationItem;
- (struct CGSize)preferredContentSize;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (id)title;
- (void)viewDidLoad;
- (id)initWithEventEditViewController:(id)arg1;
- (id)initWithPersonViewController:(id)arg1 event:(id)arg2;
- (id)initWithEventViewController:(id)arg1;
- (id)initWithViewController:(id)arg1 event:(id)arg2;

@end

