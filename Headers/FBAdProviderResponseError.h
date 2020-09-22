//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBAdProviderResponse.h"

@class FBAdPlacementDefinition, NSString;

@interface FBAdProviderResponseError : FBAdProviderResponse
{
    NSString *_errorMessage;
    long long _errorCode;
    FBAdPlacementDefinition *_adPlacementDefinition;
}

@property(retain, nonatomic) FBAdPlacementDefinition *adPlacementDefinition; // @synthesize adPlacementDefinition=_adPlacementDefinition;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
- (void).cxx_destruct;
- (id)initWithErrorMessage:(id)arg1 withErrorCode:(long long)arg2 withPlacementDefinition:(id)arg3;

@end

