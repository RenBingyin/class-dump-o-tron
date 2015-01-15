//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface CKPCSDiagnosticInformation : NSObject <NSSecureCoding>
{
    NSString *_identityInfo;
    NSString *_serviceIdentityInfo;
    NSMutableDictionary *_pcsInfoByZoneID;
    NSMutableArray *_notFoundZoneIDs;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableArray *notFoundZoneIDs; // @synthesize notFoundZoneIDs=_notFoundZoneIDs;
@property(retain, nonatomic) NSMutableDictionary *pcsInfoByZoneID; // @synthesize pcsInfoByZoneID=_pcsInfoByZoneID;
@property(retain, nonatomic) NSString *serviceIdentityInfo; // @synthesize serviceIdentityInfo=_serviceIdentityInfo;
@property(retain, nonatomic) NSString *identityInfo; // @synthesize identityInfo=_identityInfo;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

