//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol IFlurryAdInteractor, IFlurryAdPresenter, IFlurryAdRouter;

@protocol IFlurryAdPresenterBuilder <NSObject>
@property(retain, nonatomic) id <IFlurryAdRouter> adRouter;
@property(retain, nonatomic) id <IFlurryAdInteractor> adInteractor;
- (id <IFlurryAdPresenter>)buildPresenter;
@end

