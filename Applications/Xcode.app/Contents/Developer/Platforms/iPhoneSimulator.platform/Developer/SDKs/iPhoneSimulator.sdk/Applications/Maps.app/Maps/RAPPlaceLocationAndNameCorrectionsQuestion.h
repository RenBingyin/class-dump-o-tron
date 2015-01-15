//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RAPQuestion.h"

@class NSString, RAPCommentQuestion, RAPPlaceCorrectableString, UIImage;

__attribute__((visibility("hidden")))
@interface RAPPlaceLocationAndNameCorrectionsQuestion : RAPQuestion
{
    _Bool _nameCorrectionWasOffered;
    RAPPlaceCorrectableString *_correctableName;
    UIImage *_photo;
    RAPCommentQuestion *_commentQuestion;
    CDStruct_2c43369c _coordinate;
}

@property(retain, nonatomic) UIImage *photo; // @synthesize photo=_photo;
@property(nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, nonatomic) RAPPlaceCorrectableString *correctableName; // @synthesize correctableName=_correctableName;
@property(nonatomic) _Bool nameCorrectionWasOffered; // @synthesize nameCorrectionWasOffered=_nameCorrectionWasOffered;
- (void).cxx_destruct;
@property(readonly, nonatomic) RAPCommentQuestion *commentQuestion; // @synthesize commentQuestion=_commentQuestion;
- (void)_fillSubmittableProblem:(id)arg1;
@property(readonly, nonatomic) CDStruct_02837cd9 initialPlaceDisplayMapRect;
@property(readonly, nonatomic) CDStruct_02837cd9 initialLocationPickingMapRect;
@property(readonly, nonatomic) NSString *localizedGeotaggedPhotoExplanation;
@property(readonly, nonatomic) NSString *localizedLocationPickingPrompt;
- (_Bool)isComplete;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2;

@end

