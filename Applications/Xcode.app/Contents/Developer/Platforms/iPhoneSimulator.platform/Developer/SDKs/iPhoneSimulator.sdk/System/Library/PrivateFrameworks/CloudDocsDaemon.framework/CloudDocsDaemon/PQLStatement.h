//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface PQLStatement : NSObject
{
    struct sqlite3_stmt *_stmt;
    int _specLength;
    unsigned char *_spec;
    PQLStatement *_next;
    _Bool _inUse;
    _Bool _isTraced;
}

- (void).cxx_destruct;
- (void)unbind;
- (void)bindArguments:(struct __va_list_tag [1])arg1;
- (id)description;
- (void)dealloc;
- (void)invalidate;
- (id)initWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2 db:(id)arg3 cache:(struct cache_s *)arg4;
- (id)initWithStatement:(id)arg1 forDB:(id)arg2;
- (_Bool)_prepare:(const char *)arg1 withDB:(id)arg2;
- (id)translate:(id)arg1 hasInjections:(_Bool *)arg2 arguments:(struct __va_list_tag [1])arg3;
@property(readonly, nonatomic) _Bool isTraced;

@end

