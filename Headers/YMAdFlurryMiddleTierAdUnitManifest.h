//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YMAdMiddleTierAdUnitManifest.h"

@class NSString;

@interface YMAdFlurryMiddleTierAdUnitManifest : YMAdMiddleTierAdUnitManifest
{
    NSString *_displayType;
    NSString *_layoutType;
}

+ (id)parseFlurryAdList:(id)arg1;
+ (id)parseDisplayTypeFromFlurryAdList:(id)arg1;
+ (id)createWithFlurryAdList:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *layoutType; // @synthesize layoutType=_layoutType;
@property(copy, nonatomic) NSString *displayType; // @synthesize displayType=_displayType;
- (id)initWithFlurryAdList:(id)arg1;

@end

