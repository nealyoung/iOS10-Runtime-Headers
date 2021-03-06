/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonTableViewDataSource : NSObject <ABPersonCellLayoutManagerDelegate, ABPrimaryValueDelegate, UITableViewDataSourcePrivate, UITableViewDelegate> {
    ABActionsController * _actionsController;
    ABPersonTableViewActionsDelegate * _actionsDelegate;
    struct __CFSet { } * _addNewValueProperties;
    struct __CFSet { } * _addNewValuePropertiesStore;
    NSMutableArray * _additionalLabels;
    struct __CFArray { } * _additionalProperties;
    void * _addressBook;
    bool  _allowsActions;
    bool  _allowsAddToFavorites;
    bool  _allowsConferencing;
    bool  _allowsDeletion;
    bool  _allowsEditing;
    bool  _allowsSendingTextMessage;
    bool  _allowsSharing;
    bool  _allowsSounds;
    bool  _allowsVibrations;
    bool  _attemptDelayedBecomeFirstResponder;
    bool  _badgeEmailPropertiesForMailVIP;
    NSDictionary * _cachedKeyboardInfo;
    ABPersonCellLayoutManager * _cellLayoutManager;
    int  _customKeyboardOutDirection;
    UIView * _customPersonTableFooterView;
    UIView * _customPersonTableHeaderView;
    <ABPersonTableViewDataSourceDelegate> * _delegate;
    struct __CFArray { } * _displayedProperties;
    NSMutableArray * _editablePropertyGroups;
    ABPersonTableFooterView * _footerView;
    ABPersonTableHeaderView * _headerView;
    int  _highlightedValueIdentifier;
    bool  _highlightedValueIsImportant;
    int  _highlightedValueProperty;
    bool  _ignoreVibrationsDidChangeNotification;
    ABPersonTableViewImageDataDelegate * _imageDataDelegate;
    id  _insertionLabel;
    int  _insertionProperty;
    id  _insertionValue;
    bool  _isEditing;
    bool  _isEndingEditingTransactions;
    bool  _isPinningLocked;
    bool  _isSettingFirstResponder;
    bool  _isUnlinkingPerson;
    ABMultiCellContentView * _lastActiveMultiCellContentView;
    NSIndexPath * _lastActiveMultiCellIndexPath;
    double  _lastReturnedHeaderHeight;
    ABPersonTableViewLinkingDelegate * _linkingDelegate;
    ABLabelViewWithVariablePositioning * _linkingHeaderView;
    ABPersonTableViewMultiCellDelegate * _multiCellContentViewDelegate;
    ABMultiCellContentView * _multiCellContentViewForWillEndEditing;
    struct __CFDictionary { } * _multiCellContentViewsByCustomCell;
    ABNamePropertyGroup * _namePropertyGroup;
    UILabel * _noValueLabel;
    UIView * _notesHeaderView;
    struct __CFArray { } * _optionalProperties;
    UITableViewCell * _partiallySelectedCell;
    NSArray * _people;
    ABPersonPickersDelegate * _pickersDelegate;
    ABMultiCellContentView * _pinningMultiCellContentViewAlternate;
    NSIndexPath * _pinningMultiCellIndexPath;
    NSIndexPath * _pinningMultiCellRelativeIndexPath;
    UIResponder * _pinningResponder;
    ABUIPerson * _preinsertedPerson;
    int  _primaryProperty;
    NSMutableArray * _propertyGroups;
    NSMutableDictionary * _propertyGroupsStore;
    bool  _selectedPropertyForCellWithoutLabelDivider;
    ABPersonTableViewSharingDelegate * _sharingDelegate;
    bool  _shouldShowContactSourcesStringAsMessage;
    <ABStyleProvider> * _styleProvider;
    UIView * _tableHeaderViewContainer;
    ABPersonTableView * _tableView;
    NSMutableDictionary * _unusedPropertyGroupsStore;
    bool  _viewControllerWillSlideOut;
}

