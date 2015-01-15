//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPSpotlightDatastore.h"

@class NSString;

@interface SMSSearchDatastore : NSObject <SPSpotlightDatastore>
{
    unsigned long long _indexCount;
}

- (id)allIdentifiersInCategory:(id)arg1;
- (id)contentToIndexForID:(id)arg1 inCategory:(id)arg2;
- (id)_contentToIndexForID:(id)arg1 inCategory:(id)arg2;
- (id)_parseSpotlightIndentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

