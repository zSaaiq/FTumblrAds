//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface FlurryVASTAdBuilder : NSObject
{
    NSMutableDictionary *properties;
}

- (void).cxx_destruct;
- (void)resetBuilder;
- (id)build;
- (id)withAdType:(id)arg1;
- (id)withAdSequence:(int)arg1;
- (id)withAdId:(id)arg1;
- (void)dealloc;
- (id)init;

@end
