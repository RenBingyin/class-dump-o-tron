//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSEditingPane.h"

@class EKCalendarChooser, EKEventStore;

@interface CSDefaultCalendarPane : PSEditingPane
{
    EKEventStore *_store;
    EKCalendarChooser *_chooser;
    _Bool _dontSetDefaultCalendar;
}

- (void).cxx_destruct;
- (id)preferenceValue;
- (void)setPreferenceSpecifier:(id)arg1;
- (_Bool)drawLabel;
- (id)childViewControllerForHostingViewController;
- (void)_updateCheckedCalendar;
- (id)initWithFrame:(struct CGRect)arg1;

@end
