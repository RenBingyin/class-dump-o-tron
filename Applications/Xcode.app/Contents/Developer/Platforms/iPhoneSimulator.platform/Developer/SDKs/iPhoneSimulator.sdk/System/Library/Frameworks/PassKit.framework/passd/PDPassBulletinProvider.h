//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PDBulletinProvider.h"

@class NSData, NSMutableDictionary, NSString;

@interface PDPassBulletinProvider : PDBulletinProvider
{
    NSData *_iconImageData;
    NSMutableDictionary *_passUpdateBulletinRecords;
    NSMutableDictionary *_transactionBulletinRecords;
    NSString *_sectionIdentifier;
    NSString *_sectionTitle;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(readonly, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
- (void)_removeBulletinForTransactionRecord:(id)arg1;
- (void)_removeBulletinForPassUpdateRecord:(id)arg1;
- (void)_insertOrUpdateBulletinForTransactionRecord:(id)arg1;
- (void)_insertOrUpdateBulletinForPassUpdateRecord:(id)arg1 pass:(id)arg2;
- (id)diffForBulletinRecordID:(id)arg1;
- (void)removeBulletinsForPass:(id)arg1;
- (void)insertOrUpdateTransactionBulletinForPass:(id)arg1 withPaymentTransaction:(id)arg2;
- (void)insertOrUpdatePassUpdateBulletinForPass:(id)arg1 withDiff:(id)arg2;
- (void)cullBulletinsToCount:(unsigned long long)arg1;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (id)defaultSectionInfo;
- (id)sectionIcon;
- (id)sectionParameters;
- (id)parentSectionIdentifier;
- (id)universalSectionIdentifier;
- (id)sectionDisplayName;
- (void)removeAllBulletins;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 sectionIdentifier:(id)arg2 sectionTitle:(id)arg3 iconImage:(id)arg4;
- (id)initWithDelegate:(id)arg1;

@end

