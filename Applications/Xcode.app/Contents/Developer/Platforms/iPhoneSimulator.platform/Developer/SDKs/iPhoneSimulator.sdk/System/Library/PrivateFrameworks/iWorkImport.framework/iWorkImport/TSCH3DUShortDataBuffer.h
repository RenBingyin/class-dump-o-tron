//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DVectorDataBuffer.h>

__attribute__((visibility("hidden")))
@interface TSCH3DUShortDataBuffer : TSCH3DVectorDataBuffer
{
    vector_a3e57ab7 mContainer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (id)elementsAtIndices:(id)arg1;
- (unsigned long long)componentByteSize;
- (unsigned long long)components;
- (int)componentType;
- (unsigned long long)count;
- (void)fillCapacity;
- (const void *)data;
@property(readonly, nonatomic) vector_a3e57ab7 *container;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

