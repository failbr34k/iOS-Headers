//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Espresso/ETDataSource-Protocol.h>

@interface ETDataSourceBlobF4 : NSObject <ETDataSource>
{
    struct map<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4>>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4>>>>> blobs;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)numberOfDataPoints;
- (id)dataPointAtIndex:(int)arg1;
- (void)addBlob:(id)arg1 forKey:(id)arg2;

@end

