//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInputCore/TILanguageModelOfflineLearningTask.h>

@class NSCharacterSet, NSSet;

@interface TILanguageModelOfflineLearningTaskMail : TILanguageModelOfflineLearningTask
{
    NSCharacterSet *_linePaddingCharacters;
    NSSet *_forwardedMessageSeparators;
    id <TILinguisticDataSource> _dataSource;
}

- (id)dataSource;
- (id)forwardedMessageSeparators;
- (id)linePaddingCharacters;
- (id)initWithClientIdentifier:(id)arg1;
- (void)dealloc;

@end

