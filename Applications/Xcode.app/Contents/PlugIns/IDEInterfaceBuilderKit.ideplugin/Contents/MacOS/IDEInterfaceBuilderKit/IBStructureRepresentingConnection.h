//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBMemberID, NSString;

@interface IBStructureRepresentingConnection : NSObject
{
    IBMemberID *_sourceOID;
    IBMemberID *_destinationOID;
    NSString *_label;
}

@property(copy) NSString *label; // @synthesize label=_label;
@property(copy) IBMemberID *destinationOID; // @synthesize destinationOID=_destinationOID;
@property(copy) IBMemberID *sourceOID; // @synthesize sourceOID=_sourceOID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSourceOID:(id)arg1 destinationOID:(id)arg2 label:(id)arg3;

@end

