//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface FBSDKMonitorStore : NSObject
{
    _Bool _skipDiskCheck;
    NSURL *_filePath;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool skipDiskCheck; // @synthesize skipDiskCheck=_skipDiskCheck;
@property(nonatomic) __weak NSURL *filePath; // @synthesize filePath=_filePath;
- (id)retrieveEntries;
- (void)persist:(id)arg1;
- (void)clear;
- (id)initWithFilename:(id)arg1;

@end
