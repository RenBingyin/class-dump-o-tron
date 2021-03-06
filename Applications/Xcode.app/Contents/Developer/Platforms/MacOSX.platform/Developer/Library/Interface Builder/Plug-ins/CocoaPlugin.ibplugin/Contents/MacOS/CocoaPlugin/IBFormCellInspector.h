//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBBoundInspector.h"

@class NSButton, NSSegmentedControl, NSTextField;

@interface IBFormCellInspector : IBBoundInspector
{
    NSTextField *titleTextField;
    NSTextField *stringValueTextField;
    NSTextField *placeholderStringTextField;
    NSSegmentedControl *titleAlignmentSegmentedControl;
    NSSegmentedControl *textAlignmentSegmentedControl;
    NSSegmentedControl *borderTypeSegmentedControl;
    NSButton *editableCheckBox;
    NSButton *allowsUndoCheckBox;
}

- (void)awakeFromNib;

@end

