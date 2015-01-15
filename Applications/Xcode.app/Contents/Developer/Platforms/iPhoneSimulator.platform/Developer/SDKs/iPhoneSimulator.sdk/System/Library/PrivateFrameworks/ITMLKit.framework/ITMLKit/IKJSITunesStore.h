//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import "IKJSITunesStore.h"

@class ISLoadURLBagOperation, NSDictionary, NSNumber, NSString, SSMetricsController;

@interface IKJSITunesStore : IKJSObject <IKJSITunesStore>
{
    NSNumber *_lastAccountDSID;
    SSMetricsController *_metricsController;
    int _bagOperationLock;
    NSString *_cookieURL;
    ISLoadURLBagOperation *_pendingBagOperation;
}

+ (id)_URLBagContext;
+ (void)setHeadersForURL:(id)arg1 inRequestProperties:(id)arg2;
+ (void)setITunesStoreHeaders:(id)arg1;
@property(nonatomic) __weak ISLoadURLBagOperation *pendingBagOperation; // @synthesize pendingBagOperation=_pendingBagOperation;
@property(retain, nonatomic) NSString *cookieURL; // @synthesize cookieURL=_cookieURL;
- (void).cxx_destruct;
- (void)_updateWithBag:(id)arg1;
- (void)_updateBag:(_Bool)arg1;
- (void)_bagDidLoadNotification:(id)arg1;
- (void)_accountStoreChanged;
- (void)signOut;
- (void)authenticate:(id)arg1:(id)arg2;
- (void)evaluateScripts:(id)arg1:(id)arg2;
- (void)loadStoreContent:(id)arg1:(id)arg2;
- (void)clearCookies;
@property(retain, nonatomic) id cookie;
- (void)flushUnreportedEvents;
- (void)recordEvent:(id)arg1:(id)arg2;
- (id)makeStoreXMLHttpRequest;
- (void)invalidateBag;
- (id)getBag;
@property(retain, nonatomic) NSString *storefront;
@property(readonly, nonatomic) NSString *networkConnectionType;
@property(readonly, nonatomic) NSString *userAgent;
@property(readonly, nonatomic) NSDictionary *accountInfo;
@property(readonly, nonatomic) NSString *DSID;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1;

@end

