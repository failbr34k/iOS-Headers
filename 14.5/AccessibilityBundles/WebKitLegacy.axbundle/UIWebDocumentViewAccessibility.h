//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/__UIWebDocumentViewAccessibility_super.h>

@interface UIWebDocumentViewAccessibility : __UIWebDocumentViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)handleKeyWebEvent:(id)arg1;
- (id)_accessibilitySpeakThisString;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (long long)accessibilityContainerType;
- (_Bool)_accessibilityIsScrollAncestor;
- (_Bool)_accessibilityScrollToFrame:(struct CGRect)arg1 forView:(id)arg2;
- (_Bool)_accessibilityIsWebDocumentView;
- (_Bool)_accessibilityMimicsTextInputResponder;
- (struct CGRect)_accessibilityContentFrame;
- (id)accessibilityElements;
- (_Bool)isAccessibilityElement;
- (void)dealloc;
- (id)_accessibilityResponderElement;
- (id)_accessibilityRootObject;
- (id)_accessibilityDocumentView;
- (_Bool)shouldGroupAccessibilityChildren;
- (_Bool)_accessibilityIsFirstElementForFocus;
- (id)_accessibilityAttributedValueForRange:(struct _NSRange *)arg1;
- (_Bool)accessibilityScrollLeftPage;
- (_Bool)accessibilityScrollRightPage;
- (_Bool)accessibilityScrollDownPage;
- (_Bool)accessibilityScrollUpPage;
- (void)clearSelection;
- (id)_accessibilityScrollStatus;
- (id)accessibilityLabel;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint)arg1;
- (_Bool)_accessibilityScrollingEnabled;
- (id)_accessibilityEquivalenceTag;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (id)_accessibilitySupplementaryHeaderViews;
- (void)_showTextStyleOptions:(id)arg1;
- (_Bool)_accessibilityHasTextOperations;
- (void)setSelectedTextRange:(id)arg1;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint)arg1;
- (void)accessibilityZoomInAtPoint:(struct CGPoint)arg1;
- (void)_accessibilityZoomAtPoint:(struct CGPoint)arg1 zoomIn:(_Bool)arg2;
- (void)_axZoomToCenterWithScale:(struct CGPoint)arg1 scale:(double)arg2;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)setSelectedDOMRange:(id)arg1 affinity:(unsigned long long)arg2;
- (void)webView:(id)arg1 willShowFullScreenForPlugInView:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)stopLoading:(id)arg1;

@end

