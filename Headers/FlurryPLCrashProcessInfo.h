//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FlurryPLCrashProcessInfo : NSObject
{
    int _processID;
    NSString *_processName;
    int _parentProcessID;
    struct timeval _startTime;
    _Bool _traced;
}

+ (id)currentProcessInfo;
@property(readonly, nonatomic) struct timeval startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic, getter=isTraced) _Bool traced; // @synthesize traced=_traced;
@property(readonly, nonatomic) int parentProcessID; // @synthesize parentProcessID=_parentProcessID;
@property(readonly, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(readonly, nonatomic) int processID; // @synthesize processID=_processID;
- (void)dealloc;
- (id)initWithProcessID:(int)arg1;

@end

