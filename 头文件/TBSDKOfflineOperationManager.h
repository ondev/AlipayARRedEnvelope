//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBSDKOfflineOperationManager : NSObject
{
    int currentNetworkStatus;
}

+ (id)getInstance;
@property int currentNetworkStatus; // @synthesize currentNetworkStatus;
- (void)networkChanged:(id)arg1;
- (_Bool)doOffline:(id)arg1;
- (_Bool)submit:(id)arg1;
- (_Bool)tryOffline:(id)arg1;
- (_Bool)isHasNetworkConnection;
- (void)subscribueNetworkEvent;
- (id)init;

@end

