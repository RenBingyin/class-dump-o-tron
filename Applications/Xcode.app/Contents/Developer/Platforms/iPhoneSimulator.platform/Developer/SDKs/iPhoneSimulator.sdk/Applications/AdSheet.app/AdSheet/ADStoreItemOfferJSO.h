//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADStoreItemOfferJSO_Bindings.h"

@class NSString;

@interface ADStoreItemOfferJSO : NSObject <ADStoreItemOfferJSO_Bindings>
{
    _Bool _preorder;
    NSString *_identifier;
    NSString *_price;
    NSString *_action;
}

@property(readonly, nonatomic) _Bool preorder; // @synthesize preorder=_preorder;
@property(readonly, nonatomic) NSString *action; // @synthesize action=_action;
@property(readonly, nonatomic) NSString *price; // @synthesize price=_price;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithSSItemOffer:(id)arg1;
- (void)dealloc;

@end

