//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Message/MFWebAttachmentSource.h>

@class MFAttachmentManager, MFLock, MFMimeBody, MFMimePart, NSData, NSMutableDictionary, NSURL;

@interface MFWebMessageDocument : MFWebAttachmentSource
{
    unsigned int _uniqueId;
    NSURL *_baseURL;
    MFMimeBody *_mimeBody;
    MFMimePart *_htmlPart;
    NSData *_htmlData;
    MFLock *_lock;
    NSMutableDictionary *_partsByURL;
    NSMutableDictionary *_partsByFilename;
    unsigned int _preferredEncoding;
    MFAttachmentManager *_attachmentManager;
}

+ (id)sourceForURL:(id)arg1;
@property(retain, nonatomic) MFAttachmentManager *attachmentManager; // @synthesize attachmentManager=_attachmentManager;
@property unsigned int preferredEncoding; // @synthesize preferredEncoding=_preferredEncoding;
@property(readonly) NSData *htmlData; // @synthesize htmlData=_htmlData;
@property(readonly) MFMimePart *mimePart; // @synthesize mimePart=_htmlPart;
@property(readonly) MFMimeBody *mimeBody; // @synthesize mimeBody=_mimeBody;
@property(readonly) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (id)attachmentForCID:(id)arg1;
- (id)fileWrapper;
- (id)preferredCharacterSet;
- (id)attachmentsInDocument;
- (id)attachmentForURL:(id)arg1;
- (id)mimePartForURL:(id)arg1;
- (void)dealloc;
- (id)initWithMimePart:(id)arg1 htmlData:(id)arg2 encoding:(unsigned int)arg3;
- (id)initWithMimePart:(id)arg1;
- (id)_initWithMimePart:(id)arg1 htmlData:(id)arg2;
- (id)initWithMimeBody:(id)arg1;
- (id)init;

@end

