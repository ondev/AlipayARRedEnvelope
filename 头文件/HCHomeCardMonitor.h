//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HCMonitorVCProtocol.h"

@class NSMutableArray, NSMutableSet, NSString;

@interface HCHomeCardMonitor : NSObject <HCMonitorVCProtocol>
{
    NSMutableArray *_exposureCards;
    NSMutableSet *_historyCardIds;
}

@property(retain, nonatomic) NSMutableSet *historyCardIds; // @synthesize historyCardIds=_historyCardIds;
@property(retain, nonatomic) NSMutableArray *exposureCards; // @synthesize exposureCards=_exposureCards;
- (void).cxx_destruct;
- (void)viewController:(id)arg1 didDisappear:(_Bool)arg2;
- (void)addExposureCards:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

