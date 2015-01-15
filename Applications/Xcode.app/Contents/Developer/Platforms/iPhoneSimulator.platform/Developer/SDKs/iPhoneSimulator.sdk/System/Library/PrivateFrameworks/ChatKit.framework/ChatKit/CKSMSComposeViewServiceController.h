//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "CKSMSComposeViewServiceProtocol.h"
#import "CKTranscriptComposeDelegate.h"

@class CKModalTranscriptController, NSString;

@interface CKSMSComposeViewServiceController : UINavigationController <CKTranscriptComposeDelegate, CKSMSComposeViewServiceProtocol>
{
    _Bool _canEditRecipients;
    _Bool _supportsAttachments;
    _Bool _supportsMessageInspection;
    _Bool _forceMMS;
    _Bool _disableCameraAttachments;
    CKModalTranscriptController *_modalTranscriptController;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
+ (_Bool)_isSecureForRemoteViewService;
@property(retain, nonatomic) CKModalTranscriptController *modalTranscriptController; // @synthesize modalTranscriptController=_modalTranscriptController;
- (void)_willAppearInRemoteViewController;
- (_Bool)supportsMessageInspection;
- (_Bool)supportsAttachments;
@property(nonatomic) _Bool canEditRecipients; // @dynamic canEditRecipients;
- (void)transcriptController:(id)arg1 didSelectNewConversation:(id)arg2;
- (void)showNewMessageCompositionForComposition:(id)arg1;
- (void)transcriptController:(id)arg1 didSendMessageInConversation:(id)arg2;
- (void)transcriptController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3;
- (void)didCancelComposition:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setTextEntryContentsVisible:(_Bool)arg1;
- (void)disableCameraAttachments;
- (void)setPendingAddresses:(id)arg1;
- (void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3;
- (void)forceMMS;
- (void)_forceMMSIfNecessary;
- (void)setUICustomizationData:(id)arg1;
- (void)forceCancelComposition;
- (void)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2;
- (void)insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3;
- (void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

