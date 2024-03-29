//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IFlurryStreamFileManager <NSObject>
- (_Bool)isFilePresentAtPath:(NSString *)arg1;
- (_Bool)truncateFileAtPath:(NSString *)arg1;
- (_Bool)removeItemAtPath:(NSString *)arg1;
- (_Bool)copyFileFrom:(NSString *)arg1 toPath:(NSString *)arg2;
- (_Bool)createIfNotPresentDirectoryAtPath:(NSString *)arg1;
- (_Bool)createFileAtPath:(NSString *)arg1;
@end

