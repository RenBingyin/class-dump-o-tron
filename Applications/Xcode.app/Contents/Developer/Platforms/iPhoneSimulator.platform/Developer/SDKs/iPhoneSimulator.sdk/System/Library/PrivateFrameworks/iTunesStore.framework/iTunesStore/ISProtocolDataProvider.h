//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStore/ISDataProvider.h>

#import "NSCopying.h"

@interface ISProtocolDataProvider : ISDataProvider <NSCopying>
{
    _Bool _shouldPostFooterSectionChanged;
    _Bool _shouldProcessAccount;
    _Bool _shouldProcessAuthenticationDialogs;
    _Bool _shouldProcessDialogs;
    _Bool _shouldProcessProtocol;
    _Bool _shouldTriggerDownloads;
}

@property _Bool shouldTriggerDownloads; // @synthesize shouldTriggerDownloads=_shouldTriggerDownloads;
@property _Bool shouldProcessProtocol; // @synthesize shouldProcessProtocol=_shouldProcessProtocol;
@property _Bool shouldProcessDialogs; // @synthesize shouldProcessDialogs=_shouldProcessDialogs;
@property _Bool shouldProcessAuthenticationDialogs; // @synthesize shouldProcessAuthenticationDialogs=_shouldProcessAuthenticationDialogs;
@property _Bool shouldProcessAccount; // @synthesize shouldProcessAccount=_shouldProcessAccount;
@property _Bool shouldPostFooterSectionChanged; // @synthesize shouldPostFooterSectionChanged=_shouldPostFooterSectionChanged;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_shouldFailWithTokenErrorForDialog:(id)arg1 dictionary:(id)arg2 error:(id *)arg3;
- (void)_selectFooterSection:(id)arg1;
- (_Bool)_processFailureTypeFromDictionary:(id)arg1 error:(id *)arg2;
- (void)_performActionsForResponse:(id)arg1;
- (void)_checkInAppPurchaseQueueForAction:(id)arg1;
- (void)_checkDownloadQueues;
- (void)_presentDialog:(id)arg1;
- (_Bool)parseData:(id)arg1 returningError:(id *)arg2;
- (_Bool)processDictionary:(id)arg1 error:(id *)arg2;
- (_Bool)processDialogFromDictionary:(id)arg1 error:(id *)arg2;
- (id)init;

@end

