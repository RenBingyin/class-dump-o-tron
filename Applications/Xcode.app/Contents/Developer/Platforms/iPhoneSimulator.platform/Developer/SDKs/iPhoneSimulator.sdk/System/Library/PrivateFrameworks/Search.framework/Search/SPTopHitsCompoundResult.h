//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SPContentResult;

@interface SPTopHitsCompoundResult : NSObject
{
    SPContentResult *_content;
    unsigned int _domain;
    NSString *_displayIdentifier;
}

- (void)dealloc;
- (id)displayIdentifier;
- (unsigned int)domain;
- (id)content;
- (id)initWithContent:(id)arg1 domain:(unsigned int)arg2 displayIdentifier:(id)arg3;

@end

