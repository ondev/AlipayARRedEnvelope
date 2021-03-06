//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BEEPullTableController.h"

#import "AWSPopupBtnDelegate.h"
#import "AWSStockDetailFooterViewDelegate.h"
#import "SSegmentButtonViewDelegate.h"
#import "SStockDiagramViewDelegate.h"
#import "StockDetailTableHeaderViewDelegate.h"

@class APSKLaunchpad, AWSPopupWindow, AWSStockDetailCapitalCell, AWSStockDetailContainer, AWSStockDetailFooterView, AWSStockDetailMaterialCell, MSTOCKPRODStockQuoteInfo, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SDNavigationView, SSegmentButtonView, StockDetailInfoSectionView, StockDetailTableHeaderView, UIImage, UIView;

@interface AWSStockDetailViewControllerV2 : BEEPullTableController <SSegmentButtonViewDelegate, SStockDiagramViewDelegate, StockDetailTableHeaderViewDelegate, AWSStockDetailFooterViewDelegate, AWSPopupBtnDelegate>
{
    _Bool _isLoadRefresh;
    NSMutableDictionary *_loadingDict;
    NSMutableDictionary *_cacheDict;
    NSMutableDictionary *_resultDict;
    NSMutableDictionary *_statusDict;
    NSMutableArray *_sectionDefines;
    unsigned long long _readStatusAfterClose;
    UIImage *_shareImage;
    APSKLaunchpad *_pad;
    long long _currentType;
    long long _popUpType;
    SDNavigationView *_navigationView;
    NSString *_source;
    AWSStockDetailContainer *_parentContainer;
    SSegmentButtonView *_infoSegmentView;
    SSegmentButtonView *_financeSegmentView;
    StockDetailTableHeaderView *_headerView;
    MSTOCKPRODStockQuoteInfo *_stockInfo;
    StockDetailInfoSectionView *_sectionFooterForInfo;
    NSMutableDictionary *_selectedKey;
    NSDictionary *_config;
    NSMutableDictionary *_errorCells;
    NSMutableArray *_financeCells;
    NSMutableArray *_performanceCells;
    AWSStockDetailCapitalCell *_capitalCell;
    AWSStockDetailMaterialCell *_stockMaterialCell;
    AWSStockDetailFooterView *_footerView;
    UIView *_tableFooterView;
    AWSPopupWindow *_popupWindow;
}

