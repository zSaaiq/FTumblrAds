//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBAdConnectionInfo : NSObject
{
}

+ (unsigned long long)statusForReachabilityFlags:(unsigned int)arg1;
+ (unsigned long long)currentReachabilityStatus;
+ (unsigned long long)currentConnectionSubtype;
+ (id)currentCellularConnection;
+ (unsigned long long)currentConnectionType;
+ (unsigned long long)typeFromSubtype:(unsigned long long)arg1;
+ (void)initialize;

@end

