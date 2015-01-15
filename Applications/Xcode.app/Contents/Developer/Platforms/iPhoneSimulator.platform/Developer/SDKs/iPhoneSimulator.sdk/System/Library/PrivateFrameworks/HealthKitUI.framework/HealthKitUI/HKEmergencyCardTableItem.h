//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController, _HKMedicalIDData;

@interface HKEmergencyCardTableItem : NSObject
{
    _Bool _isInEditMode;
    _HKMedicalIDData *_data;
    UIViewController *_owningViewController;
}

@property(readonly, nonatomic) _Bool isInEditMode; // @synthesize isInEditMode=_isInEditMode;
@property(nonatomic) __weak UIViewController *owningViewController; // @synthesize owningViewController=_owningViewController;
@property(retain, nonatomic) _HKMedicalIDData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)_dequeueNoValueCellInTableView:(id)arg1 withTitle:(id)arg2;
- (void)commitEditing;
- (void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (long long)editingStyleForRowAtIndex:(long long)arg1;
- (_Bool)canEditRowAtIndex:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (_Bool)shouldHighlightRowAtIndex:(long long)arg1;
- (id)titleForFooter;
- (id)titleForHeader;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (long long)numberOfRows;
- (struct UIEdgeInsets)separatorInset;
- (id)title;
- (_Bool)hasPresentableData;
- (id)init;
- (id)initInEditMode:(_Bool)arg1;

@end

