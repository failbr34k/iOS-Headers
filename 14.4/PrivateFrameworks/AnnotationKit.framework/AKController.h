//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKActionController, AKAttributeController, AKFormFeatureDetectorController, AKHighlightAnnotationController, AKLegacyDoodleController, AKMainEventHandler, AKModelController, AKPageController, AKPeripheralAvailabilityManager_iOS, AKSidecarController, AKSignatureModelController, AKSparseMutableControllerArray, AKStatistics, AKTextEditorController, AKToolController, AKToolbarView, AKToolbarViewController, AKUndoController, NSArray, NSMapTable, NSString, PKToolPicker, UIView;
@protocol AKControllerDelegateProtocol, PKRulerHostingDelegate;

@interface AKController : NSObject
{
    _Bool _isUsedOnDarkBackground;
    _Bool overlayShouldPixelate;
    _Bool _isTornDown;
    _Bool _allEditingDisabled;
    _Bool _annotationEditingEnabled;
    _Bool _pencilAlwaysDraws;
    _Bool _isTestingInstance;
    _Bool _hideAllAdornments;
    _Bool _isLogging;
    _Bool _selectNewlyCreatedAnnotations;
    _Bool _shapeDetectionEnabled;
    _Bool _useHighVisibilityDefaultInks;
    _Bool __isInDFRAction;
    id <AKControllerDelegateProtocol> _delegate;
    AKModelController *_modelController;
    UIView *_toolbarView;
    unsigned long long _currentPageIndex;
    id <PKRulerHostingDelegate> _rulerHostingDelegate;
    NSString *_author;
    AKSparseMutableControllerArray *_pageControllers;
    NSMapTable *_pageModelControllersToPageControllers;
    AKActionController *_actionController;
    AKToolController *_toolController;
    AKToolbarViewController *_toolbarViewController;
    AKAttributeController *_attributeController;
    AKUndoController *_undoController;
    AKSidecarController *_sidecarController;
    AKMainEventHandler *_mainEventHandler;
    AKTextEditorController *_textEditorController;
    AKLegacyDoodleController *_legacyDoodleController;
    AKSignatureModelController *_signatureModelController;
    AKFormFeatureDetectorController *_formDetectionController;
    AKHighlightAnnotationController *_highlightAnnotationController;
    AKStatistics *_statisticsLogger;
    AKPeripheralAvailabilityManager_iOS *_peripheralAvailabilityManager;
    unsigned long long _pasteCascadingMultiplier;
    long long _lastPasteboardChangeCount;
    unsigned long long _creationCascadingMultiplier;
    AKPageController *_lastCreationCascadingPageController;
    NSArray *_cachedKeyCommands;
    double _akModelToCanvasFixedPixelScaleOfFirstEncounteredPage;
    double _screenPixelsToCanvasPixelsDownscale;
    AKToolbarView *_modernToolbarView;
}

