//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MFMessageStoreIntKeyCaches, MFMessageStoreObjectCaches, NSMutableSet, NSString;

@interface MFMessageStore : NSObject <NSCopying>
{
    NSMutableSet *_uniqueStrings;
    MFMessageStoreObjectCaches *objectCaches;
    MFMessageStoreIntKeyCaches *intKeyCaches;
}

+ (void)setDefaultMessageHeadersClass:(Class)arg1;
+ (Class)classForMimePart;
+ (Class)headersClass;
@property(retain, nonatomic) MFMessageStoreIntKeyCaches *intKeyCaches; // @synthesize intKeyCaches;
@property(retain, nonatomic) MFMessageStoreObjectCaches *objectCaches; // @synthesize objectCaches;
- (id)additionalHeadersForForwardOfMessage:(id)arg1;
- (id)additionalHeadersForReplyOfMessage:(id)arg1;
- (void)setMessageClass:(Class)arg1;
- (_Bool)wantsLineEndingConversionForMIMEPart:(id)arg1;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(_Bool)arg2 isEncrypted:(_Bool)arg3 forMessage:(id)arg4;
- (_Bool)hasCompleteDataForMimePart:(id)arg1;
- (id)bodyDataForMessage:(id)arg1 isComplete:(_Bool *)arg2 isPartial:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 downloadIfNecessary:(_Bool)arg3 partial:(_Bool *)arg4;
- (void)_flushAllCaches;
- (id)_cachedBodyDataContainerForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)bestAlternativeForPart:(id)arg1;
- (id)defaultAlternativeForPart:(id)arg1;
- (id)decryptedTopLevelPartForPart:(id)arg1;
- (_Bool)dataForMimePart:(id)arg1 inRange:(struct _NSRange)arg2 withConsumer:(id)arg3 downloadIfNecessary:(_Bool)arg4;
- (_Bool)dataForMimePart:(id)arg1 inRange:(struct _NSRange)arg2 isComplete:(_Bool *)arg3 withConsumer:(id)arg4 downloadIfNecessary:(_Bool)arg5 didDownload:(_Bool *)arg6;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4 didDownload:(_Bool *)arg5;
- (id)uniquedString:(id)arg1;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4 didDownload:(_Bool *)arg5;
- (id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(_Bool)arg2 updateFlags:(_Bool)arg3;
- (id)_bodyForMessage:(id)arg1 fetchIfNotAvailable:(_Bool)arg2 updateFlags:(_Bool)arg3;
- (_Bool)bodyFetchRequiresNetworkActivity;
@property(copy, nonatomic) NSString *storagePath;
- (id)_setOrGetBody:(id)arg1 forMessage:(id)arg2 updateFlags:(_Bool)arg3;
- (id)headersForMessage:(id)arg1 fetchIfNotAvailable:(_Bool)arg2;
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(_Bool)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_flushAllMessageData;
- (void)dealloc;
- (id)init;

@end

