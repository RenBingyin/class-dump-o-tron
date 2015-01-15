//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMTranscriptChatItem, NSAttributedString, NSString, UIImage;

@interface CKChatItem : NSObject
{
    _Bool _sizeLoaded;
    IMTranscriptChatItem *_imChatItem;
    NSAttributedString *_transcriptText;
    double _maxWidth;
    NSAttributedString *_transcriptDrawerText;
    struct CGSize _size;
    struct UIEdgeInsets _textAlignmentInsets;
}

+ (id)chatItemWithIMChatItem:(id)arg1 rightBalloonMaxWidth:(double)arg2 leftBalloonMaxWidth:(double)arg3 otherMaxWidth:(double)arg4;
@property(nonatomic, getter=isSizeLoaded) _Bool sizeLoaded; // @synthesize sizeLoaded=_sizeLoaded;
@property(copy, nonatomic) NSAttributedString *transcriptDrawerText; // @synthesize transcriptDrawerText=_transcriptDrawerText;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(copy, nonatomic) NSAttributedString *transcriptText; // @synthesize transcriptText=_transcriptText;
@property(retain, nonatomic) IMTranscriptChatItem *IMChatItem; // @synthesize IMChatItem=_imChatItem;
- (id)loadTranscriptDrawerText;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (id)loadTranscriptText;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
@property(readonly, nonatomic) _Bool canSendAsTextMessage;
- (_Bool)canSave;
@property(readonly, nonatomic) _Bool canExport;
@property(readonly, nonatomic) _Bool canForward;
@property(readonly, nonatomic) _Bool canDelete;
@property(readonly, nonatomic) _Bool canCopy;
@property(readonly, nonatomic) _Bool isEditable;
@property(readonly, nonatomic) _Bool wantsDrawerLayout;
@property(readonly, nonatomic) _Bool displayDuringSend;
@property(readonly, retain, nonatomic) UIImage *contactImage;
@property(readonly, copy, nonatomic) NSString *cellIdentifier;
@property(readonly, nonatomic) Class cellClass;
@property(readonly, nonatomic) BOOL transcriptOrientation;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets;
@property(readonly, nonatomic) struct UIEdgeInsets transcriptTextAlignmentInsets;
- (void)unloadSize;
@property(readonly, nonatomic) struct UIEdgeInsets textAlignmentInsets; // @synthesize textAlignmentInsets=_textAlignmentInsets;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (void)unloadTranscriptText;
@property(readonly, nonatomic) _Bool hasTail;
@property(readonly, nonatomic) unsigned char attachmentContiguousType;
@property(readonly, nonatomic) unsigned char contiguousType;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;

@end

