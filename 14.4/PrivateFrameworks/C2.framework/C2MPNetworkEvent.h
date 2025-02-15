//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <C2/NSCopying-Protocol.h>

@class C2MPError, NSString;

__attribute__((visibility("hidden")))
@interface C2MPNetworkEvent : PBCodable <NSCopying>
{
    unsigned long long _networkRequestBodyBytesSent;
    unsigned long long _networkResponseBodyBytesReceived;
    unsigned long long _networkStatusCode;
    unsigned long long _reportFrequency;
    unsigned long long _reportFrequencyBase;
    unsigned long long _timestampC2Init;
    unsigned long long _timestampC2Now;
    unsigned long long _timestampC2Start;
    unsigned long long _timestampDnsEnd;
    unsigned long long _timestampDnsStart;
    unsigned long long _timestampRequestEnd;
    unsigned long long _timestampRequestStart;
    unsigned long long _timestampResponseEnd;
    unsigned long long _timestampResponseStart;
    unsigned long long _timestampSslStart;
    unsigned long long _timestampTcpEnd;
    unsigned long long _timestampTcpStart;
    unsigned long long _triggers;
    NSString *_networkConnectionUuid;
    C2MPError *_networkFatalError;
    NSString *_networkHostname;
    NSString *_networkInterfaceIdentifier;
    NSString *_networkNegotiatedTlsProtocolVersion;
    unsigned int _networkPreviousAttemptCount;
    NSString *_networkProtocolName;
    NSString *_networkRemoteAddresssAndPort;
    unsigned int _networkRequestHeaderSize;
    NSString *_networkRequestUri;
    unsigned int _networkResponseHeaderSize;
    NSString *_networkTaskDescription;
    NSString *_optionsDiscretionaryNetworkBehavior;
    NSString *_optionsDuetPreClearedMode;
    NSString *_optionsQualityOfService;
    NSString *_optionsSourceApplicationBundleIdentifier;
    NSString *_optionsSourceApplicationSecondaryIdentifier;
    unsigned int _optionsTimeoutIntervalForRequest;
    unsigned int _optionsTimeoutIntervalForResource;
    _Bool _networkConnectionReused;
    _Bool _networkIsDiscretionary;
    _Bool _optionsAllowExpensiveAccess;
    _Bool _optionsAllowPowerNapScheduling;
    _Bool _optionsAppleIdContext;
    _Bool _optionsOutOfProcess;
    _Bool _optionsOutOfProcessForceDiscretionary;
    _Bool _optionsTlsPinningRequired;
    struct {
        unsigned int networkRequestBodyBytesSent:1;
        unsigned int networkResponseBodyBytesReceived:1;
        unsigned int networkStatusCode:1;
        unsigned int reportFrequency:1;
        unsigned int reportFrequencyBase:1;
        unsigned int timestampC2Init:1;
        unsigned int timestampC2Now:1;
        unsigned int timestampC2Start:1;
        unsigned int timestampDnsEnd:1;
        unsigned int timestampDnsStart:1;
        unsigned int timestampRequestEnd:1;
        unsigned int timestampRequestStart:1;
        unsigned int timestampResponseEnd:1;
        unsigned int timestampResponseStart:1;
        unsigned int timestampSslStart:1;
        unsigned int timestampTcpEnd:1;
        unsigned int timestampTcpStart:1;
        unsigned int triggers:1;
        unsigned int networkPreviousAttemptCount:1;
        unsigned int networkRequestHeaderSize:1;
        unsigned int networkResponseHeaderSize:1;
        unsigned int optionsTimeoutIntervalForRequest:1;
        unsigned int optionsTimeoutIntervalForResource:1;
        unsigned int networkConnectionReused:1;
        unsigned int networkIsDiscretionary:1;
        unsigned int optionsAllowExpensiveAccess:1;
        unsigned int optionsAllowPowerNapScheduling:1;
        unsigned int optionsAppleIdContext:1;
        unsigned int optionsOutOfProcess:1;
        unsigned int optionsOutOfProcessForceDiscretionary:1;
        unsigned int optionsTlsPinningRequired:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *optionsDuetPreClearedMode; // @synthesize optionsDuetPreClearedMode=_optionsDuetPreClearedMode;
@property(retain, nonatomic) NSString *optionsDiscretionaryNetworkBehavior; // @synthesize optionsDiscretionaryNetworkBehavior=_optionsDiscretionaryNetworkBehavior;
@property(nonatomic) _Bool optionsTlsPinningRequired; // @synthesize optionsTlsPinningRequired=_optionsTlsPinningRequired;
@property(nonatomic) _Bool optionsAppleIdContext; // @synthesize optionsAppleIdContext=_optionsAppleIdContext;
@property(retain, nonatomic) NSString *optionsSourceApplicationSecondaryIdentifier; // @synthesize optionsSourceApplicationSecondaryIdentifier=_optionsSourceApplicationSecondaryIdentifier;
@property(retain, nonatomic) NSString *optionsSourceApplicationBundleIdentifier; // @synthesize optionsSourceApplicationBundleIdentifier=_optionsSourceApplicationBundleIdentifier;
@property(nonatomic) unsigned int optionsTimeoutIntervalForResource; // @synthesize optionsTimeoutIntervalForResource=_optionsTimeoutIntervalForResource;
@property(nonatomic) unsigned int optionsTimeoutIntervalForRequest; // @synthesize optionsTimeoutIntervalForRequest=_optionsTimeoutIntervalForRequest;
@property(nonatomic) _Bool optionsAllowPowerNapScheduling; // @synthesize optionsAllowPowerNapScheduling=_optionsAllowPowerNapScheduling;
@property(nonatomic) _Bool optionsAllowExpensiveAccess; // @synthesize optionsAllowExpensiveAccess=_optionsAllowExpensiveAccess;
@property(nonatomic) _Bool optionsOutOfProcessForceDiscretionary; // @synthesize optionsOutOfProcessForceDiscretionary=_optionsOutOfProcessForceDiscretionary;
@property(nonatomic) _Bool optionsOutOfProcess; // @synthesize optionsOutOfProcess=_optionsOutOfProcess;
@property(retain, nonatomic) NSString *optionsQualityOfService; // @synthesize optionsQualityOfService=_optionsQualityOfService;
@property(nonatomic) unsigned long long timestampResponseEnd; // @synthesize timestampResponseEnd=_timestampResponseEnd;
@property(nonatomic) unsigned long long timestampResponseStart; // @synthesize timestampResponseStart=_timestampResponseStart;
@property(nonatomic) unsigned long long timestampRequestEnd; // @synthesize timestampRequestEnd=_timestampRequestEnd;
@property(nonatomic) unsigned long long timestampRequestStart; // @synthesize timestampRequestStart=_timestampRequestStart;
@property(nonatomic) unsigned long long timestampSslStart; // @synthesize timestampSslStart=_timestampSslStart;
@property(nonatomic) unsigned long long timestampTcpEnd; // @synthesize timestampTcpEnd=_timestampTcpEnd;
@property(nonatomic) unsigned long long timestampTcpStart; // @synthesize timestampTcpStart=_timestampTcpStart;
@property(nonatomic) unsigned long long timestampDnsEnd; // @synthesize timestampDnsEnd=_timestampDnsEnd;
@property(nonatomic) unsigned long long timestampDnsStart; // @synthesize timestampDnsStart=_timestampDnsStart;
@property(nonatomic) unsigned long long timestampC2Now; // @synthesize timestampC2Now=_timestampC2Now;
@property(nonatomic) unsigned long long timestampC2Start; // @synthesize timestampC2Start=_timestampC2Start;
@property(nonatomic) unsigned long long timestampC2Init; // @synthesize timestampC2Init=_timestampC2Init;
@property(retain, nonatomic) NSString *networkNegotiatedTlsProtocolVersion; // @synthesize networkNegotiatedTlsProtocolVersion=_networkNegotiatedTlsProtocolVersion;
@property(nonatomic) _Bool networkIsDiscretionary; // @synthesize networkIsDiscretionary=_networkIsDiscretionary;
@property(retain, nonatomic) NSString *networkRequestUri; // @synthesize networkRequestUri=_networkRequestUri;
@property(nonatomic) unsigned long long networkStatusCode; // @synthesize networkStatusCode=_networkStatusCode;
@property(retain, nonatomic) C2MPError *networkFatalError; // @synthesize networkFatalError=_networkFatalError;
@property(nonatomic) unsigned int networkPreviousAttemptCount; // @synthesize networkPreviousAttemptCount=_networkPreviousAttemptCount;
@property(nonatomic) unsigned long long networkResponseBodyBytesReceived; // @synthesize networkResponseBodyBytesReceived=_networkResponseBodyBytesReceived;
@property(nonatomic) unsigned int networkResponseHeaderSize; // @synthesize networkResponseHeaderSize=_networkResponseHeaderSize;
@property(nonatomic) unsigned long long networkRequestBodyBytesSent; // @synthesize networkRequestBodyBytesSent=_networkRequestBodyBytesSent;
@property(nonatomic) unsigned int networkRequestHeaderSize; // @synthesize networkRequestHeaderSize=_networkRequestHeaderSize;
@property(retain, nonatomic) NSString *networkProtocolName; // @synthesize networkProtocolName=_networkProtocolName;
@property(retain, nonatomic) NSString *networkInterfaceIdentifier; // @synthesize networkInterfaceIdentifier=_networkInterfaceIdentifier;
@property(nonatomic) _Bool networkConnectionReused; // @synthesize networkConnectionReused=_networkConnectionReused;
@property(retain, nonatomic) NSString *networkConnectionUuid; // @synthesize networkConnectionUuid=_networkConnectionUuid;
@property(retain, nonatomic) NSString *networkRemoteAddresssAndPort; // @synthesize networkRemoteAddresssAndPort=_networkRemoteAddresssAndPort;
@property(retain, nonatomic) NSString *networkHostname; // @synthesize networkHostname=_networkHostname;
@property(retain, nonatomic) NSString *networkTaskDescription; // @synthesize networkTaskDescription=_networkTaskDescription;
@property(nonatomic) unsigned long long reportFrequencyBase; // @synthesize reportFrequencyBase=_reportFrequencyBase;
@property(nonatomic) unsigned long long reportFrequency; // @synthesize reportFrequency=_reportFrequency;
@property(nonatomic) unsigned long long triggers; // @synthesize triggers=_triggers;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasOptionsDuetPreClearedMode;
@property(readonly, nonatomic) _Bool hasOptionsDiscretionaryNetworkBehavior;
@property(nonatomic) _Bool hasOptionsTlsPinningRequired;
@property(nonatomic) _Bool hasOptionsAppleIdContext;
@property(readonly, nonatomic) _Bool hasOptionsSourceApplicationSecondaryIdentifier;
@property(readonly, nonatomic) _Bool hasOptionsSourceApplicationBundleIdentifier;
@property(nonatomic) _Bool hasOptionsTimeoutIntervalForResource;
@property(nonatomic) _Bool hasOptionsTimeoutIntervalForRequest;
@property(nonatomic) _Bool hasOptionsAllowPowerNapScheduling;
@property(nonatomic) _Bool hasOptionsAllowExpensiveAccess;
@property(nonatomic) _Bool hasOptionsOutOfProcessForceDiscretionary;
@property(nonatomic) _Bool hasOptionsOutOfProcess;
@property(readonly, nonatomic) _Bool hasOptionsQualityOfService;
@property(nonatomic) _Bool hasTimestampResponseEnd;
@property(nonatomic) _Bool hasTimestampResponseStart;
@property(nonatomic) _Bool hasTimestampRequestEnd;
@property(nonatomic) _Bool hasTimestampRequestStart;
@property(nonatomic) _Bool hasTimestampSslStart;
@property(nonatomic) _Bool hasTimestampTcpEnd;
@property(nonatomic) _Bool hasTimestampTcpStart;
@property(nonatomic) _Bool hasTimestampDnsEnd;
@property(nonatomic) _Bool hasTimestampDnsStart;
@property(nonatomic) _Bool hasTimestampC2Now;
@property(nonatomic) _Bool hasTimestampC2Start;
@property(nonatomic) _Bool hasTimestampC2Init;
@property(readonly, nonatomic) _Bool hasNetworkNegotiatedTlsProtocolVersion;
@property(nonatomic) _Bool hasNetworkIsDiscretionary;
@property(readonly, nonatomic) _Bool hasNetworkRequestUri;
@property(nonatomic) _Bool hasNetworkStatusCode;
@property(readonly, nonatomic) _Bool hasNetworkFatalError;
@property(nonatomic) _Bool hasNetworkPreviousAttemptCount;
@property(nonatomic) _Bool hasNetworkResponseBodyBytesReceived;
@property(nonatomic) _Bool hasNetworkResponseHeaderSize;
@property(nonatomic) _Bool hasNetworkRequestBodyBytesSent;
@property(nonatomic) _Bool hasNetworkRequestHeaderSize;
@property(readonly, nonatomic) _Bool hasNetworkProtocolName;
@property(readonly, nonatomic) _Bool hasNetworkInterfaceIdentifier;
@property(nonatomic) _Bool hasNetworkConnectionReused;
@property(readonly, nonatomic) _Bool hasNetworkConnectionUuid;
@property(readonly, nonatomic) _Bool hasNetworkRemoteAddresssAndPort;
@property(readonly, nonatomic) _Bool hasNetworkHostname;
@property(readonly, nonatomic) _Bool hasNetworkTaskDescription;
@property(nonatomic) _Bool hasReportFrequencyBase;
@property(nonatomic) _Bool hasReportFrequency;
@property(nonatomic) _Bool hasTriggers;

@end

