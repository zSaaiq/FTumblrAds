//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSMachOBinary, NSBundle, NSString, NSURL;

@interface CLSdSYM : NSObject
{
    CLSMachOBinary *_binary;
    NSBundle *_bundle;
}

+ (id)dSYMWithURL:(id)arg1;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, nonatomic) CLSMachOBinary *binary; // @synthesize binary=_binary;
- (void).cxx_destruct;
- (void)enumerateUUIDs:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *shortBundleVersion;
@property(readonly, copy, nonatomic) NSString *bundleVersion;
@property(readonly, copy, nonatomic) NSString *executablePath;
@property(readonly, copy, nonatomic) NSURL *executableURL;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
- (id)initWithURL:(id)arg1;

@end

