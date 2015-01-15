//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTask.h>

@class CoreDAVXMLData, NSDictionary, NSMutableDictionary, NSString;

@interface CoreDAVMultiPutTask : CoreDAVTask
{
    NSString *_appSpecificNamespace;
    NSString *_appSpecificDataProp;
    NSString *_checkCTag;
    CoreDAVXMLData *_pushedData;
    _Bool _validCTag;
    NSString *_nextCTag;
    NSMutableDictionary *_uuidToHREF;
    NSMutableDictionary *_hrefToETag;
    NSMutableDictionary *_uuidToErrorItems;
    NSMutableDictionary *_hrefToErrorItems;
    NSMutableDictionary *_uuidToStatus;
    NSMutableDictionary *_hrefToStatus;
}

@property(readonly, nonatomic) NSDictionary *hrefToStatus; // @synthesize hrefToStatus=_hrefToStatus;
@property(readonly, nonatomic) NSDictionary *uuidToStatus; // @synthesize uuidToStatus=_uuidToStatus;
@property(readonly, nonatomic) NSDictionary *hrefToErrorItems; // @synthesize hrefToErrorItems=_hrefToErrorItems;
@property(readonly, nonatomic) NSDictionary *uuidToErrorItems; // @synthesize uuidToErrorItems=_uuidToErrorItems;
@property(readonly, nonatomic) NSDictionary *hrefToETag; // @synthesize hrefToETag=_hrefToETag;
@property(readonly, nonatomic) NSDictionary *uuidToHREF; // @synthesize uuidToHREF=_uuidToHREF;
@property(readonly, nonatomic) NSString *nextCTag; // @synthesize nextCTag=_nextCTag;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)fillOutDataWithUUIDsToAddActions:(id)arg1 hrefsToModDeleteActions:(id)arg2;
- (id)requestBody;
- (id)httpMethod;
- (id)additionalHeaderValues;
- (void)dealloc;
- (id)initWithURL:(id)arg1 checkCTag:(id)arg2 uuidsToAddActions:(id)arg3 hrefsToModDeleteActions:(id)arg4;

@end

