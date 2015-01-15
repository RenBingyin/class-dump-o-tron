//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableData, NSString, NSURL;

@interface WebFilterEvaluator : NSObject <NSSecureCoding>
{
    unsigned long long _filterState;
    NSURL *_url;
    NSString *_pageTitle;
    NSMutableData *_buffer;
}

+ (_Bool)supportsSecureCoding;
+ (id)createWithResponse:(id)arg1;
+ (_Bool)isManagedSession;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)unblockWithCompletion:(CDUnknownBlockType)arg1;
- (void)attemptUnblockWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)wasBlocked;
- (int)filterState;
- (id)dataComplete;
- (id)addData:(id)arg1;
- (void)dealloc;
- (id)initWithResponse:(id)arg1;
- (id)blockPageForPageWithTitle:(id)arg1 origURL:(id)arg2;
- (id)debugPageForPageWithData:(id)arg1 forURL:(id)arg2 debugString:(id)arg3;

@end

