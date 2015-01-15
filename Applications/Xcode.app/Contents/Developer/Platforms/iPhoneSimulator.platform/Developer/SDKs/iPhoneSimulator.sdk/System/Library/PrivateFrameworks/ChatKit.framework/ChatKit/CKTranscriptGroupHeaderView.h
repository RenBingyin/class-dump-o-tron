//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CKConversation, MFComposeRecipientTextView, UIButton, _UIBackdropView;

@interface CKTranscriptGroupHeaderView : UIView
{
    UIButton *_actionButton;
    CKConversation *_conversation;
    MFComposeRecipientTextView *_textView;
    UIView *_separator;
    _UIBackdropView *_backdropView;
}

@property(retain, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) MFComposeRecipientTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
- (id)_groupHeaderComposeRecipients;
- (void)_handleConversationRecipientsChanged:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 conversation:(id)arg2;
- (void)dealloc;

@end

