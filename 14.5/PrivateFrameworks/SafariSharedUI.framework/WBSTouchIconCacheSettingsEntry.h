//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariSharedUI/WBSSiteMetadataImageCacheSettingsEntry-Protocol.h>

@class NSDate, NSString;

@interface WBSTouchIconCacheSettingsEntry : NSObject <WBSSiteMetadataImageCacheSettingsEntry>
{
    _Bool _lastRequestWasInUserLoadedWebpage;
    _Bool _iconInCache;
    _Bool _requestDidSucceed;
    _Bool _higherPriorityIconDownloadFailedDueToNetworkError;
    long long _databaseID;
    NSString *_host;
    NSString *_UUIDString;
    NSDate *_lastRequestDate;
    long long _requestCount;
    long long _transparencyAnalysisResult;
    long long _lastResponseStatusCode;
}

+ (id)entryWithHost:(id)arg1 lastRequestDate:(id)arg2 lastRequestWasInUserLoadedWebpage:(_Bool)arg3 requestCount:(long long)arg4 iconInCache:(_Bool)arg5 requestDidSucceed:(_Bool)arg6 lastResponseStatusCode:(long long)arg7 transparencyAnalysisResult:(long long)arg8 higherPriorityIconDownloadFailedDueToNetworkError:(_Bool)arg9 UUIDString:(id)arg10;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long lastResponseStatusCode; // @synthesize lastResponseStatusCode=_lastResponseStatusCode;
@property(readonly, nonatomic) _Bool higherPriorityIconDownloadFailedDueToNetworkError; // @synthesize higherPriorityIconDownloadFailedDueToNetworkError=_higherPriorityIconDownloadFailedDueToNetworkError;
@property(readonly, nonatomic) long long transparencyAnalysisResult; // @synthesize transparencyAnalysisResult=_transparencyAnalysisResult;
@property(readonly, nonatomic) _Bool requestDidSucceed; // @synthesize requestDidSucceed=_requestDidSucceed;
@property(readonly, nonatomic, getter=isIconInCache) _Bool iconInCache; // @synthesize iconInCache=_iconInCache;
@property(readonly, nonatomic) long long requestCount; // @synthesize requestCount=_requestCount;
@property(readonly, nonatomic) _Bool lastRequestWasInUserLoadedWebpage; // @synthesize lastRequestWasInUserLoadedWebpage=_lastRequestWasInUserLoadedWebpage;
@property(readonly, nonatomic) NSDate *lastRequestDate; // @synthesize lastRequestDate=_lastRequestDate;
@property(readonly, copy, nonatomic) NSString *UUIDString; // @synthesize UUIDString=_UUIDString;
@property(readonly, copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(readonly, nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)entryByAddingRequestInUserLoadedWebPage:(_Bool)arg1 isIconInCache:(_Bool)arg2 requestDidSucceed:(_Bool)arg3 lastResponseStatusCode:(long long)arg4 transparencyAnalysisResult:(long long)arg5 higherPriorityIconDownloadFailedDueToNetworkError:(_Bool)arg6 UUIDString:(id)arg7;
@property(readonly, nonatomic) unsigned long long downloadStatusFlags;
- (id)entryWithDatabaseID:(long long)arg1;
- (id)initWithHost:(id)arg1 lastRequestDate:(id)arg2 lastRequestWasInUserLoadedWebpage:(_Bool)arg3 requestCount:(long long)arg4 iconInCache:(_Bool)arg5 requestDidSucceed:(_Bool)arg6 lastResponseStatusCode:(long long)arg7 transparencyAnalysisResult:(long long)arg8 higherPriorityIconDownloadFailedDueToNetworkError:(_Bool)arg9 UUIDString:(id)arg10;
- (id)initWithSQLiteRow:(id)arg1;
- (id)initWithHost:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

