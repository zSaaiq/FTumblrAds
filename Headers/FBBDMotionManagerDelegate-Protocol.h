//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FBBDMotionManagerDelegate <NSObject>
- (double)timeEpsilon;
- (double)minimumMagneticFieldDelta;
- (double)magnetometerUpdatesInterval;
- (double)minimumAccelerationDelta;
- (double)accelerometerUpdatesInterval;
- (double)minimumRotationRateDelta;
- (double)gyroUpdatesInterval;
- (_Bool)isOffsite;
- (int)signalFlagsFor:(int)arg1;
- (long long)biometricSignalsBufferCapacity;
@end

