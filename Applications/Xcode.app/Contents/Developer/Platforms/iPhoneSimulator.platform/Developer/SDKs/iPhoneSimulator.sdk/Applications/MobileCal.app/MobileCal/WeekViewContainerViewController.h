//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MainViewControllerContainer.h"

@class CompactWidthWeekViewController, LargeWeekViewController;

@interface WeekViewContainerViewController : MainViewControllerContainer
{
    CompactWidthWeekViewController *_compactController;
    LargeWeekViewController *_regularController;
}

@property(retain, nonatomic) LargeWeekViewController *regularController; // @synthesize regularController=_regularController;
@property(retain, nonatomic) CompactWidthWeekViewController *compactController; // @synthesize compactController=_compactController;
- (void).cxx_destruct;
- (_Bool)childViewControllerNeedsToBeInsettedFromNavigationElements;
- (Class)childViewControllerClassForTraits:(id)arg1;
- (id)childViewControllerForRegularWidthRegularHeight;
- (id)childViewControllerForRegularWidthCompactHeight;
- (id)childViewControllerForCompactWidthCompactHeight;
- (id)childViewControllerForUnknownTraits;
- (id)pushedNextLevelMainViewControllerContainerAnimated:(_Bool)arg1;
- (_Bool)shouldRemoveSelfFromNavigationStackIfTraitCollectionIsUnsupported;
- (id)currentChildViewController;

@end

