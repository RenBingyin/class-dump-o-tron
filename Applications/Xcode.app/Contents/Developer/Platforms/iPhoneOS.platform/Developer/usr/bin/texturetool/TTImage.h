//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface TTImage : NSObject
{
    NSData *m_data;
    NSData *m_encodedData;
    unsigned int m_compressedFormat;
    int m_width;
    int m_height;
    int m_bitsPerComponent;
    int m_bitsPerPixel;
    int m_bytesPerRow;
    unsigned int m_alphaInfo;
}

+ (id)newImageFromPath:(id)arg1;
@property(readonly) unsigned int compressedFormat; // @synthesize compressedFormat=m_compressedFormat;
@property(readonly) int bytesPerRow; // @synthesize bytesPerRow=m_bytesPerRow;
@property(readonly) int bitsPerPixel; // @synthesize bitsPerPixel=m_bitsPerPixel;
@property(readonly) int bitsPerComponent; // @synthesize bitsPerComponent=m_bitsPerComponent;
@property(readonly) int height; // @synthesize height=m_height;
@property(readonly) int width; // @synthesize width=m_width;
@property(readonly) unsigned int alphaInfo; // @synthesize alphaInfo=m_alphaInfo;
@property(readonly) NSData *encodedData; // @synthesize encodedData=m_encodedData;
@property(readonly) NSData *data; // @synthesize data=m_data;
- (void).cxx_destruct;
- (BOOL)saveImageToPath:(id)arg1;
- (BOOL)errorFromImage:(id)arg1 results:(CDStruct_0586a759 *)arg2;
- (double)rmsErrorFromImage:(id)arg1;
- (id)differenceImageFromImage:(id)arg1;
- (BOOL)isPremultiplied;
- (BOOL)hasAlpha;
- (id)initWithImageData:(id)arg1 encodedRepresentation:(id)arg2 width:(int)arg3 height:(int)arg4 alphaInfo:(unsigned int)arg5 compressedFormat:(unsigned int)arg6;
- (id)initWithImageData:(id)arg1 width:(int)arg2 height:(int)arg3 alphaInfo:(unsigned int)arg4;
- (id)initWithCGImage:(struct CGImage *)arg1;

@end