@property(retain, nonatomic) AWSPopupWindow *popupWindow; // @synthesize popupWindow=_popupWindow;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) AWSStockDetailFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) AWSStockDetailMaterialCell *stockMaterialCell; // @synthesize stockMaterialCell=_stockMaterialCell;
@property(retain, nonatomic) AWSStockDetailCapitalCell *capitalCell; // @synthesize capitalCell=_capitalCell;
@property(retain, nonatomic) NSMutableArray *performanceCells; // @synthesize performanceCells=_performanceCells;
@property(retain, nonatomic) NSMutableArray *financeCells; // @synthesize financeCells=_financeCells;
@property(retain, nonatomic) NSMutableDictionary *errorCells; // @synthesize errorCells=_errorCells;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
@property(retain, nonatomic) NSMutableDictionary *selectedKey; // @synthesize selectedKey=_selectedKey;
@property(retain, nonatomic) StockDetailInfoSectionView *sectionFooterForInfo; // @synthesize sectionFooterForInfo=_sectionFooterForInfo;
@property(retain, nonatomic) MSTOCKPRODStockQuoteInfo *stockInfo; // @synthesize stockInfo=_stockInfo;
@property(retain, nonatomic) StockDetailTableHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) SSegmentButtonView *financeSegmentView; // @synthesize financeSegmentView=_financeSegmentView;
@property(retain, nonatomic) SSegmentButtonView *infoSegmentView; // @synthesize infoSegmentView=_infoSegmentView;
@property(nonatomic) __weak AWSStockDetailContainer *parentContainer; // @synthesize parentContainer=_parentContainer;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) SDNavigationView *navigationView; // @synthesize navigationView=_navigationView;
- (void).cxx_destruct;
- (void)stockTradeLogger:(long long)arg1;
- (void)segmentButtonLogger:(id)arg1 index:(long long)arg2 dict:(id)arg3;
- (void)sharingLaunchpadDidCancel:(id)arg1;
- (void)sharingLaunchpad:(id)arg1 didSelectChannel:(id)arg2;
- (void)gotoShare:(id)arg1;
- (id)capture;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)postScrollExplosion;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)refreshType:(id)arg1 refreshType:(unsigned long long)arg2;
- (void)segmentButtonView:(id)arg1 didSelectIndex:(unsigned long long)arg2 forModel:(id)arg3;
- (id)selectedKeyForSegmentView:(id)arg1;
- (void)refresh:(id)arg1;
- (id)popUpView:(id)arg1 btnAtIndex:(long long)arg2;
- (long long)numberOfBtnsOfPopUpView:(id)arg1;
- (void)didClickFooterView:(id)arg1 forType:(long long)arg2;
- (void)didClickFooterBtnType:(id)arg1;
- (unsigned long long)findSectionIndexByType:(id)arg1;
- (id)typeForIndexPath:(unsigned long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)errorCell:(unsigned long long)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableViewWidth;
- (id)performanceCellAtIndex:(unsigned long long)arg1;
- (id)materialCellInFinanceAtIndex:(unsigned long long)arg1;
- (void)handleTapGestureOnDiagram:(id)arg1;
- (void)addOrRemoveFavorite:(_Bool)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)loadBeganInSubType:(id)arg1 key:(id)arg2;
- (void)loadInSubType:(id)arg1 key:(id)arg2 refreshType:(unsigned long long)arg3;
- (void)loadEnded:(id)arg1 forType:(id)arg2 key:(id)arg3;
- (void)loadError:(id)arg1 forType:(id)arg2;
- (id)resultForKey:(id)arg1;
- (id)resultForType:(id)arg1 forKey:(id)arg2;
- (void)reloadSection:(long long)arg1;
- (void)AWSNewInfoSet:(id)arg1 infoArray:(id)arg2;
- (void)loadSuccess:(id)arg1 forType:(id)arg2 key:(id)arg3;
- (void)setResultDict:(id)arg1 forKey:(id)arg2;
- (id)loadDataForType:(id)arg1 key:(id)arg2 refreshType:(unsigned long long)arg3;
- (unsigned long long)statusForKey:(id)arg1;
- (void)fillStatusForKey:(id)arg1 state:(unsigned long long)arg2;
- (void)fillCacheStatusForKey:(id)arg1 state:(long long)arg2;
- (long long)loadCacheStatusForKey:(id)arg1;
- (void)saveCacheForKey:(id)arg1 andType:(id)arg2 obj:(id)arg3;
- (id)loadCacheForKey:(id)arg1 andType:(id)arg2;
- (id)loadOnlineForKey:(id)arg1;
- (void)updateCurrentStatus:(id)arg1;
- (void)loadError:(id)arg1;
- (void)updateCurrentTypeInPopUp:(id)arg1;
- (void)loadSuccess:(id)arg1;
- (id)emptyText;
- (id)busnessName;
- (void)saveToCache:(id)arg1;
- (id)cacheKey;
- (void)loadRefresh;
- (id)loadOnline;
- (id)loadCache;
- (void)loadInBackground;
- (_Bool)canRunInBackgroundModel;
- (_Bool)isValidStockInfo;
- (void)refreshTypeByConfig;
- (void)loadBegan;
- (long long)stockVerifyType;
- (void)setDisplayType:(long long)arg1;
- (void)stockWhiteList;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillFirstAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reloadDataForMarketStatusChanged;
- (void)viewDidLoad;
- (id)initWithMSTOCKPRODStockQuoteSummaryInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

