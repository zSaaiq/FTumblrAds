//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "YMAdAssetFetcherOperation-Protocol.h"

@class NSMutableData, NSString, NSURLRequest, NSURLResponse, RTURLConnection;

@interface YMAdAssetFetcherOperation : NSOperation <YMAdAssetFetcherOperation>
{
    _Bool _ended;
    NSURLRequest *_fetchRequest;
    CDUnknownBlockType _endBlock;
    RTURLConnection *_fetchConnection;
    Class _connectionClass;
    NSURLResponse *_latestResponse;
    NSMutableData *_data;
}

+ (id)createForURL:(id)arg1 endBlock:(CDUnknownBlockType)arg2 connectionClass:(Class)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURLResponse *latestResponse; // @synthesize latestResponse=_latestResponse;
@property(nonatomic) _Bool ended; // @synthesize ended=_ended;
@property(retain, nonatomic) Class connectionClass; // @synthesize connectionClass=_connectionClass;
@property(retain) RTURLConnection *fetchConnection; // @synthesize fetchConnection=_fetchConnection;
@property(copy, nonatomic) CDUnknownBlockType endBlock; // @synthesize endBlock=_endBlock;
@property(retain, nonatomic) NSURLRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
- (_Bool)assignHTTPErrors:(id *)arg1;
- (void)end:(_Bool)arg1 error:(id)arg2;
- (void)cancel;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)asynchronous;
- (void)start;
- (id)initWithRequest:(id)arg1 endBlock:(CDUnknownBlockType)arg2 connectionClass:(Class)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

