//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUIItem;

@interface SKUIGiftTemplateViewElement : SKUIViewElement
{
    long long _giftType;
    NSString *_productBuyParams;
    long long _productItemIdentifier;
}

@property(readonly, nonatomic) long long giftType; // @synthesize giftType=_giftType;
- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) SKUIItem *productItem;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

