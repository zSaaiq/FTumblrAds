//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMMarkupPreprocessor-Protocol.h"

@class NSArray, NSString;

@interface TMRegularExpressionStripper : NSObject <TMMarkupPreprocessor>
{
    NSArray *_regularExpressions;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *regularExpressions; // @synthesize regularExpressions=_regularExpressions;
- (id)process:(id)arg1;
- (id)init;
- (id)initWithRegularExpressions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