@property (nonatomic, readonly) ABPersonTableViewActionsDelegate *actionsDelegate;
@property (nonatomic, retain) NSMutableArray *additionalLabels;
@property (nonatomic) void*addressBook;
@property (nonatomic) bool allowsActions;
@property (nonatomic) bool allowsAddToFavorites;
@property (nonatomic) bool allowsConferencing;
@property (nonatomic) bool allowsDeletion;
@property (nonatomic) bool allowsEditing;
@property (nonatomic) bool allowsSendingTextMessage;
@property (nonatomic) bool allowsSharing;
@property (nonatomic) bool allowsSounds;
@property (nonatomic) bool allowsVibrations;
@property (nonatomic, copy) NSString *alternateName;
@property (nonatomic, readonly) NSString *attribution;
@property (getter=isAttributionEnabled, nonatomic, readonly) bool attributionEnabled;
@property (nonatomic) bool badgeEmailPropertiesForMailVIP;
@property (nonatomic, readonly) bool canSave;
@property (nonatomic) int customKeyboardOutDirection;
@property (nonatomic, retain) UIView *customMessageView;
@property (nonatomic, retain) UIView *customPersonTableFooterView;
@property (nonatomic, retain) UIView *customPersonTableHeaderView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ABPersonTableViewDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct __CFArray { }*displayedProperties;
@property (getter=isEditing, nonatomic) bool editing;
@property (nonatomic, readonly) bool hasChanges;
@property (nonatomic, readonly) bool hasImageChanges;
@property (nonatomic, readonly) bool hasNameChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic) int highlightedValueIdentifier;
@property (nonatomic) bool highlightedValueIsImportant;
@property (nonatomic) int highlightedValueProperty;
@property (nonatomic) bool ignoreVibrationsDidChangeNotification;
@property (nonatomic, readonly) ABPersonTableViewImageDataDelegate *imageDataDelegate;
@property (nonatomic, readonly) id insertionLabel;
@property (nonatomic, readonly) int insertionProperty;
@property (nonatomic, readonly) id insertionValue;
@property (nonatomic, readonly) bool isEndingEditingTransactions;
@property (nonatomic, readonly) bool isPinning;
@property (nonatomic) bool isSettingFirstResponder;
@property (nonatomic, retain) ABMultiCellContentView *lastActiveMultiCellContentView;
@property (nonatomic, retain) NSIndexPath *lastActiveMultiCellIndexPath;
@property (nonatomic, readonly) ABPersonTableViewLinkingDelegate *linkingDelegate;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *messageDetail;
@property (nonatomic, retain) UIFont *messageDetailFont;
@property (nonatomic, retain) UIFont *messageFont;
@property (nonatomic, readonly) ABPersonTableViewMultiCellDelegate *multiCellContentViewDelegate;
@property (nonatomic, retain) ABMultiCellContentView *multiCellContentViewForWillEndEditing;
@property (nonatomic, retain) UITableViewCell *partiallySelectedCell;
@property (nonatomic, retain) NSArray *people;
@property (nonatomic, retain) UIView *personHeaderView;
@property (nonatomic, readonly) ABPersonImageView *personImageView;
@property (nonatomic, readonly) ABPersonPickersDelegate *pickersDelegate;
@property (nonatomic, retain) ABMultiCellContentView *pinningMultiCellContentViewAlternate;
@property (nonatomic, retain) NSIndexPath *pinningMultiCellIndexPath;
@property (nonatomic, retain) NSIndexPath *pinningMultiCellRelativeIndexPath;
@property (nonatomic, retain) UIResponder *pinningResponder;
@property (nonatomic, readonly) int primaryProperty;
@property (nonatomic) bool selectedPropertyForCellWithoutLabelDivider;
@property (nonatomic, readonly) ABPersonTableViewSharingDelegate *sharingDelegate;
@property (nonatomic) bool shouldAlignPersonHeaderViewToImage;
@property (nonatomic) bool shouldShowContactSourcesStringAsMessage;
@property (nonatomic, retain) <ABStyleProvider> *styleProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ABPersonTableFooterView *tableFooterView;
@property (nonatomic, retain) ABPersonTableHeaderView *tableHeaderView;
@property (nonatomic, retain) ABPersonTableView *tableView;
@property (nonatomic) bool viewControllerWillSlideOut;

