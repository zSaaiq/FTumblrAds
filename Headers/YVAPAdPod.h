//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface YVAPAdPod : NSObject
{
    NSHashTable *_ads;
    double _duration;
}

+ (id)emptyAdPod;
- (void).cxx_destruct;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSHashTable *ads; // @synthesize ads=_ads;

@end
