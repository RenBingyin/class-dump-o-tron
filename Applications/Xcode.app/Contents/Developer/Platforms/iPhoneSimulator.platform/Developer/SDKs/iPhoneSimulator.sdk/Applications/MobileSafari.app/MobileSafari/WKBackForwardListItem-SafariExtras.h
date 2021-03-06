//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKBackForwardListItem.h"

#import "BackForwardListItem.h"

@class NSString, NSURL, QuickLookDocument, SecurityInfo;

@interface WKBackForwardListItem (SafariExtras) <BackForwardListItem>
@property(nonatomic, setter=safari_setNavigationSnapshotRequiresBars:) _Bool safari_navigationSnapshotRequiresBars;
@property(retain, nonatomic, setter=safari_setQuickLookDocument:) QuickLookDocument *safari_quickLookDocument;
@property(readonly) NSString *originalURLString;
@property(readonly) NSString *URLString;
@property(retain, nonatomic, setter=_setSecurityInfo:) SecurityInfo *_securityInfo;
@property(copy, nonatomic, setter=_setSharedLinkUniqueIdentifier:) NSString *_sharedLinkUniqueIdentifier;
@property(nonatomic, setter=_setBookmarkID:) unsigned int _bookmarkID;

// Remaining properties
@property(readonly) NSURL *URL;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) NSString *title;
@end

