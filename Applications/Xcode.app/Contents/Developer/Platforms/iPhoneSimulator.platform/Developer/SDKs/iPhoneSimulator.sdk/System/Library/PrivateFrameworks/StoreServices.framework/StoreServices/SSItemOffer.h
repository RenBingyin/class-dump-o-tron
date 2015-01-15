//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSMutableDictionary, NSSet, NSString, SSDialog, SSItem, SSItemMedia, SSNetworkConstraints;

@interface SSItemOffer : NSObject <NSCopying>
{
    SSItem *_item;
    NSMutableDictionary *_offerDictionary;
    NSString *_offerIdentifier;
    NSArray *_supportedDevices;
}

+ (id)_preferredOfferIdentifiers;
@property(nonatomic, getter=_offerItem, setter=_setOfferItem:) SSItem *_offerItem; // @synthesize _offerItem=_item;
@property(readonly, nonatomic) NSString *offerIdentifier; // @synthesize offerIdentifier=_offerIdentifier;
@property(readonly, nonatomic) _Bool shouldShowPlusIcon;
- (void)setPriceDisplay:(id)arg1;
- (void)setOneTapOffer:(_Bool)arg1;
- (void)setBuyParameters:(id)arg1;
- (void)setActionDisplayName:(id)arg1;
@property(readonly, nonatomic) id requiredSoftwareCapabilities;
@property(readonly, nonatomic) long long estimatedDiskSpaceNeeded;
@property(readonly, nonatomic) NSString *actionType;
@property(readonly, nonatomic) NSSet *accountIdentifiers;
- (id)valueForProperty:(id)arg1;
@property(readonly, nonatomic) NSArray *supportedDevices;
@property(readonly, nonatomic) SSDialog *successDialog;
@property(readonly, nonatomic) NSString *priceDisplay;
- (id)playableMedia;
@property(readonly, nonatomic) SSItemMedia *offerMedia;
@property(readonly, nonatomic) SSNetworkConstraints *networkConstraints;
@property(readonly, nonatomic, getter=isPreorder) _Bool preorder;
@property(readonly, nonatomic, getter=isOneTapOffer) _Bool oneTapOffer;
- (id)documentUTI;
- (id)documentRequiredHandlers;
- (id)documentCannotOpenDialog;
@property(readonly, nonatomic) SSDialog *confirmationDialog;
@property(readonly, nonatomic) NSString *buyParameters;
- (id)allowedToneStyles;
@property(readonly, nonatomic) NSString *actionDisplayName;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithOfferIdentifier:(id)arg1 dictionary:(id)arg2;
- (id)init;

@end

