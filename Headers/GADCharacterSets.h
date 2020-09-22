//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet;
@protocol OS_dispatch_queue;

@interface GADCharacterSets : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSCharacterSet *_characterDelimitedSet;
    NSCharacterSet *_spaceDelimitedSet;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)updateCharacterSets;
@property(readonly, copy) NSCharacterSet *spaceDelimitedSet;
@property(readonly, copy) NSCharacterSet *characterDelimitedSet;
- (id)init;

@end

