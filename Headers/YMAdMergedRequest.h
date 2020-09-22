//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, YMAdManager, YMAdOptions, YMAdRequest;

@interface YMAdMergedRequest : NSObject
{
    YMAdRequest *_request;
    NSMutableArray *_associatedPendingRequests;
    NSMutableArray *_adUnitControllers;
    YMAdManager *_adManager;
    YMAdOptions *_options;
}

+ (id)createWithAdManager:(id)arg1 options:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) YMAdOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) YMAdManager *adManager; // @synthesize adManager=_adManager;
@property(retain, nonatomic) NSMutableArray *adUnitControllers; // @synthesize adUnitControllers=_adUnitControllers;
@property(retain, nonatomic) NSMutableArray *associatedPendingRequests; // @synthesize associatedPendingRequests=_associatedPendingRequests;
@property(retain, nonatomic) YMAdRequest *request; // @synthesize request=_request;
- (void)mergePendingRequest:(id)arg1;
- (_Bool)canMergePendingRequest:(id)arg1;
- (id)initWithAdManager:(id)arg1 options:(id)arg2;

@end
