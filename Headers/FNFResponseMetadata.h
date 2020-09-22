//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString, NSURL;

@interface FNFResponseMetadata : NSObject
{
    BOOL _replicaNumber;
    int _instanceKey;
    long long _actualBandwidth;
    unsigned long long _bytesCached;
    long long _bytesDownloaded;
    unsigned long long _durationMS;
    unsigned long long _startTimeMs;
    unsigned long long _ttfbMs;
    unsigned long long _ttlbMs;
    unsigned long long _prefetchReadDurationMs;
    unsigned long long _cacheReadDurationMs;
    long long _cacheReadStartTimeMs;
    long long _cacheReadEndTimeMs;
    unsigned long long _bytesFromPrefetchCache;
    unsigned long long _prefetchBytesRequested;
    unsigned long long _prefetchBytesReceived;
    NSString *_eTag;
    NSError *_error;
    NSURL *_originalURL;
    unsigned long long _failoverResponseCode;
}

@property(readonly, nonatomic) unsigned long long failoverResponseCode; // @synthesize failoverResponseCode=_failoverResponseCode;
@property(readonly, copy, nonatomic) NSURL *originalURL; // @synthesize originalURL=_originalURL;
@property(readonly, nonatomic) BOOL replicaNumber; // @synthesize replicaNumber=_replicaNumber;
@property(readonly, nonatomic) int instanceKey; // @synthesize instanceKey=_instanceKey;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSString *eTag; // @synthesize eTag=_eTag;
@property(readonly, nonatomic) unsigned long long prefetchBytesReceived; // @synthesize prefetchBytesReceived=_prefetchBytesReceived;
@property(readonly, nonatomic) unsigned long long prefetchBytesRequested; // @synthesize prefetchBytesRequested=_prefetchBytesRequested;
@property(readonly, nonatomic) unsigned long long bytesFromPrefetchCache; // @synthesize bytesFromPrefetchCache=_bytesFromPrefetchCache;
@property(readonly, nonatomic) long long cacheReadEndTimeMs; // @synthesize cacheReadEndTimeMs=_cacheReadEndTimeMs;
@property(readonly, nonatomic) long long cacheReadStartTimeMs; // @synthesize cacheReadStartTimeMs=_cacheReadStartTimeMs;
@property(readonly, nonatomic) unsigned long long cacheReadDurationMs; // @synthesize cacheReadDurationMs=_cacheReadDurationMs;
@property(readonly, nonatomic) unsigned long long prefetchReadDurationMs; // @synthesize prefetchReadDurationMs=_prefetchReadDurationMs;
@property(readonly, nonatomic) unsigned long long ttlbMs; // @synthesize ttlbMs=_ttlbMs;
@property(readonly, nonatomic) unsigned long long ttfbMs; // @synthesize ttfbMs=_ttfbMs;
@property(readonly, nonatomic) unsigned long long startTimeMs; // @synthesize startTimeMs=_startTimeMs;
@property(readonly, nonatomic) unsigned long long durationMS; // @synthesize durationMS=_durationMS;
@property(readonly, nonatomic) long long bytesDownloaded; // @synthesize bytesDownloaded=_bytesDownloaded;
@property(readonly, nonatomic) unsigned long long bytesCached; // @synthesize bytesCached=_bytesCached;
@property(readonly, nonatomic) long long actualBandwidth; // @synthesize actualBandwidth=_actualBandwidth;
- (void).cxx_destruct;
- (_Bool)hasError;
- (id)initWithMetadataDictionary:(id)arg1;

@end

