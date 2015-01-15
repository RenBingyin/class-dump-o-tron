//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DSAIdentity;

@interface DSAXarSignature : NSObject
{
    struct __xar_signature_t *_signature;
    DSAIdentity *_identity;
}

+ (id)signaturesForArchive:(struct __xar_t *)arg1;
+ (void)setDebug:(BOOL)arg1;
- (void).cxx_destruct;
- (BOOL)isValidForPolicy:(int)arg1;
- (id)certificateSet;
- (id)certificates;
- (id)initWithIdentity:(id)arg1 forArchive:(struct __xar_t *)arg2;
- (id)initWithSignature:(struct __xar_signature_t *)arg1;

@end