- (void)_conferenceHistoryChanged:(id)arg1;
- (id)_contactSourcesString;
- (void*)_copyDefaultPolicy:(void*)arg1;
- (void)_endTableViewUpdatesWithoutScroll;
- (void)_enumerateContextPointersForProperty:(int)arg1 usingBlock:(id /* block */)arg2;
- (id)_footerView;
- (void)_getDataProvider:(id*)arg1 andInfo:(id*)arg2 forIndexPath:(id)arg3;
- (void)_getFirstRows:(id*)arg1 andOtherRows:(id*)arg2 fromIndexPaths:(id)arg3;
- (void)_getPropertyGroup:(id*)arg1 index:(long long*)arg2 editableFlag:(bool*)arg3 atIndexPath:(id)arg4;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;
- (id)_indexPathForHeaderViewRow:(unsigned long long)arg1;
- (id)_indexPathForPropertyGroup:(id)arg1 index:(long long)arg2 editableFlag:(bool)arg3;
- (bool)_isReadonlyAtIndexPath:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_linkingHeaderView;
- (id)_multiCellContentViewForCustomPropertyCell:(id)arg1;
- (id)_notesHeaderView;
- (void)_performVibrationRelatedChangesReloadingFromModel:(bool)arg1 updatingDataUsingBlock:(id /* block */)arg2;
- (void)_registerForKeyboardNotifications;
- (void)_registerForVibrationsChangedNotifications;
- (void)_resetAddNewValueCells;
- (long long)_sectionIndexForPropertyGroup:(id)arg1 orProperty:(int)arg2 propertyGroupContext:(void*)arg3 withPropertyGroups:(id)arg4 whenEditing:(bool)arg5;
- (void)_setMultiCellContentView:(id)arg1 forCustomPropertyCell:(id)arg2;
- (void)_unregisterForKeyboardNotifications;
- (void)_unregisterForVibrationsChangedNotifications;
- (void)_updateBackgroundForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateCellsForDataProvider:(id)arg1 afterDeleteAtIndex:(long long)arg2 isInsertionIndex:(bool)arg3 inTableView:(id)arg4;
- (void)_updateDeleteButtonIfNeededForFooterView:(id)arg1;
- (void)_updateTableForVibrationChanges;
- (id)actionCellForTableView:(id)arg1 withReuseIdentifier:(id)arg2 isConference:(bool)arg3 hasCustomContent:(bool)arg4;
- (id)actionsController;
- (id)actionsDelegate;
- (void)addFieldCellSelected:(id)arg1;
- (void)addFieldCellWillSelect:(id)arg1;
- (void)addToContactsButtonClicked:(id)arg1;
- (id)addValueCellForTableView:(id)arg1 withReuseIdentifier:(id)arg2;
- (id)additionalLabels;
- (struct __CFArray { }*)additionalProperties;
- (void*)addressBook;
- (void)adjustTableViewForKeyboardInfo:(id)arg1 animated:(bool)arg2;
- (bool)allowsActions;
- (bool)allowsAddToFavorites;
- (bool)allowsConferencing;
- (bool)allowsDeletion;
- (bool)allowsEditing;
- (bool)allowsFaceTimeFavorite;
- (bool)allowsSendingTextMessage;
- (bool)allowsSharing;
- (bool)allowsSounds;
- (bool)allowsVibrations;
- (bool)allowsVoiceFavorite;
- (id)alternateName;
- (id)attribution;
- (bool)badgeEmailPropertiesForMailVIP;
- (void)beginPinning;
- (bool)canSave;
- (bool)canSelectLabelForPropertyGroup:(id)arg1 info:(id)arg2;
- (void)cancelPinning;
- (id)cellLayoutManager;
- (id)controllerMainView;
- (int)customKeyboardOutDirection;
- (id)customMessageView;
- (id)customPersonTableFooterView;
- (id)customPersonTableHeaderView;
- (void)dealloc;
- (id)delegate;
- (void)deleteButtonClicked:(id)arg1;
- (struct __CFArray { }*)displayedProperties;
- (id)displayedPropertyGroupForProperty:(int)arg1 context:(void*)arg2 whenEditing:(bool)arg3;
- (long long)editingSectionForNonEditingSection:(long long)arg1;
- (void)endEditingTransactions;
- (void)endPinning;
- (bool)hasChanges;
- (bool)hasImageChanges;
- (bool)hasNameChanges;
- (bool)hasOnlyRingtoneChanges;
- (void)headerFooterAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (int)highlightedValueIdentifier;
- (bool)highlightedValueIsImportant;
- (int)highlightedValueProperty;
- (id)ieTableViewCellForPropertyGroup:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3 editing:(bool)arg4 allowDequeing:(bool)arg5 tag:(long long*)arg6;
- (bool)ignoreVibrationsDidChangeNotification;
- (id)imageDataDelegate;
- (void)indexOfFirstPropertyGroupSection:(long long*)arg1 lastPropertyGroupSection:(long long*)arg2 addFieldSection:(long long*)arg3 linkingUISection:(long long*)arg4 primaryPropertyActionsSection:(long long*)arg5 topGroupingActionSection:(long long*)arg6 bottomGroupingActionSection:(long long*)arg7 cardActionsSection:(long long*)arg8 cardActionsSectionCount:(long long*)arg9 totalSectionCount:(long long*)arg10 whenEditing:(bool)arg11;
- (long long)indexOfLinkingUISectionWhenEditing:(bool)arg1;
- (id)init;
- (id)insertionLabel;
- (int)insertionProperty;
- (id)insertionValue;
- (void)invalidateAdditionalProperties;
- (void)invalidateAllPropertyGroups;
- (void)invalidatePropertyGroupsForEditing:(bool)arg1;
- (bool)isAttributionEnabled;
- (bool)isEditing;
- (bool)isEndingEditingTransactions;
- (bool)isInFullEditingMode;
- (bool)isPinning;
- (bool)isPropertyDisplayed:(int)arg1;
- (bool)isPropertyOptional:(int)arg1;
- (bool)isSettingFirstResponder;
- (bool)isUnlinkingPersonWithAnimation;
- (id)lastActiveMultiCellContentView;
- (id)lastActiveMultiCellIndexPath;
- (id)linkedCardCellForTableView:(id)arg1 withReuseIdentifier:(id)arg2;
- (id)linkingDelegate;
- (double)marginForTableView:(id)arg1;
- (id)message;
- (id)messageDetail;
- (id)messageDetailFont;
- (id)messageFont;
- (id)multiCellContentViewDelegate;
- (id)multiCellContentViewForWillEndEditing;
- (id)namePropertyGroup;
- (id)namePropertyGroup:(id)arg1 primaryValueForProperty:(int)arg2;
- (id)newAccessoryViewWhenEditing:(bool)arg1 forDataProvider:(id)arg2 info:(id)arg3;
- (struct __CFArray { }*)newAdditionalProperties;
- (id)newHeaderView;
- (id)newPropertyGroupsForEditing:(bool)arg1;
- (id)newPropertyGroupsForEditing:(bool)arg1 withDisplayedProperties:(struct __CFArray { }*)arg2;
- (id)noValueLabel;
- (void)notifyDataWasReloaded;
- (void)notifyHeaderViewHeightDidChange;
- (long long)numberOfRowsInSection:(long long)arg1 whenEditing:(bool)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)numberOfSectionsWhenEditing:(bool)arg1;
- (id)partiallySelectedCell;
- (id)people;
- (bool)personCellLayoutManager:(id)arg1 isCellInFullEditMode:(id)arg2;
- (id)personHeaderView;
- (id)personImageView;
- (id)pickersDelegate;
- (id)pinningMultiCellContentViewAlternate;
- (id)pinningMultiCellIndexPath;
- (id)pinningMultiCellRelativeIndexPath;
- (id)pinningResponder;
- (id)prepareForLinkingUIUpdate;
- (void)prepareView;
- (void)presentRelatedNamesPicker:(id)arg1;
- (int)primaryProperty;
- (void)propertyGroup:(id*)arg1 orActions:(id*)arg2 forSection:(long long)arg3 whenEditing:(bool)arg4;
- (id)propertyGroupForProperty:(int)arg1 context:(void*)arg2;
- (id)propertyGroupForProperty:(int)arg1 context:(void*)arg2 createIfEmpty:(bool)arg3;
- (id)propertyGroupsForEditing:(bool)arg1;
- (id)realHeaderView;
- (void)reloadConferencing;
- (void)reloadData;
- (void)reloadDataIncludingHeaderView:(bool)arg1;
- (void)reloadDataIncludingHeaderView:(bool)arg1 invalidatePropertyData:(bool)arg2;
- (void)reloadDeleteButton;
- (void)reloadFavoritesData;
- (void)reloadImageData;
- (void)reloadNameData;
- (void)reloadNoValueLabelAnimated:(bool)arg1;
- (void)reloadPreferredPersonForName;
- (void)reloadPropertyGroups;
- (void)resetPropertyGroupStores;
- (long long)rowIndexInPropertyGroup:(id*)arg1 orActions:(id*)arg2 forRow:(long long)arg3 inSection:(long long)arg4 whenEditing:(bool)arg5;
- (void)scrollToLastActiveEntryFieldAnimated:(bool)arg1;
- (void)scrollToLastActiveEntryFieldAnimated:(bool)arg1 becomeFirstResponder:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)sectionAnimationsDictionaryForEditing:(bool)arg1;
- (id)sectionAnimationsDictionaryForOriginalPropertyGroups:(id)arg1 newPropertyGroups:(id)arg2 whenEditing:(bool)arg3;
- (id)sectionAnimationsDictionaryForSwipeToDeleteAtIndexPath:(id)arg1;
- (long long)sectionIndexForProperty:(int)arg1 propertyGroupContext:(void*)arg2 withPropertyGroups:(id)arg3 whenEditing:(bool)arg4;
- (long long)sectionIndexForPropertyGroup:(id)arg1 withPropertyGroups:(id)arg2 whenEditing:(bool)arg3;
- (void)selectCustomPartWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 occupiedCorners:(unsigned long long)arg2 forCell:(id)arg3;
- (void)selectLabelPartForCell:(id)arg1;
- (void)selectValuePartForCell:(id)arg1;
- (void)selectWholePartForCell:(id)arg1;
- (bool)selectedPropertyForCellWithoutLabelDivider;
- (void)setAdditionalLabels:(id)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setAllowsActions:(bool)arg1;
- (void)setAllowsAddToFavorites:(bool)arg1;
- (void)setAllowsAddToFavorites:(bool)arg1 andReload:(bool)arg2;
- (void)setAllowsConferencing:(bool)arg1;
- (void)setAllowsConferencing:(bool)arg1 andReload:(bool)arg2;
- (void)setAllowsDeletion:(bool)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setAllowsSendingTextMessage:(bool)arg1;
- (void)setAllowsSendingTextMessage:(bool)arg1 andReload:(bool)arg2;
- (void)setAllowsSharing:(bool)arg1;
- (void)setAllowsSharing:(bool)arg1 andReload:(bool)arg2;
- (void)setAllowsSounds:(bool)arg1;
- (void)setAllowsVibrations:(bool)arg1;
- (void)setAlternateName:(id)arg1;
- (void)setAttribution:(id)arg1 enabled:(bool)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)setBadgeEmailPropertiesForMailVIP:(bool)arg1;
- (void)setCustomKeyboardOutDirection:(int)arg1;
- (void)setCustomMessageView:(id)arg1;
- (void)setCustomPersonTableFooterView:(id)arg1;
- (void)setCustomPersonTableHeaderView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedProperties:(struct __CFArray { }*)arg1;
- (void)setDisplayedProperties:(struct __CFArray { }*)arg1 andRefreshUI:(bool)arg2;
- (void)setEditing:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(bool)arg4;
- (void)setHighlightedValueIdentifier:(int)arg1;
- (void)setHighlightedValueIsImportant:(bool)arg1;
- (void)setHighlightedValueProperty:(int)arg1;
- (void)setIgnoreVibrationsDidChangeNotification:(bool)arg1;
- (void)setInsertionLabel:(id)arg1;
- (void)setInsertionProperty:(int)arg1 value:(id)arg2 label:(id)arg3;
- (void)setInsertionValue:(id)arg1;
- (void)setIsSettingFirstResponder:(bool)arg1;
- (void)setLastActiveMultiCellContentView:(id)arg1;
- (void)setLastActiveMultiCellIndexPath:(id)arg1;
- (void)setLinkingDelegate:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setMultiCellContentViewForWillEndEditing:(id)arg1;
- (void)setPartiallySelectedCell:(id)arg1;
- (void)setPeople:(id)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (void)setPinningMultiCellContentViewAlternate:(id)arg1;
- (void)setPinningMultiCellIndexPath:(id)arg1;
- (void)setPinningMultiCellRelativeIndexPath:(id)arg1;
- (void)setPinningResponder:(id)arg1;
- (void)setPrimaryProperty:(int)arg1 countryCode:(id)arg2;
- (void)setSelectedPropertyForCellWithoutLabelDivider:(bool)arg1;
- (void)setShouldAlignPersonHeaderViewToImage:(bool)arg1;
- (void)setShouldShowContactSourcesStringAsMessage:(bool)arg1;
- (void)setShouldUseAddNewValueCell:(bool)arg1 forProperty:(int)arg2;
- (void)setStyleProvider:(id)arg1;
- (void)setTableHeaderView:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setViewControllerWillSlideOut:(bool)arg1;
- (id)sharingDelegate;
- (bool)shouldAlignPersonHeaderViewToImage;
- (bool)shouldShowContactSourcesStringAsMessage;
- (bool)shouldUseAddNewValueCellForProperty:(int)arg1;
- (void)showLinkedCardAtRow:(long long)arg1;
- (void)sizeToFit;
- (id)styleProvider;
- (void)swapAddNewValueCellForProperty:(int)arg1 atIndexPath:(id)arg2;
- (id)tableFooterView;
- (id)tableHeaderView;
- (id)tableHeaderViewContainer;
- (id)tableView;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 cell:(id*)arg2 orTag:(long long*)arg3 forRowAtIndexPath:(id)arg4 allowDequeing:(bool)arg5;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (bool)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableViewAddFieldUpdateAnimationsDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)tableViewCellForActions:(id)arg1 tableView:(id)arg2 row:(long long)arg3 editing:(bool)arg4 allowDequeing:(bool)arg5 tag:(long long*)arg6;
- (long long)tableViewRowAnimationForUpdateAction:(unsigned long long)arg1 isFirstRow:(bool)arg2;
- (id)titleForNoValueWithProperty:(int)arg1;
- (void)unselectAllCellParts;
- (void)updateByAddingFieldForProperty:(int)arg1 whenEditing:(bool)arg2;
- (void)updateCellEditingStyleAtIndexPath:(id)arg1;
- (void)updateContactSourcesStringIfNeeded;
- (void)updateForConferencingAvailabilityChange;
- (void)updateHeadersAndFootersForEditing:(bool)arg1 animated:(bool)arg2;
- (void)updateLinkingUI:(id)arg1;
- (void)updateRecord;
- (void)updateSectionHeaderAndFooterHeightsForEditing:(bool)arg1;
- (void)updateTableFooterViewAnimated:(bool)arg1;
- (void)updateTableHeaderViewAnimated:(bool)arg1;
- (void)updateTableHeaderViewAnimated:(bool)arg1 andSkipTableViewHeaderHeightNotification:(bool)arg2;
- (bool)usesAddNewValueCellForProperty:(int)arg1;
- (void)valueAtIndex:(long long)arg1 selectedForPropertyGroup:(id)arg2 withMemberCell:(id)arg3 forEditing:(bool)arg4;
- (bool)viewControllerWillSlideOut;
- (id)viewForFooterInTableView:(id)arg1;
- (id)viewForHeaderInTableView:(id)arg1;

@end
