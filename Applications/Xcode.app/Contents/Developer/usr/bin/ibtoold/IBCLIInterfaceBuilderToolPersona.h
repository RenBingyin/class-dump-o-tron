//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBCLIServerPersona.h"

@interface IBCLIInterfaceBuilderToolPersona : IBCLIServerPersona
{
}

+ (void)configureSharedProcessState;
- (int)runSingleInvocation:(id)arg1 outputtingToFileHandle:(id)arg2 andVerifyingEnvironment:(char *)arg3;
- (id)produceHumanReadableOutputForOutputEntry:(id)arg1 key:(id)arg2 args:(id)arg3;
- (id)toolName;
- (id)orderedHumanReadableOutputKeys;
- (id)init;
- (void)invokeArguments:(id)arg1 outputDictionary:(id)arg2;

@end

