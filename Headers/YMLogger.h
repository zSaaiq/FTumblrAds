//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface YMLogger : NSObject
{
}

+ (id)logDescriptionBasedOnLogLevel:(unsigned long long)arg1;
+ (void)logLevel:(unsigned long long)arg1 file:(char *)arg2 methodName:(id)arg3 lineNumber:(int)arg4 format:(id)arg5;
+ (void)setCurrentLogLevel:(unsigned long long)arg1;

@end
