//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface GADGestureIdUtil : NSObject
{
    NSUserDefaults *userDefaults_;
}

+ (_Bool)isOSAtLeastMajor:(int)arg1 minor:(int)arg2 bug:(int)arg3;
+ (void)getOSMajor:(int *)arg1 minor:(int *)arg2 bugFix:(int *)arg3;
+ (id)sharedInstance;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=userDefaults_;
- (_Bool)deviceOptedOut;
- (id)deviceIdentifierType;
- (id)deviceIdentifier;
- (id)osVersion;
- (void)dealloc;
- (id)init;

@end

