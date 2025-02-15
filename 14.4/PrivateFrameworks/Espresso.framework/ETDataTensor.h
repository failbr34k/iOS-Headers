//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface ETDataTensor : NSObject
{
    void *_dataPointer;
    NSArray *_dataArray;
    unsigned long long _type;
    NSArray *_shape;
    NSArray *_strides;
    NSNumber *_maxNumberOfElements;
    shared_ptr_acd4b298 _blob;
    vector_fc1f6154 _allocatedImageData;
    struct float_buffer_t _float_buffer;
    struct vImage_Buffer _imageBuffer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property shared_ptr_acd4b298 blob; // @synthesize blob=_blob;
@property struct float_buffer_t float_buffer; // @synthesize float_buffer=_float_buffer;
@property vector_fc1f6154 allocatedImageData; // @synthesize allocatedImageData=_allocatedImageData;
@property struct vImage_Buffer imageBuffer; // @synthesize imageBuffer=_imageBuffer;
@property(retain, nonatomic) NSNumber *maxNumberOfElements; // @synthesize maxNumberOfElements=_maxNumberOfElements;
@property(retain, nonatomic) NSArray *strides; // @synthesize strides=_strides;
@property(retain, nonatomic) NSArray *shape; // @synthesize shape=_shape;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) void *dataPointer; // @synthesize dataPointer=_dataPointer;
- (id)description;
- (id)initWithBlobContainer:(shared_ptr_f15d0389)arg1;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 imageParameters:(id)arg2 error:(id *)arg3;
- (id)initWithData:(void *)arg1 type:(unsigned long long)arg2 shape:(id)arg3 strides:(id)arg4;

@end

