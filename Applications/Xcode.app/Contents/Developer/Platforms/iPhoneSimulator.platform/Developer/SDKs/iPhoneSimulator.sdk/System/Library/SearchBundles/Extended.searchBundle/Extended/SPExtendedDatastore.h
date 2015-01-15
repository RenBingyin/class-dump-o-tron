//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPSearchDatastore.h"

@class NSString;

@interface SPExtendedDatastore : NSObject <SPSearchDatastore>
{
}

- (_Bool)coolDown;
- (id)resultForIdentifier:(id)arg1 domain:(unsigned int)arg2;
- (id)categoryForDomain:(unsigned int)arg1;
- (id)displayIdentifierForDomain:(unsigned int)arg1;
- (id)searchDomains;
- (void)performQuery:(id)arg1 withResultsPipe:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

