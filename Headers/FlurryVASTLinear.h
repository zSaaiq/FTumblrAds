//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FlurryVASTMediaFile, NSMutableDictionary;

@interface FlurryVASTLinear : NSObject
{
    int duration;
    int skipOffset;
    NSMutableDictionary *trackingEventDic;
    NSMutableDictionary *videoClickDic;
    FlurryVASTMediaFile *_mediaFile;
}

+ (int)trackingEventStringToEnum:(id)arg1;
+ (id)trackingEventEnumToString:(int)arg1;
@property(retain, nonatomic) FlurryVASTMediaFile *mediaFile; // @synthesize mediaFile=_mediaFile;
@property(retain, nonatomic) NSMutableDictionary *videoClickDic; // @synthesize videoClickDic;
@property(retain, nonatomic) NSMutableDictionary *trackingEventDic; // @synthesize trackingEventDic;
@property(nonatomic) int skipOffset; // @synthesize skipOffset;
@property(nonatomic) int duration; // @synthesize duration;
- (void).cxx_destruct;

@end

