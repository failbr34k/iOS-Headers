//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PFStringUtilities : NSObject
{
}

+ (id)descriptionForMachTimeInterval:(unsigned long long)arg1;
+ (id)descriptionForNSInterval:(unsigned long long)arg1;
+ (id)descriptionForTimeInterval:(double)arg1;
+ (id)LTRString:(id)arg1;
+ (const char *)safeCString:(id)arg1;
+ (id)mapCollection:(id)arg1 transformation:(CDUnknownBlockType)arg2;
+ (id)base64ToHexMapForBase64Strings:(id)arg1;
+ (id)hexToBase64MapForBase64Strings:(id)arg1;
+ (_Bool)isValidHexString:(id)arg1;
+ (id)base64ToHexMapForHexStrings:(id)arg1;
+ (id)hexToBase64MapForHexStrings:(id)arg1;
+ (id)dataForBase64String:(id)arg1;
+ (id)dataForHexString:(id)arg1;
+ (id)hexStringForData:(id)arg1;
+ (id)stringByRemovingInvalidXMLCharactersFromString:(id)arg1;

@end

