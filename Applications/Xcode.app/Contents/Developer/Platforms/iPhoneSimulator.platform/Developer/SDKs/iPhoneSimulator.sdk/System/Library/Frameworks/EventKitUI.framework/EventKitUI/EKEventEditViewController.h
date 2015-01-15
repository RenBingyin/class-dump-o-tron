//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@class EKEvent, EKEventEditor, EKEventStore, NSString, UIColor;

@interface EKEventEditViewController : UINavigationController
{
    EKEvent *_event;
    NSString *_eventId;
    int _transitionForModalViewPresentation;
    EKEventStore *_store;
    id <EKEventEditViewDelegate> _editViewDelegate;
    EKEventEditor *_editor;
    EKEventEditViewController *_strongSelf;
}

+ (void)setDefaultDatesForEvent:(id)arg1;
@property(retain, nonatomic) EKEventEditViewController *strongSelf; // @synthesize strongSelf=_strongSelf;
@property(retain, nonatomic) EKEventEditor *editor; // @synthesize editor=_editor;
@property(nonatomic) int transitionForModalViewPresentation; // @synthesize transitionForModalViewPresentation=_transitionForModalViewPresentation;
@property(nonatomic) __weak id <EKEventEditViewDelegate> editViewDelegate; // @synthesize editViewDelegate=_editViewDelegate;
@property(retain, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_store;
- (void).cxx_destruct;
@property(nonatomic) double editorNavBarRightContentInset;
@property(nonatomic) double editorNavBarLeftContentInset;
@property(retain, nonatomic) UIColor *editorBackgroundColor;
- (_Bool)willPresentDialogOnSave;
- (void)completeAndSave;
- (void)handleTapOutside;
@property(nonatomic) _Bool canHideDoneAndCancelButtons;
@property(nonatomic) _Bool showAttachments;
@property(nonatomic) _Bool scrollToNotes;
- (struct CGSize)preferredContentSize;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_storeChanged:(id)arg1;
- (void)editor:(id)arg1 prepareCalendarItemForEdit:(id)arg2;
- (void)editor:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)cancelEditing;
- (_Bool)saveWithSpan:(int)arg1 animated:(_Bool)arg2;
- (void)refreshStartAndEndDates;
@property(retain, nonatomic) EKEvent *event;
- (void)dealloc;
- (_Bool)shouldAutorotate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

