//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface FlurryVASTTrackingBuilder : NSObject
{
    NSMutableDictionary *properties;
}

- (void).cxx_destruct;
- (void)resetBuilder;
- (id)build;
- (id)withTrackingUrl:(id)arg1;
- (id)withTrackingEvent:(int)arg1;
- (void)dealloc;
- (id)init;

@end

