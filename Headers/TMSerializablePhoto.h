//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"
#import "TMDictionaryInitializing-Protocol.h"

@class NSArray, NSString, TMSizedPhoto;

@interface TMSerializablePhoto : NSObject <NSSecureCoding, TMDictionaryInitializing>
{
    TMSizedPhoto *_originalSize;
    NSArray *_alternateSizes;
}

+ (_Bool)supportsSecureCoding;
+ (id)smallestSizeWithMinimumWidth:(double)arg1 originalSize:(id)arg2 alternateSizes:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *alternateSizes; // @synthesize alternateSizes=_alternateSizes;
@property(readonly, nonatomic) TMSizedPhoto *originalSize; // @synthesize originalSize=_originalSize;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)smallestSizeWithMinimumWidth:(double)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (id)initWithOriginalSize:(id)arg1 alternateSizes:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

