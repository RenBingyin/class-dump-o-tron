//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@class HMHomeManager, NSString;

@interface TCCAccessController : PSListController
{
    struct __CFString *_serviceKey;
    _Bool _iCloudURLIsReachable;
    NSString *_footer;
    NSString *_header;
    NSString *_explanation;
    HMHomeManager *_homeManager;
    struct __SCNetworkReachability *_reachability;
}

+ (_Bool)isServiceRestricted:(id)arg1;
@property(nonatomic) _Bool iCloudURLIsReachable; // @synthesize iCloudURLIsReachable=_iCloudURLIsReachable;
@property(nonatomic) struct __SCNetworkReachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(copy, nonatomic) NSString *explanation; // @synthesize explanation=_explanation;
@property(copy, nonatomic) NSString *header; // @synthesize header=_header;
@property(copy, nonatomic) NSString *footer; // @synthesize footer=_footer;
- (void)updateSpecifiersForImposedSettings;
- (void)_resetWillowData;
- (void)_confirmResetWillowData;
- (id)accesssForSpecifier:(id)arg1;
- (void)setAccess:(id)arg1 forSpecifier:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)specifiers;
- (void)setSpecifier:(id)arg1;
- (void)dealloc;
- (id)init;

@end

