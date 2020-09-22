//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, NSURL;

@interface CLSMachOBinary : NSObject
{
    NSURL *_url;
    struct CLSMachOFile _file;
    NSMutableArray *_slices;
    NSString *_instanceIdentifier;
}

+ (id)hashNSString:(id)arg1;
+ (id)MachOBinaryWithPath:(id)arg1;
@property(readonly, nonatomic) NSArray *slices; // @synthesize slices=_slices;
- (void).cxx_destruct;
- (id)sliceForArchitecture:(id)arg1;
- (void)enumerateUUIDs:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *instanceIdentifier;
@property(readonly, copy, nonatomic) NSString *path;
@property(readonly, copy, nonatomic) NSURL *URL;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end
