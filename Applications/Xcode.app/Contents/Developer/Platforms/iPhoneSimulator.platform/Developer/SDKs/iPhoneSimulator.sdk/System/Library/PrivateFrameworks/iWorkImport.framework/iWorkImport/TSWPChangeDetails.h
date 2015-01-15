//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSDAnnotationHosting.h"

@class NSDate, NSString, TSDCommentStorage, TSKAnnotationAuthor, TSWPChange;

__attribute__((visibility("hidden")))
@interface TSWPChangeDetails : NSObject <TSDAnnotationHosting>
{
    NSString *mChangeTrackingContentString;
    NSString *mChangeTrackingTitleString;
    TSWPChange *_change;
}

@property(retain, nonatomic) TSWPChange *change; // @synthesize change=_change;
@property(readonly, copy) NSString *description;
- (void)p_updateChangeStrings;
- (void)commitText:(id)arg1;
@property(readonly, nonatomic) int annotationDisplayStringType;
@property(readonly, nonatomic) int annotationType;
@property(readonly, nonatomic) NSString *changeTrackingContentFormatString;
@property(readonly, nonatomic) NSString *changeTrackingTitleString;
@property(readonly, nonatomic) NSString *changeTrackingContentString;
@property(readonly, nonatomic) NSDate *date;
- (void)setAuthor:(id)arg1;
@property(readonly, nonatomic) TSKAnnotationAuthor *author;
@property(nonatomic) id <TSKModel> hostingModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToChangeDetails:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) TSDCommentStorage *storage;
@property(readonly) Class superclass;

@end
