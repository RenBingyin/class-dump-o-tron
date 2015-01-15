//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKComposition, CKEntity, IMChat, IMService, NSArray, NSAttributedString, NSString, UIImage;

@interface CKConversation : NSObject
{
    NSArray *_recipients;
    NSString *_name;
    IMChat *_chat;
    unsigned int _limitToLoad;
    struct {
        unsigned int ignoringTypingUpdates:1;
    } _conversationFlags;
    _Bool _needsReload;
    NSArray *_pendingHandles;
    UIImage *_thumbnailImage;
    NSAttributedString *_groupName;
}

+ (id)newPendingConversation;
+ (double)_iMessage_maxTrimDurationForMediaType:(int)arg1;
+ (unsigned long long)_iMessage_maxTransferFileSizeForWiFi:(_Bool)arg1;
+ (id)_iMessage_localizedErrorForReason:(long long)arg1;
+ (_Bool)_iMessage_canSendComposition:(id)arg1 error:(id *)arg2;
+ (_Bool)_iMessage_canSendMessageWithMediaObjectTypes:(int *)arg1;
+ (_Bool)_iMessage_canSendMessageWithMediaObjectTypes:(int *)arg1 errorCode:(long long *)arg2;
+ (long long)_iMessage_maxAttachmentCount;
+ (_Bool)_iMessage_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
+ (_Bool)_sms_mediaObjectPassesDurationCheck:(id)arg1;
+ (double)_sms_maxTrimDurationForMediaType:(int)arg1;
+ (id)_sms_localizedErrorForReason:(long long)arg1;
+ (_Bool)_sms_canSendComposition:(id)arg1 error:(id *)arg2;
+ (_Bool)_sms_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
+ (_Bool)_sms_canSendMessageWithMediaObjectTypes:(int *)arg1;
+ (_Bool)_sms_canSendMessageWithMediaObjectTypes:(int *)arg1 errorCode:(long long *)arg2;
+ (long long)_sms_maxAttachmentCount;
+ (_Bool)_sms_mediaObjectPassesRestriction:(id)arg1;
@property(readonly, retain, nonatomic) NSAttributedString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(readonly, nonatomic) _Bool needsReload; // @synthesize needsReload=_needsReload;
@property(nonatomic) unsigned int limitToLoad; // @synthesize limitToLoad=_limitToLoad;
@property(retain, nonatomic) IMChat *chat; // @synthesize chat=_chat;
@property(copy, nonatomic) NSArray *pendingHandles; // @synthesize pendingHandles=_pendingHandles;
- (id)copyForPendingConversation;
- (id)displayNameForMediaObjects:(id)arg1 subject:(id)arg2;
- (id)_headerTitleForPendingMediaObjects:(id)arg1 subject:(id)arg2 onService:(id)arg3;
- (id)_headerTitleForService:(id)arg1;
- (id)_nameForHandle:(id)arg1;
@property(readonly, retain, nonatomic) NSString *serviceDisplayName;
- (BOOL)outgoingBubbleColor;
@property(readonly, nonatomic) BOOL buttonColor;
@property(readonly, retain, nonatomic) NSString *previewText;
@property(nonatomic) NSString *displayName;
@property(readonly, nonatomic) _Bool hasDisplayName;
@property(readonly, retain, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) unsigned long long disclosureAtomStyle; // @dynamic disclosureAtomStyle;
@property(readonly, nonatomic) _Bool shouldShowCharacterCount;
- (void)_clearTypingIndicatorsIfNecessary;
- (void)updateUserActivityWithComposition:(id)arg1;
@property(nonatomic) _Bool localUserIsRecording;
@property(nonatomic) _Bool localUserIsTyping;
- (_Bool)_chatSupportsTypingIndicators;
- (void)sendMessage:(id)arg1 newComposition:(_Bool)arg2;
- (void)sendMessage:(id)arg1 onService:(id)arg2 newComposition:(_Bool)arg3;
- (id)messageWithComposition:(id)arg1;
- (void)_recordRecentContact;
- (_Bool)_chatHasValidAccount:(id)arg1 forService:(id)arg2;
- (_Bool)_accountIsOperational:(id)arg1 forService:(id)arg2;
- (double)maxTrimDurationForMediaType:(int)arg1;
- (_Bool)canSendToRecipients:(id)arg1 alertIfUnable:(_Bool)arg2;
- (_Bool)canSendComposition:(id)arg1 error:(id *)arg2;
- (_Bool)canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
@property(readonly, nonatomic, getter=isPending) _Bool pending;
@property(readonly, copy, nonatomic) NSArray *recipientStrings;
@property(readonly, copy, nonatomic) NSArray *pendingEntities; // @dynamic pendingEntities;
- (void)setPendingComposeRecipients:(id)arg1;
- (long long)compareBySequenceNumberAndDateDescending:(id)arg1;
- (id)shortDescription;
- (id)description;
- (_Bool)isPlaceholder;
- (void)markAllMessagesAsRead;
- (void)enumerateMessagesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)setLoadedMessageCount:(unsigned long long)arg1;
- (void)loadMoreMessages;
- (void)loadAllMessages;
- (void)deleteAllMessagesAndRemoveGroup;
- (void)deleteAllMessages;
- (void)_deleteAllMessagesAndRemoveGroup:(_Bool)arg1;
- (id)date;
@property(readonly, nonatomic) _Bool isToEmailAddress;
@property(readonly, nonatomic) unsigned long long recipientCount;
- (id)uniqueIdentifier;
@property(readonly, retain, nonatomic) NSString *groupID; // @dynamic groupID;
- (_Bool)noAvailableServices;
- (BOOL)sendButtonColor;
- (void)_handlePreferredServiceChangedNotification:(id)arg1;
- (_Bool)_handleIsForThisConversation:(id)arg1;
@property(readonly, retain, nonatomic) IMService *sendingService;
- (void)refreshServiceForSending;
- (void)removeRecipientHandles:(id)arg1;
- (void)addRecipientHandles:(id)arg1;
- (void)setMutedUntilDate:(id)arg1;
- (void)unmute;
@property(readonly, nonatomic, getter=isMuted) _Bool muted;
- (_Bool)canInsertMoreRecipients;
- (long long)maximumRecipientsForSendingService;
@property(readonly, nonatomic) _Bool supportsMutatingGroupMembers;
@property(readonly, nonatomic, getter=hasLeft) _Bool left;
@property(readonly, nonatomic) _Bool canLeave;
@property(readonly, nonatomic, getter=isGroupConversation) _Bool groupConversation;
@property(nonatomic) _Bool forceMMS; // @dynamic forceMMS;
@property(nonatomic, getter=isIgnoringTypingUpdates) _Bool ignoringTypingUpdates; // @dynamic ignoringTypingUpdates;
- (_Bool)isDowngraded;
@property(retain, nonatomic) NSString *rememberedKeyboard;
@property(retain, nonatomic) CKComposition *unsentComposition; // @dynamic unsentComposition;
- (void)_handleChatJoinStateDidChange:(id)arg1;
- (void)_handleChatParticipantsDidChange:(id)arg1;
- (void)_chatItemsDidChange:(id)arg1;
- (void)acceptTransfer:(id)arg1;
@property(readonly, retain, nonatomic) CKEntity *recipient; // @dynamic recipient;
@property(readonly, retain, nonatomic) NSArray *handles; // @dynamic handles;
@property(readonly, nonatomic) _Bool hasUnreadMessages; // @dynamic hasUnreadMessages;
@property(readonly, nonatomic) unsigned long long unreadCount; // @dynamic unreadCount;
- (void)reloadIfNeeded;
- (void)setNeedsReload;
- (void)resetCaches;
- (void)resetNameCaches;
- (void)dealloc;
- (id)initWithChat:(id)arg1;
- (id)init;
- (_Bool)_iMessage_canSendToRecipients:(id)arg1 alertIfUnable:(_Bool)arg2;
- (_Bool)_iMessage_supportsCharacterCountForAddresses:(id)arg1;
- (_Bool)_sms_canSendToRecipients:(id)arg1 alertIfUnable:(_Bool)arg2;
- (_Bool)_sms_supportsCharacterCountForAddresses:(id)arg1;
- (_Bool)_sms_willSendMMSByDefaultForAddresses:(id)arg1;
- (void)_postThumbnailChanged;
- (id)thumbnail;
- (void)regenerateThumbnail;
- (id)__generateThumbnailOfDiameter:(double)arg1 withRecordIDs:(id)arg2 recipientCount:(unsigned long long)arg3;
- (id)_messageOrderedABRecordIDsForChatItems:(id)arg1;
- (id)__generateThumbnailOfDiameter:(double)arg1 withRecipientImage:(id)arg2 andOtherRecipient:(id)arg3;

@end

