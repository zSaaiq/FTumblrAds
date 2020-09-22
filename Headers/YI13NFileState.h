//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YI13NFileState : NSObject
{
    NSString *_fileName;
    NSString *_filePath;
    long long _fileUploadRetryCounter;
    long long _fileRemoveRetryCounter;
    id _task;
    unsigned long long _fileState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long fileState; // @synthesize fileState=_fileState;
@property(retain, nonatomic) id task; // @synthesize task=_task;
@property(nonatomic) long long fileRemoveRetryCounter; // @synthesize fileRemoveRetryCounter=_fileRemoveRetryCounter;
@property(nonatomic) long long fileUploadRetryCounter; // @synthesize fileUploadRetryCounter=_fileUploadRetryCounter;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (id)initWithFileName:(id)arg1 withFilePath:(id)arg2 withFileState:(unsigned long long)arg3 withFileUploadRetryCounter:(long long)arg4 withFileRemoveRetryCounter:(long long)arg5 withNetworkTask:(id)arg6;
- (id)init;

@end

