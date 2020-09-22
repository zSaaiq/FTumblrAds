//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSURL;

@interface TMCoreDataStoreFileLocator : NSObject
{
    NSURL *_URL;
    NSURL *_directoryURL;
    NSFileManager *_fileManager;
}

+ (_Bool)removeItemAtURL:(id)arg1 fileManager:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (_Bool)remove;
- (_Bool)createIntermediateDirectoriesIfNeeded;
@property(readonly, nonatomic) _Bool exists;
- (id)initWithParentDirectoryURL:(id)arg1 fileManager:(id)arg2;
- (id)init;

@end

