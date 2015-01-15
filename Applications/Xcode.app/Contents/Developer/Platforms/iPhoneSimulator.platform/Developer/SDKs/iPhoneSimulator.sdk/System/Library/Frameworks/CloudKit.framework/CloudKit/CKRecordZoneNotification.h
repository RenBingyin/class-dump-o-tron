//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKNotification.h>

#import "NSSecureCoding.h"

@class CKRecordZoneID;

@interface CKRecordZoneNotification : CKNotification <NSSecureCoding>
{
    CKRecordZoneID *_recordZoneID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) CKRecordZoneID *recordZoneID; // @synthesize recordZoneID=_recordZoneID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithRemoteNotificationDictionary:(id)arg1;

@end

