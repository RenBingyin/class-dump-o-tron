//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKRecurrenceChooserController.h>

#import "EKRecurrenceOrdinalPickerViewControllerDelegate.h"

@class EKRecurrenceOrdinalPickerViewController, NSString, UITableViewCell;

@interface EKRecurrenceOrdinalChooserController : EKRecurrenceChooserController <EKRecurrenceOrdinalPickerViewControllerDelegate>
{
    EKRecurrenceOrdinalPickerViewController *_pickerViewController;
    UITableViewCell *_cell;
}

- (void).cxx_destruct;
- (void)frequencyPickerUpdated:(id)arg1;
- (void)updateFromRecurrenceRule:(id)arg1;
- (void)updateRecurrenceRuleBuilder:(id)arg1;
- (id)cellForRow:(long long)arg1;
- (double)heightForRow:(long long)arg1;
- (long long)numberOfRows;
- (int)frequency;
- (id)initWithDate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

