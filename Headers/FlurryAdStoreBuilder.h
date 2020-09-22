//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FlurryAdStoreCollection, NSURLCache;
@protocol IFlurryAdStoreBlobBuilder;

@interface FlurryAdStoreBuilder : NSObject
{
    FlurryAdStoreCollection *_adStoreCollection;
    NSURLCache *_assetCache;
    long long _maxFileDownloadOperationsCounts;
    long long _maxAdRequestOperationsCount;
    id <IFlurryAdStoreBlobBuilder> _adStoreBlobBuilder;
}

@property(retain, nonatomic) id <IFlurryAdStoreBlobBuilder> adStoreBlobBuilder; // @synthesize adStoreBlobBuilder=_adStoreBlobBuilder;
@property(nonatomic) long long maxAdRequestOperationsCount; // @synthesize maxAdRequestOperationsCount=_maxAdRequestOperationsCount;
@property(nonatomic) long long maxFileDownloadOperationsCounts; // @synthesize maxFileDownloadOperationsCounts=_maxFileDownloadOperationsCounts;
@property(retain, nonatomic) NSURLCache *assetCache; // @synthesize assetCache=_assetCache;
@property(retain, nonatomic) FlurryAdStoreCollection *adStoreCollection; // @synthesize adStoreCollection=_adStoreCollection;
- (void).cxx_destruct;
- (id)build;

@end
