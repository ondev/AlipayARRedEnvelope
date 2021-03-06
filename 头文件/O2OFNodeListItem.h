//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VZListItem.h"

#import "VZFNodeProvider.h"

@class NSString, VZFNodeListItemRecycler, VZFluxStore;

@interface O2OFNodeListItem : VZListItem <VZFNodeProvider>
{
    _Bool _asyncDisplay;
    VZFluxStore *_store;
    VZFNodeListItemRecycler *_recycler;
}

+ (id)nodeForItem:(id)arg1 Store:(id)arg2 Context:(id)arg3;
@property(retain, nonatomic) VZFNodeListItemRecycler *recycler; // @synthesize recycler=_recycler;
@property(nonatomic) _Bool asyncDisplay; // @synthesize asyncDisplay=_asyncDisplay;
@property(retain, nonatomic) VZFluxStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)detachFromView;
- (void)attachToView:(id)arg1;
- (void)updateState;
- (void)updateModel:(id)arg1 constrainedSize:(struct CGSize)arg2 context:(id)arg3;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) float itemWidth;
- (float)itemHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

