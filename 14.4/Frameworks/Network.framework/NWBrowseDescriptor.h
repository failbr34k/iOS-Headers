//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Network/NWPrettyDescription-Protocol.h>

@class NSString;
@protocol OS_nw_browse_descriptor;

@interface NWBrowseDescriptor : NSObject <NWPrettyDescription>
{
    NSObject<OS_nw_browse_descriptor> *_internalDescriptor;
}

+ (id)descriptorWithProtocolBufferData:(id)arg1;
+ (_Bool)supportsBrowseCallback;
+ (id)descriptorWithInternalDescriptor:(id)arg1;
+ (Class)copyClassForDescriptorType:(int)arg1;
+ (unsigned int)descriptorType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_nw_browse_descriptor> *internalDescriptor; // @synthesize internalDescriptor=_internalDescriptor;
- (id)createProtocolBufferObject;
- (id)encodedData;
- (id)initWithEncodedData:(id)arg1;
- (void)browseWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDescriptor:(id)arg1;
@property(readonly, nonatomic) NSString *bonjourServiceType;
@property(readonly, nonatomic) NSString *bonjourServiceDomain;

@end

