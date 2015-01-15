//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SUItem, SUItemList, SUPageSectionGroup, SUStorePageProtocol;

@interface SUStructuredPage : NSObject <NSCopying>
{
    _Bool _artworkShouldFitWidth;
    double _artworkWidth;
    _Bool _didShowDialog;
    long long _displayStyle;
    SUItem *_item;
    SUItemList *_itemList;
    SUStorePageProtocol *_protocol;
    SUPageSectionGroup *_sectionsGroup;
    _Bool _shouldHideSignInButton;
    NSString *_title;
    long long _type;
    _Bool _wantsIndexBar;
}

+ (long long)pageTypeForStorePageString:(id)arg1;
+ (long long)pageTypeForStorePageDictionary:(id)arg1;
@property(readonly, nonatomic) _Bool wantsIndexBar; // @synthesize wantsIndexBar=_wantsIndexBar;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) _Bool shouldHideSignInButton; // @synthesize shouldHideSignInButton=_shouldHideSignInButton;
@property(retain, nonatomic) SUPageSectionGroup *sectionsGroup; // @synthesize sectionsGroup=_sectionsGroup;
@property(retain, nonatomic) SUStorePageProtocol *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) SUItemList *itemList; // @synthesize itemList=_itemList;
@property(retain, nonatomic) SUItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(readonly, nonatomic) _Bool didShowDialog; // @synthesize didShowDialog=_didShowDialog;
@property(readonly, nonatomic) double artworkWidth; // @synthesize artworkWidth=_artworkWidth;
@property(readonly, nonatomic) _Bool artworkShouldFitWidth; // @synthesize artworkShouldFitWidth=_artworkShouldFitWidth;
- (void)_parseTemplateParametersFromDictionary:(id)arg1;
- (void)_parseProtocolFromDictionary:(id)arg1;
- (void)_parseItemsFromDictionary:(id)arg1;
- (long long)_displayStyleForString:(id)arg1;
- (id)_copyItemFromDictionary:(id)arg1;
@property(readonly, nonatomic) _Bool hasDisplayableContent;
- (_Bool)loadFromDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

