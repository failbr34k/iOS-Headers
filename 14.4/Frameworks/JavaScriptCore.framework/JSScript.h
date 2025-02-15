//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface JSScript : NSObject
{
    struct WeakObjCPtr<JSVirtualMachine> m_virtualMachine;
    long long m_type;
    struct MappedFileData m_mappedSource;
    struct String m_source;
    struct RetainPtr<NSURL> m_sourceURL;
    struct RetainPtr<NSURL> m_cachePath;
    RefPtr_cd332c91 m_cachedBytecode;
}

+ (id)scriptOfType:(long long)arg1 memoryMappedFromASCIIFile:(id)arg2 withSourceURL:(id)arg3 andBytecodeCache:(id)arg4 inVirtualMachine:(id)arg5 error:(out id *)arg6;
+ (id)scriptOfType:(long long)arg1 withSource:(id)arg2 andSourceURL:(id)arg3 andBytecodeCache:(id)arg4 inVirtualMachine:(id)arg5 error:(out id *)arg6;
- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)type;
- (id)sourceURL;
- (_Bool)isUsingBytecodeCache;
- (_Bool)cacheBytecodeWithError:(id *)arg1;
- (void)readCache;
- (_Bool)writeCache:(struct String *)arg1;
- (struct JSSourceCode *)jsSourceCode;
- (struct SourceCode)sourceCode;
- (RefPtr_cd332c91)cachedBytecode;
- (const struct String *)source;
- (unsigned int)hash;
- (id)init;

@end

