/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKSearchBarView : UICollectionReusableView <UISearchBarDelegate> {
    <UISearchBarDelegate> *_delegate;
    float _leadingMargin;
    GKSearchBar *_searchBar;
    NSArray *_searchBarConstraints;
    float _trailingMargin;
    NSNumber *_usePadConstraints;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UISearchBarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) float leadingMargin;
@property (nonatomic, retain) GKSearchBar *searchBar;
@property (nonatomic, retain) NSArray *searchBarConstraints;
@property (readonly) Class superclass;
@property (nonatomic) float trailingMargin;
@property (nonatomic) NSNumber *usePadConstraints;

+ (float)defaultHeight;
+ (void)initialize;
+ (BOOL)requiresConstraintBasedLayout;

- (void)applyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)establishSearchBarConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)leadingMargin;
- (void)prepareForReuse;
- (id)searchBar;
- (id)searchBarConstraints;
- (void)setDelegate:(id)arg1;
- (void)setLeadingMargin:(float)arg1;
- (void)setSearchBar:(id)arg1;
- (void)setSearchBarConstraints:(id)arg1;
- (void)setTrailingMargin:(float)arg1;
- (void)setUsePadConstraints:(id)arg1;
- (float)trailingMargin;
- (void)updateConstraints;
- (id)usePadConstraints;

@end