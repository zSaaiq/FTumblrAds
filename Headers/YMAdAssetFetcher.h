//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, YMAdLogger;

@interface YMAdAssetFetcher : NSObject
{
    NSOperationQueue *_fetcherQueue;
    Class _connectionClass;
    YMAdLogger *_logger;
}

+ (id)createWithLogger:(id)arg1 connectionClass:(Class)arg2;
+ (id)className;
- (void).cxx_destruct;
@property(retain, nonatomic) YMAdLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) Class connectionClass; // @synthesize connectionClass=_connectionClass;
@property(retain, nonatomic) NSOperationQueue *fetcherQueue; // @synthesize fetcherQueue=_fetcherQueue;
- (void)fetchFromDisk:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (id)fetch:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (id)initWithLogger:(id)arg1 connectionClass:(Class)arg2;

@end
