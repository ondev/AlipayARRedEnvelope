//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WWTableController.h"

@class ACAppManager, NSArray;

@interface WWPersonalViewController : WWTableController
{
    NSArray *_categoryArray;
    _Bool _isFirstIn;
    ACAppManager *_appManager;
}

+ (id)memeberGradeText:(id)arg1;
@property(retain, nonatomic) ACAppManager *appManager; // @synthesize appManager=_appManager;
- (void).cxx_destruct;
- (id)appInfoInSection:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)combineRpcResult:(id)arg1 withAcAppArray:(id)arg2;
- (id)emptyText;
- (void)loadSuccess:(id)arg1;
- (id)loadOnline;
- (void)loadOpenPlatformFromACNofication:(id)arg1;
- (void)dealloc;
- (id)customNavigationBarBackButtonImage;
- (id)customNavigationBarBackButtonTitleColor;
- (id)customNavigationBarTitleColor;
- (id)opaqueNavigationBarColor;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)loadOnAppear;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView;
- (void)viewDidLoad;
- (id)init;

@end

