//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMPostParameters.h"

@class NSString;

@interface TMQuotePostParameters : TMPostParameters
{
    NSString *_quote;
    NSString *_source;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *quote; // @synthesize quote=_quote;
- (id)init;
- (id)dictionaryRepresentation;
- (void)fillWithPostValues:(id)arg1;

@end

