//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesPackage/AbstractElement.h>

@class BookDescriptionElement, BookEmbedElement, BookVersionElement, NSArray, NSNumber, NSString;

@interface BookMetadataElementBase : AbstractElement
{
    NSString *_publicationType;
    NSArray *_identifiers;
    NSArray *_relatedContentItems;
    NSArray *_series;
    NSString *_title;
    NSString *_phoneticTitle;
    NSString *_subtitle;
    NSString *_phoneticSubtitle;
    NSArray *_contributors;
    NSArray *_languages;
    NSString *_numberOfPages;
    NSArray *_subjects;
    BookDescriptionElement *_contentDescription;
    NSString *_imprint;
    NSString *_publisher;
    NSNumber *_preorderPreviews;
    NSNumber *_explicitContent;
    NSString *_publicationDate;
    BookEmbedElement *_embed;
    NSArray *_products;
    NSArray *_audiences;
    BookVersionElement *_versionWhatsNew;
    NSNumber *_multitouchExpected;
}

+ (id)allKnownKeyPaths;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
@property(retain, nonatomic) NSNumber *multitouchExpected;
@property(retain, nonatomic) BookVersionElement *versionWhatsNew;
@property(retain, nonatomic) NSArray *audiences;
@property(retain, nonatomic) NSArray *products;
@property(retain, nonatomic) BookEmbedElement *embed;
@property(retain, nonatomic) NSString *publicationDate;
@property(retain, nonatomic) NSNumber *explicitContent;
@property(retain, nonatomic) NSNumber *preorderPreviews;
@property(retain, nonatomic) NSString *publisher;
@property(retain, nonatomic) NSString *imprint;
@property(retain, nonatomic) BookDescriptionElement *contentDescription;
@property(retain, nonatomic) NSArray *subjects;
@property(retain, nonatomic) NSString *numberOfPages;
@property(retain, nonatomic) NSArray *languages;
@property(retain, nonatomic) NSArray *contributors;
@property(retain, nonatomic) NSString *phoneticSubtitle;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *phoneticTitle;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSArray *series;
@property(retain, nonatomic) NSArray *relatedContentItems;
@property(retain, nonatomic) NSArray *identifiers;
@property(retain, nonatomic) NSString *publicationType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

