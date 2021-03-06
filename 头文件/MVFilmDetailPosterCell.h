//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSMutableDictionary, NSString, UIButton, UICollectionView, UILabel, UIView;

@interface MVFilmDetailPosterCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    UILabel *_stillTitleLabel;
    UICollectionView *_collectionView;
    UIButton *_viewAllStillsButton;
    long long _previewCount;
    long long _stillCount;
    NSArray *_allList;
    unsigned long long _currentIndex;
    UIView *_collectionContentView;
    NSMutableDictionary *_moviePlayerDic;
}

@property(retain, nonatomic) NSMutableDictionary *moviePlayerDic; // @synthesize moviePlayerDic=_moviePlayerDic;
@property(nonatomic) __weak UIView *collectionContentView; // @synthesize collectionContentView=_collectionContentView;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSArray *allList; // @synthesize allList=_allList;
@property(nonatomic) long long stillCount; // @synthesize stillCount=_stillCount;
@property(nonatomic) long long previewCount; // @synthesize previewCount=_previewCount;
@property(nonatomic) __weak UIButton *viewAllStillsButton; // @synthesize viewAllStillsButton=_viewAllStillsButton;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak UILabel *stillTitleLabel; // @synthesize stillTitleLabel=_stillTitleLabel;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

