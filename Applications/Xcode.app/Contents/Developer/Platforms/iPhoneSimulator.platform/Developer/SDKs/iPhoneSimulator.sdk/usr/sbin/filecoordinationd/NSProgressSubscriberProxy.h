//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSProgressSubscriber.h"

@class NSFileAccessNode, NSString;

@interface NSProgressSubscriberProxy : NSObject <NSProgressSubscriber>
{
    id <NSProgressSubscriber> _forwarder;
    id _subscriberID;
    NSString *_lowerCaseAppBundleID;
    NSString *_lowerCaseCategoryName;
    NSFileAccessNode *_itemLocation;
}

@property(copy) NSString *category; // @synthesize category=_lowerCaseCategoryName;
@property(readonly, copy) NSString *description;
- (id)descriptionWithIndenting:(id)arg1;
- (oneway void)removePublisherForID:(id)arg1;
- (oneway void)observePublisherForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 inUserInfo:(_Bool)arg4;
- (oneway void)addPublisher:(id)arg1 forID:(id)arg2 withValues:(id)arg3 isOld:(_Bool)arg4;
@property NSFileAccessNode *itemLocation;
- (id)appBundleID;
- (void)dealloc;
- (id)initWithForwarder:(id)arg1 subscriberID:(id)arg2 appBundleID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

