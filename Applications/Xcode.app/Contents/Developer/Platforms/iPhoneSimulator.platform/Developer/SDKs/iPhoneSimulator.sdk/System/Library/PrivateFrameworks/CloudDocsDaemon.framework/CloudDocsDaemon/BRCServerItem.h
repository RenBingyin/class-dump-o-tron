//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BRCItem.h"

@class BRCItemID, BRCServerContainer, BRCStatInfo, BRCVersion, NSNumber, NSString;

@interface BRCServerItem : NSObject <BRCItem>
{
    _Bool _needsInsert;
    BRCItemID *_itemID;
    NSString *_originalName;
    NSNumber *_rank;
    BRCStatInfo *_st;
    BRCVersion *_latestVersion;
    BRCServerContainer *_container;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) BRCServerContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic) BRCVersion *latestVersion; // @synthesize latestVersion=_latestVersion;
@property(readonly, nonatomic) BRCStatInfo *st; // @synthesize st=_st;
@property(readonly, nonatomic) NSNumber *rank; // @synthesize rank=_rank;
@property(readonly, nonatomic) NSString *originalName; // @synthesize originalName=_originalName;
@property(readonly, nonatomic) BRCItemID *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
- (unsigned long long)diffAgainstServerItem:(id)arg1;
- (_Bool)validateLoggingToFile:(struct __sFILE *)arg1;
- (id)initFromPQLResultSet:(id)arg1 container:(id)arg2 error:(id *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerItem:(id)arg1;
@property(readonly, nonatomic) _Bool isDocument;
@property(readonly, nonatomic) _Bool isDirectory;
@property(readonly, nonatomic) _Bool isAlias;
@property(readonly, nonatomic) _Bool isDead;
@property(readonly, nonatomic) _Bool isLive;

@end

