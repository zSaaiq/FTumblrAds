//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBApplicationInterfaceOrientationProvider : NSObject
{
    CDUnknownBlockType _didChangeHandler;
}

@property(copy, nonatomic) CDUnknownBlockType didChangeHandler; // @synthesize didChangeHandler=_didChangeHandler;
- (void).cxx_destruct;
- (void)statusBarOrientationDidChange:(id)arg1;
- (void)startObservingApplicationOrientation;
- (id)init;
- (void)dealloc;

@end

