//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface SPSearchQuery : NSObject <NSCopying>
{
    unsigned long long _queryID;
    NSString *_searchString;
    _Bool _cancelled;
    _Bool _finished;
    NSArray *_searchDomains;
    int _nextDomainIndex;
    double _creationTime;
    double _cancellationTime;
    _Bool _extendedTime;
}

@property(nonatomic) _Bool extendedTime; // @synthesize extendedTime=_extendedTime;
@property(readonly, nonatomic) NSArray *searchDomains; // @synthesize searchDomains=_searchDomains;
@property(readonly, nonatomic) double cancellationTime; // @synthesize cancellationTime=_cancellationTime;
@property(readonly, nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
@property(readonly, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithSearchString:(id)arg1;
- (id)initWithSearchString:(id)arg1 forSearchDomains:(id)arg2;
- (void)cancel;
@property(readonly, nonatomic) _Bool cancelled;

@end

