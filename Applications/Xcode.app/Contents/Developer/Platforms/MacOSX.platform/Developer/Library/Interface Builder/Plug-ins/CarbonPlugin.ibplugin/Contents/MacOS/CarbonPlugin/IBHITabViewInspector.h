//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBBoundInspector.h"

@class NSButton, NSPopUpButton, NSStepper, NSTextField;

@interface IBHITabViewInspector : IBBoundInspector
{
    NSTextField *numberOfTabViewItemsTextField;
    NSStepper *numberOfTabViewItemsStepper;
    NSPopUpButton *tabDirectionPopUp;
    NSButton *autoLayoutPanesCheckBox;
}

- (void)refresh;
- (void)ok:(id)arg1;
- (void)awakeFromNib;

@end

