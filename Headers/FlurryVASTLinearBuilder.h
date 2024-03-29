//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface FlurryVASTLinearBuilder : NSObject
{
    NSMutableDictionary *properties;
    NSMutableDictionary *videoClickDic;
    NSMutableDictionary *trackingEventBuilderDic;
}

@property(retain, nonatomic) NSMutableDictionary *trackingEventBuilderDic; // @synthesize trackingEventBuilderDic;
- (void).cxx_destruct;
- (void)resetBuilder;
- (id)build:(id)arg1;
- (id)withLinearMediaFile:(id)arg1;
- (id)withLinearVideoClick:(id)arg1 andUrl:(id)arg2;
- (id)withLinearTrackingEventMap:(id)arg1;
- (id)withLinearSkipOffset:(int)arg1;
- (id)withLinearDuration:(int)arg1;
- (void)dealloc;
- (id)init;

@end