+ (id)colorForHighlightAttributeWithTag:(long long)arg1;
+ (void)adjustAnnotationBoundsToFitText:(id)arg1;
+ (void)renderAnnotation:(id)arg1 inContext:(struct CGContext *)arg2;
+ (id)markupBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2;
+ (_Bool)_isInLowMemoryEnvironment;
+ (_Bool)hasPressureCapableHardware;
+ (_Bool)canConnectToStylus;
+ (id)akBundleIdentifier;
+ (id)akBundle;
+ (id)controllerWithDelegate:(id)arg1;
- (void).cxx_destruct;
@property(readonly) _Bool _isInDFRAction; // @synthesize _isInDFRAction=__isInDFRAction;
@property(nonatomic) _Bool useHighVisibilityDefaultInks; // @synthesize useHighVisibilityDefaultInks=_useHighVisibilityDefaultInks;
@property(nonatomic) __weak AKToolbarView *modernToolbarView; // @synthesize modernToolbarView=_modernToolbarView;
@property(nonatomic) _Bool shapeDetectionEnabled; // @synthesize shapeDetectionEnabled=_shapeDetectionEnabled;
@property(nonatomic) _Bool selectNewlyCreatedAnnotations; // @synthesize selectNewlyCreatedAnnotations=_selectNewlyCreatedAnnotations;
@property(nonatomic) _Bool isLogging; // @synthesize isLogging=_isLogging;
@property double screenPixelsToCanvasPixelsDownscale; // @synthesize screenPixelsToCanvasPixelsDownscale=_screenPixelsToCanvasPixelsDownscale;
@property double akModelToCanvasFixedPixelScaleOfFirstEncounteredPage; // @synthesize akModelToCanvasFixedPixelScaleOfFirstEncounteredPage=_akModelToCanvasFixedPixelScaleOfFirstEncounteredPage;
@property(readonly, nonatomic) NSArray *cachedKeyCommands; // @synthesize cachedKeyCommands=_cachedKeyCommands;
@property(nonatomic) _Bool hideAllAdornments; // @synthesize hideAllAdornments=_hideAllAdornments;
@property __weak AKPageController *lastCreationCascadingPageController; // @synthesize lastCreationCascadingPageController=_lastCreationCascadingPageController;
@property unsigned long long creationCascadingMultiplier; // @synthesize creationCascadingMultiplier=_creationCascadingMultiplier;
@property long long lastPasteboardChangeCount; // @synthesize lastPasteboardChangeCount=_lastPasteboardChangeCount;
@property unsigned long long pasteCascadingMultiplier; // @synthesize pasteCascadingMultiplier=_pasteCascadingMultiplier;
@property(retain) AKPeripheralAvailabilityManager_iOS *peripheralAvailabilityManager; // @synthesize peripheralAvailabilityManager=_peripheralAvailabilityManager;
@property(retain) AKStatistics *statisticsLogger; // @synthesize statisticsLogger=_statisticsLogger;
@property(retain) AKHighlightAnnotationController *highlightAnnotationController; // @synthesize highlightAnnotationController=_highlightAnnotationController;
@property(retain) AKFormFeatureDetectorController *formDetectionController; // @synthesize formDetectionController=_formDetectionController;
@property(retain) AKSignatureModelController *signatureModelController; // @synthesize signatureModelController=_signatureModelController;
@property(retain) AKLegacyDoodleController *legacyDoodleController; // @synthesize legacyDoodleController=_legacyDoodleController;
@property(retain) AKTextEditorController *textEditorController; // @synthesize textEditorController=_textEditorController;
@property(retain) AKMainEventHandler *mainEventHandler; // @synthesize mainEventHandler=_mainEventHandler;
@property(retain) AKSidecarController *sidecarController; // @synthesize sidecarController=_sidecarController;
@property(retain) AKUndoController *undoController; // @synthesize undoController=_undoController;
@property(retain) AKAttributeController *attributeController; // @synthesize attributeController=_attributeController;
@property(retain) AKToolbarViewController *toolbarViewController; // @synthesize toolbarViewController=_toolbarViewController;
@property(retain) AKToolController *toolController; // @synthesize toolController=_toolController;
@property(retain) AKActionController *actionController; // @synthesize actionController=_actionController;
@property(retain) NSMapTable *pageModelControllersToPageControllers; // @synthesize pageModelControllersToPageControllers=_pageModelControllersToPageControllers;
@property(retain) AKSparseMutableControllerArray *pageControllers; // @synthesize pageControllers=_pageControllers;
@property _Bool isTestingInstance; // @synthesize isTestingInstance=_isTestingInstance;
@property(copy) NSString *author; // @synthesize author=_author;
@property(nonatomic) __weak id <PKRulerHostingDelegate> rulerHostingDelegate; // @synthesize rulerHostingDelegate=_rulerHostingDelegate;
@property unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(nonatomic) _Bool pencilAlwaysDraws; // @synthesize pencilAlwaysDraws=_pencilAlwaysDraws;
@property(nonatomic) _Bool annotationEditingEnabled; // @synthesize annotationEditingEnabled=_annotationEditingEnabled;
@property(nonatomic) _Bool allEditingDisabled; // @synthesize allEditingDisabled=_allEditingDisabled;
@property(retain) UIView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(retain) AKModelController *modelController; // @synthesize modelController=_modelController;
@property __weak id <AKControllerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property _Bool isTornDown; // @synthesize isTornDown=_isTornDown;
@property(nonatomic) _Bool overlayShouldPixelate; // @synthesize overlayShouldPixelate;
@property(nonatomic) _Bool isUsedOnDarkBackground; // @synthesize isUsedOnDarkBackground=_isUsedOnDarkBackground;
- (void)endLogging;
- (void)beginLogging:(id)arg1 documentType:(id)arg2;
- (void)strokeAddedNotification:(id)arg1;
- (void)_pageModelControllerSelectedAnnotationsChangedNotification:(id)arg1;
- (_Bool)isPresentingPopover;
- (struct CGRect)_popoverAnchorFrameInModelForAnnotations:(id)arg1;
- (id)pageControllerForAnnotation:(id)arg1;
- (id)pageControllerForPageModelController:(id)arg1;
- (id)currentPageController;
- (id)_toolpicker_inkIdentifier;
- (void)_toolpicker_setInkIdentifier:(id)arg1;
- (id)_toolpicker_color;
- (void)_toolpicker_setColor:(id)arg1;
- (_Bool)supportForPencilAlwaysDrawsSatisfied;
- (_Bool)shouldDrawVariableStrokeDoodles;
- (_Bool)_validateCutCopyDelete;
- (void)_didReceiveMemoryWarning:(id)arg1;
@property(readonly, nonatomic) PKToolPicker *toolPicker;
@property(readonly, nonatomic) _Bool onlyDrawWithApplePencil;
- (void)removeNoteFromAnnotation:(id)arg1;
- (void)addPopupToAnnotation:(id)arg1 openPopup:(_Bool)arg2;
- (void)highlightableSelectionDidEndChanging;
- (void)highlightableSelectionWillBeginChanging;
- (void)highlightableSelectionChanged;
- (void)hideSelectionMenu:(id)arg1;
- (void)showSelectionMenu:(id)arg1;
- (_Bool)canBeginEditingTextAnnotation:(id)arg1;
- (_Bool)validateEditTextAnnotation:(id)arg1;
- (void)editTextAnnotation:(id)arg1;
- (_Bool)validateShowAttributeInspector:(id)arg1;
- (void)showAttributeInspector:(id)arg1;
- (_Bool)validateSelectAll:(id)arg1;
- (void)selectAll:(id)arg1;
- (_Bool)validateDuplicate:(id)arg1;
- (void)duplicate:(id)arg1;
- (_Bool)validateDelete:(id)arg1;
- (void)delete:(id)arg1;
- (_Bool)validatePaste:(id)arg1;
- (void)paste:(id)arg1;
- (_Bool)validateCopy:(id)arg1;
- (void)copy:(id)arg1;
- (_Bool)validateCut:(id)arg1;
- (void)cut:(id)arg1;
- (_Bool)validateRedo:(id)arg1;
- (void)redo:(id)arg1;
- (_Bool)validateUndo:(id)arg1;
- (void)undo:(id)arg1;
- (void)delayedUndoControllerSetup;
- (void)clearUndoStack;
- (void)applyCurrentCrop;
- (void)resetToDefaultToolMode;
- (void)setToolMode:(unsigned long long)arg1;
- (unsigned long long)toolMode;
- (_Bool)canPerformKeyCommandAction:(SEL)arg1 withSender:(id)arg2 handled:(_Bool *)arg3;
- (id)keyCommandsForAnnotations;
- (id)imageForToolbarButtonItemOfType:(unsigned long long)arg1;
- (id)toolbarButtonItemOfType:(unsigned long long)arg1;
- (void)_updateGestureDependencyPriority;
- (id)rotationGestureRecognizer;
- (id)panGestureRecognizer;
- (id)pressGestureRecognizer;
- (id)doubleTapGestureRecognizer;
- (id)tapGestureRecognizer;
- (_Bool)handleEvent:(id)arg1;
- (struct CGRect)contentAlignedRectForRect:(struct CGRect)arg1 onPageAtIndex:(unsigned long long)arg2;
- (double)currentModelBaseScaleFactorForPageAtIndex:(unsigned long long)arg1;
- (long long)currentExifOrientationForPageAtIndex:(unsigned long long)arg1;
- (void)reloadVisibleToolbarItemIdentifiers;
- (void)commitEditing;
- (void)renderAnnotation:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)updateOverlayViewAtIndex:(unsigned long long)arg1;
- (void)relinquishOverlayAtIndex:(unsigned long long)arg1;
- (void)prepareOverlayAtIndex:(unsigned long long)arg1;
- (_Bool)isOverlayViewLoadedAtIndex:(unsigned long long)arg1;
- (id)overlayViewAtIndex:(unsigned long long)arg1;
- (void)performActionForSender:(id)arg1;
- (_Bool)validateSender:(id)arg1;
- (void)enclosingScrollViewDidScroll:(id)arg1;
- (void)_setupPageModelController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)teardown;
- (id)initForTesting;
- (id)initWithDelegate:(id)arg1;

@end

