//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAUIHtmlView : SAAceView
{
}

+ (id)htmlViewWithDictionary:(id)arg1 context:(id)arg2;
+ (id)htmlView;
@property(copy, nonatomic) NSString *html;
@property(copy, nonatomic) NSString *descriptionText;
@property(copy, nonatomic) NSArray *commands;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

