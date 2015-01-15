//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface TSCHChartUIState : NSObject <NSCopying>
{
    _Bool _useFullKeyboard;
    unsigned long long _lastRowSelectedInCDE;
    unsigned long long _lastRowCountInCDE;
    unsigned long long _lastColSelectedInCDE;
    unsigned long long _lastColCountInCDE;
}

@property(readonly, nonatomic) _Bool useFullKeyboard; // @synthesize useFullKeyboard=_useFullKeyboard;
@property(readonly, nonatomic) unsigned long long lastColCountInCDE; // @synthesize lastColCountInCDE=_lastColCountInCDE;
@property(readonly, nonatomic) unsigned long long lastColSelectedInCDE; // @synthesize lastColSelectedInCDE=_lastColSelectedInCDE;
@property(readonly, nonatomic) unsigned long long lastRowCountInCDE; // @synthesize lastRowCountInCDE=_lastRowCountInCDE;
@property(readonly, nonatomic) unsigned long long lastRowSelectedInCDE; // @synthesize lastRowSelectedInCDE=_lastRowSelectedInCDE;
- (void)saveToArchive:(struct ChartUIState *)arg1;
- (id)initWithArchive:(const struct ChartUIState *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithRowRange:(struct _NSRange)arg1 colRange:(struct _NSRange)arg2 useFullKeyboard:(_Bool)arg3;
- (id)init;

@end

