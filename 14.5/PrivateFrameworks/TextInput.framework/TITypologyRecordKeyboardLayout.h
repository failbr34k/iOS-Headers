//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TITypologyRecord.h>

@class NSString, TIKeyboardLayout;

@interface TITypologyRecordKeyboardLayout : TITypologyRecord
{
    TIKeyboardLayout *_keyboardLayout;
    NSString *_name;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) TIKeyboardLayout *keyboardLayout; // @synthesize keyboardLayout=_keyboardLayout;
- (id)shortDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

