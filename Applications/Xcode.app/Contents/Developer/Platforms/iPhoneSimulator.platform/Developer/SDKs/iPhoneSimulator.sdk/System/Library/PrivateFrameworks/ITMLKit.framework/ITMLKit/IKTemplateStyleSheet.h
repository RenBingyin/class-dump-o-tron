//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IKStyleFactory, IKViewElementStyle, NSDictionary, NSMutableDictionary;

@interface IKTemplateStyleSheet : NSObject
{
    IKViewElementStyle *_globalStyle;
    IKStyleFactory *_styleFactory;
    NSDictionary *_templateTree;
    NSMutableDictionary *_templateKeyPathMap;
}

+ (id)_templateTreeNodeWithXMLNode:(struct _xmlNode *)arg1;
+ (id)styleSheetForTemplateName:(id)arg1;
+ (void)registerStyleSheetURL:(id)arg1 forTemplateName:(id)arg2;
@property(readonly, retain, nonatomic) NSMutableDictionary *templateKeyPathMap; // @synthesize templateKeyPathMap=_templateKeyPathMap;
@property(readonly, copy, nonatomic) NSDictionary *templateTree; // @synthesize templateTree=_templateTree;
@property(readonly, retain, nonatomic) IKStyleFactory *styleFactory; // @synthesize styleFactory=_styleFactory;
@property(readonly, retain, nonatomic) IKViewElementStyle *globalStyle; // @synthesize globalStyle=_globalStyle;
- (void).cxx_destruct;
- (id)styleForElement:(id)arg1;
- (id)initWithData:(id)arg1 error:(id *)arg2;

@end

