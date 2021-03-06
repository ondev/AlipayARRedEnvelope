//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NBPluginBase.h"

#import "AUSearchBarDelegate.h"
#import "AUSearchTitleViewDelegate.h"

@class AUSearchTitleView, H5WebViewController, NSString;

@interface Plugin4SearchBar : NBPluginBase <AUSearchBarDelegate, AUSearchTitleViewDelegate>
{
    H5WebViewController *_weakVC;
    AUSearchTitleView *_searchTitleView;
}

@property(nonatomic) __weak AUSearchTitleView *searchTitleView; // @synthesize searchTitleView=_searchTitleView;
@property(nonatomic) __weak H5WebViewController *weakVC; // @synthesize weakVC=_weakVC;
- (void).cxx_destruct;
- (void)didPressedTitleView:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)p_handleNaviSearchBarSuccess:(CDUnknownBlockType)arg1 callback:(CDUnknownBlockType)arg2;
- (void)handleNaviSearchBarDisable:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)handleNaviSearchBarEnable:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)handleNaviSearchBarGet:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)handleNaviSearchBarSet:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)handleNaviSearchBarBlur:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)handleNaviSearchBarFocus:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)handleNaviSearchBarHide:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)handleNaviSearchBarShow:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)addJSApis;
- (void)handleEvent:(id)arg1;
- (void)pluginDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

