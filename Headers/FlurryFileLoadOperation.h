//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FlurryLoadOperation.h"

@class NSData, NSError, NSSet, NSString, NSURL;
@protocol FlurryContentLoadOperationDelegate;

@interface FlurryFileLoadOperation : FlurryLoadOperation
{
    _Bool isFromCache;
    _Bool executing;
    _Bool finished;
    id <FlurryContentLoadOperationDelegate> delegate;
    NSString *resourceId;
    NSURL *assetUrl;
    double inceptionTime;
    double startTime;
    NSError *operationError_;
    NSSet *tags;
    NSData *fileData_;
    double endTime_;
}

@property(nonatomic) double endTime; // @synthesize endTime=endTime_;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=fileData_;
@property(nonatomic) _Bool finished; // @synthesize finished;
@property(nonatomic) _Bool executing; // @synthesize executing;
- (void)setIsFromCache:(_Bool)arg1;
- (_Bool)isFromCache;
@property(retain, nonatomic) NSSet *tags; // @synthesize tags;
@property(retain, nonatomic) NSError *operationError; // @synthesize operationError=operationError_;
@property(nonatomic) double startTime; // @synthesize startTime;
@property(nonatomic) double inceptionTime; // @synthesize inceptionTime;
- (void)setAssetUrl:(id)arg1;
- (id)assetUrl;
- (void)setResourceId:(id)arg1;
- (id)resourceId;
@property(retain, nonatomic) id <FlurryContentLoadOperationDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)executeLoading;
- (void)start;
- (id)initWithAssetName:(id)arg1 withUrlString:(id)arg2 withExpiryTime:(double)arg3 withTags:(id)arg4 delegate:(id)arg5 withSavePath:(id)arg6;

@end

