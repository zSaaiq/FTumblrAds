//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBAdLogger : NSObject
{
}

+ (void)setLogger:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)logger;
+ (void)logInTestModeWithFile:(const char *)arg1 lineNumber:(int)arg2 format:(id)arg3;
+ (void)logAtLevel:(int)arg1 file:(const char *)arg2 lineNumber:(int)arg3 format:(id)arg4;
+ (void)initialize;

@end

