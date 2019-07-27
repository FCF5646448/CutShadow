#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.0.1 (swiftlang-1001.0.82.4 clang-1001.0.46.5)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="SideMenu",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



@class UISideMenuNavigationController;
@class UIView;
@class UIScreenEdgePanGestureRecognizer;
enum PresentDirection : NSInteger;
@class UIPanGestureRecognizer;

SWIFT_CLASS("_TtC8SideMenu15SideMenuManager")
@interface SideMenuManager : NSObject
/// Default instance of SideMenuManager.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong, getter=default) SideMenuManager * _Nonnull default_;)
+ (SideMenuManager * _Nonnull)default SWIFT_WARN_UNUSED_RESULT;
/// Default instance of SideMenuManager (objective-C).
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SideMenuManager * _Nonnull defaultManager;)
+ (SideMenuManager * _Nonnull)defaultManager SWIFT_WARN_UNUSED_RESULT;
/// The left menu.
@property (nonatomic, strong) UISideMenuNavigationController * _Nullable leftMenuNavigationController;
/// The right menu.
@property (nonatomic, strong) UISideMenuNavigationController * _Nullable rightMenuNavigationController;
/// Adds screen edge gestures for both left and right sides to a view to present a menu.
/// \param toView The view to add gestures to.
///
///
/// returns:
/// The array of screen edge gestures added to <code>toView</code>.
- (NSArray<UIScreenEdgePanGestureRecognizer *> * _Nonnull)addScreenEdgePanGesturesToPresentToView:(UIView * _Nonnull)view;
/// Adds screen edge gestures to a view to present a menu.
/// \param toView The view to add gestures to.
///
/// \param forMenu The menu (left or right) you want to add a gesture for.
///
///
/// returns:
/// The screen edge gestures added to <code>toView</code>.
- (UIScreenEdgePanGestureRecognizer * _Nonnull)addScreenEdgePanGesturesToPresentToView:(UIView * _Nonnull)view forMenu:(enum PresentDirection)side;
/// Adds a pan edge gesture to a view to present menus.
/// \param toView The view to add a pan gesture to.
///
///
/// returns:
/// The pan gesture added to <code>toView</code>.
- (UIPanGestureRecognizer * _Nonnull)addPanGestureToPresentToView:(UIView * _Nonnull)view;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, PresentDirection, closed) {
  PresentDirectionLeft = 1,
  PresentDirectionRight = 0,
};







enum SideMenuPushStyle : NSInteger;
@class UIColor;

@interface SideMenuManager (SWIFT_EXTENSION(SideMenu))
@property (nonatomic, strong) UISideMenuNavigationController * _Nullable menuLeftNavigationController SWIFT_DEPRECATED_MSG("", "leftMenuNavigationController");
@property (nonatomic, strong) UISideMenuNavigationController * _Nullable menuRightNavigationController SWIFT_DEPRECATED_MSG("", "rightMenuNavigationController");
@property (nonatomic) enum SideMenuPushStyle menuPushStyle SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) BOOL menuAllowPushOfSameClassTwice SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) CGFloat menuWidth SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) double menuAnimationPresentDuration SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) double menuAnimationDismissDuration SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) double menuAnimationCompleteGestureDuration SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) CGFloat menuAnimationFadeStrength SWIFT_DEPRECATED_MSG("This property has been moved to the SideMenuPresentationStyle class.");
@property (nonatomic) CGFloat menuAnimationTransformScaleFactor SWIFT_DEPRECATED_MSG("This property has been moved to the SideMenuPresentationStyle class.");
@property (nonatomic, strong) UIColor * _Nullable menuAnimationBackgroundColor SWIFT_DEPRECATED_MSG("This property has been moved to the SideMenuPresentationStyle class.");
@property (nonatomic) float menuShadowOpacity SWIFT_DEPRECATED_MSG("This property has been moved to the SideMenuPresentationStyle class.");
@property (nonatomic, strong) UIColor * _Nonnull menuShadowColor SWIFT_DEPRECATED_MSG("This property has been moved to the SideMenuPresentationStyle class.");
@property (nonatomic) CGFloat menuShadowRadius SWIFT_DEPRECATED_MSG("This property has been moved to the SideMenuPresentationStyle class.");
@property (nonatomic) BOOL menuPresentingViewControllerUserInteractionEnabled SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) NSInteger menuParallaxStrength SWIFT_DEPRECATED_MSG("This property has been moved to the SideMenuPresentationStyle class.");
@property (nonatomic) BOOL menuFadeStatusBar SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) UIViewAnimationOptions menuAnimationOptions SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) UIViewAnimationCurve menuAnimationCompletionCurve SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) CGFloat menuAnimationUsingSpringWithDamping SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) CGFloat menuAnimationInitialSpringVelocity SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) BOOL menuDismissOnPush SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) BOOL menuAlwaysAnimate SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) BOOL menuDismissWhenBackgrounded SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic, weak) UIPanGestureRecognizer * _Nullable menuLeftSwipeToDismissGesture SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic, weak) UIPanGestureRecognizer * _Nullable menuRightSwipeToDismissGesture SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) BOOL menuEnableSwipeGestures SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
- (UIPanGestureRecognizer * _Nonnull)menuAddPanGestureToPresentToView:(UIView * _Nonnull)view SWIFT_DEPRECATED_MSG("", "addPanGestureToPresentToView:");
@end

typedef SWIFT_ENUM(NSInteger, SideMenuPushStyle, closed) {
  SideMenuPushStyleDefault = 0,
  SideMenuPushStylePopWhenPossible = 1,
  SideMenuPushStylePreserve = 2,
  SideMenuPushStylePreserveAndHideBackButton = 3,
  SideMenuPushStyleReplace = 4,
  SideMenuPushStyleSubMenu = 5,
};



@class NSBundle;
@class NSCoder;
@protocol UIViewControllerTransitionCoordinator;
@class UIViewController;
@protocol UIViewControllerTransitioningDelegate;

SWIFT_CLASS("_TtC8SideMenu30UISideMenuNavigationController")
@interface UISideMenuNavigationController : UINavigationController
@property (nonatomic, strong) SideMenuManager * _Nonnull sideMenuManager;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)awakeFromNib;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
- (void)viewWillLayoutSubviews;
- (void)pushViewController:(UIViewController * _Nonnull)viewController animated:(BOOL)animated;
@property (nonatomic, strong) id <UIViewControllerTransitioningDelegate> _Nullable transitioningDelegate;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController SWIFT_UNAVAILABLE;
@end





@protocol UIViewControllerAnimatedTransitioning;
@protocol UIViewControllerInteractiveTransitioning;

@interface UISideMenuNavigationController (SWIFT_EXTENSION(SideMenu)) <UIViewControllerTransitioningDelegate>
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForPresentedController:(UIViewController * _Nonnull)presented presentingController:(UIViewController * _Nonnull)presenting sourceController:(UIViewController * _Nonnull)source SWIFT_WARN_UNUSED_RESULT;
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForDismissedController:(UIViewController * _Nonnull)dismissed SWIFT_WARN_UNUSED_RESULT;
- (id <UIViewControllerInteractiveTransitioning> _Nullable)interactionControllerForPresentation:(id <UIViewControllerAnimatedTransitioning> _Nonnull)animator SWIFT_WARN_UNUSED_RESULT;
- (id <UIViewControllerInteractiveTransitioning> _Nullable)interactionControllerForDismissal:(id <UIViewControllerAnimatedTransitioning> _Nonnull)animator SWIFT_WARN_UNUSED_RESULT;
@end




@interface UISideMenuNavigationController (SWIFT_EXTENSION(SideMenu))
@property (nonatomic) BOOL allowPushOfSameClassTwice;
@property (nonatomic) BOOL alwaysAnimate;
@property (nonatomic) UIViewAnimationOptions animationOptions;
@property (nonatomic) double completeGestureDuration;
@property (nonatomic) UIViewAnimationCurve completionCurve;
@property (nonatomic) double dismissDuration;
@property (nonatomic) BOOL dismissOnPresent;
@property (nonatomic) BOOL dismissOnPush;
@property (nonatomic) BOOL dismissOnRotation;
@property (nonatomic) BOOL dismissWhenBackgrounded;
@property (nonatomic) BOOL enableSwipeGestures;
@property (nonatomic) CGFloat initialSpringVelocity;
/// Whether the menu appears on the right or left side of the screen. Right is the default. This property cannot be changed after the menu has loaded.
@property (nonatomic) BOOL leftSide;
@property (nonatomic) CGFloat menuWidth;
@property (nonatomic) BOOL presentingViewControllerUserInteractionEnabled;
@property (nonatomic) BOOL presentingViewControllerUseSnapshot;
@property (nonatomic) double presentDuration;
@property (nonatomic) enum SideMenuPushStyle pushStyle;
@property (nonatomic) CGFloat statusBarEndAlpha;
@property (nonatomic) CGFloat usingSpringWithDamping;
@end


SWIFT_PROTOCOL("_TtP8SideMenu38UISideMenuNavigationControllerDelegate_")
@protocol UISideMenuNavigationControllerDelegate
@optional
- (void)sideMenuWillAppearWithMenu:(UISideMenuNavigationController * _Nonnull)menu animated:(BOOL)animated;
- (void)sideMenuDidAppearWithMenu:(UISideMenuNavigationController * _Nonnull)menu animated:(BOOL)animated;
- (void)sideMenuWillDisappearWithMenu:(UISideMenuNavigationController * _Nonnull)menu animated:(BOOL)animated;
- (void)sideMenuDidDisappearWithMenu:(UISideMenuNavigationController * _Nonnull)menu animated:(BOOL)animated;
@end


SWIFT_CLASS("_TtC8SideMenu22UITableViewVibrantCell")
@interface UITableViewVibrantCell : UITableViewCell
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end





#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#elif defined(__ARM_ARCH_7A__) && __ARM_ARCH_7A__
// Generated by Apple Swift version 5.0.1 (swiftlang-1001.0.82.4 clang-1001.0.46.5)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="SideMenu",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



@class UISideMenuNavigationController;
@class UIView;
@class UIScreenEdgePanGestureRecognizer;
enum PresentDirection : NSInteger;
@class UIPanGestureRecognizer;

SWIFT_CLASS("_TtC8SideMenu15SideMenuManager")
@interface SideMenuManager : NSObject
/// Default instance of SideMenuManager.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong, getter=default) SideMenuManager * _Nonnull default_;)
+ (SideMenuManager * _Nonnull)default SWIFT_WARN_UNUSED_RESULT;
/// Default instance of SideMenuManager (objective-C).
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SideMenuManager * _Nonnull defaultManager;)
+ (SideMenuManager * _Nonnull)defaultManager SWIFT_WARN_UNUSED_RESULT;
/// The left menu.
@property (nonatomic, strong) UISideMenuNavigationController * _Nullable leftMenuNavigationController;
/// The right menu.
@property (nonatomic, strong) UISideMenuNavigationController * _Nullable rightMenuNavigationController;
/// Adds screen edge gestures for both left and right sides to a view to present a menu.
/// \param toView The view to add gestures to.
///
///
/// returns:
/// The array of screen edge gestures added to <code>toView</code>.
- (NSArray<UIScreenEdgePanGestureRecognizer *> * _Nonnull)addScreenEdgePanGesturesToPresentToView:(UIView * _Nonnull)view;
/// Adds screen edge gestures to a view to present a menu.
/// \param toView The view to add gestures to.
///
/// \param forMenu The menu (left or right) you want to add a gesture for.
///
///
/// returns:
/// The screen edge gestures added to <code>toView</code>.
- (UIScreenEdgePanGestureRecognizer * _Nonnull)addScreenEdgePanGesturesToPresentToView:(UIView * _Nonnull)view forMenu:(enum PresentDirection)side;
/// Adds a pan edge gesture to a view to present menus.
/// \param toView The view to add a pan gesture to.
///
///
/// returns:
/// The pan gesture added to <code>toView</code>.
- (UIPanGestureRecognizer * _Nonnull)addPanGestureToPresentToView:(UIView * _Nonnull)view;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, PresentDirection, closed) {
  PresentDirectionLeft = 1,
  PresentDirectionRight = 0,
};







enum SideMenuPushStyle : NSInteger;
@class UIColor;

@interface SideMenuManager (SWIFT_EXTENSION(SideMenu))
@property (nonatomic, strong) UISideMenuNavigationController * _Nullable menuLeftNavigationController SWIFT_DEPRECATED_MSG("", "leftMenuNavigationController");
@property (nonatomic, strong) UISideMenuNavigationController * _Nullable menuRightNavigationController SWIFT_DEPRECATED_MSG("", "rightMenuNavigationController");
@property (nonatomic) enum SideMenuPushStyle menuPushStyle SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) BOOL menuAllowPushOfSameClassTwice SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) CGFloat menuWidth SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) double menuAnimationPresentDuration SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) double menuAnimationDismissDuration SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) double menuAnimationCompleteGestureDuration SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) CGFloat menuAnimationFadeStrength SWIFT_DEPRECATED_MSG("This property has been moved to the SideMenuPresentationStyle class.");
@property (nonatomic) CGFloat menuAnimationTransformScaleFactor SWIFT_DEPRECATED_MSG("This property has been moved to the SideMenuPresentationStyle class.");
@property (nonatomic, strong) UIColor * _Nullable menuAnimationBackgroundColor SWIFT_DEPRECATED_MSG("This property has been moved to the SideMenuPresentationStyle class.");
@property (nonatomic) float menuShadowOpacity SWIFT_DEPRECATED_MSG("This property has been moved to the SideMenuPresentationStyle class.");
@property (nonatomic, strong) UIColor * _Nonnull menuShadowColor SWIFT_DEPRECATED_MSG("This property has been moved to the SideMenuPresentationStyle class.");
@property (nonatomic) CGFloat menuShadowRadius SWIFT_DEPRECATED_MSG("This property has been moved to the SideMenuPresentationStyle class.");
@property (nonatomic) BOOL menuPresentingViewControllerUserInteractionEnabled SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) NSInteger menuParallaxStrength SWIFT_DEPRECATED_MSG("This property has been moved to the SideMenuPresentationStyle class.");
@property (nonatomic) BOOL menuFadeStatusBar SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) UIViewAnimationOptions menuAnimationOptions SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) UIViewAnimationCurve menuAnimationCompletionCurve SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) CGFloat menuAnimationUsingSpringWithDamping SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) CGFloat menuAnimationInitialSpringVelocity SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) BOOL menuDismissOnPush SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) BOOL menuAlwaysAnimate SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) BOOL menuDismissWhenBackgrounded SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic, weak) UIPanGestureRecognizer * _Nullable menuLeftSwipeToDismissGesture SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic, weak) UIPanGestureRecognizer * _Nullable menuRightSwipeToDismissGesture SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
@property (nonatomic) BOOL menuEnableSwipeGestures SWIFT_DEPRECATED_MSG("This property has been moved to the UISideMenuNavigationController class.");
- (UIPanGestureRecognizer * _Nonnull)menuAddPanGestureToPresentToView:(UIView * _Nonnull)view SWIFT_DEPRECATED_MSG("", "addPanGestureToPresentToView:");
@end

typedef SWIFT_ENUM(NSInteger, SideMenuPushStyle, closed) {
  SideMenuPushStyleDefault = 0,
  SideMenuPushStylePopWhenPossible = 1,
  SideMenuPushStylePreserve = 2,
  SideMenuPushStylePreserveAndHideBackButton = 3,
  SideMenuPushStyleReplace = 4,
  SideMenuPushStyleSubMenu = 5,
};



@class NSBundle;
@class NSCoder;
@protocol UIViewControllerTransitionCoordinator;
@class UIViewController;
@protocol UIViewControllerTransitioningDelegate;

SWIFT_CLASS("_TtC8SideMenu30UISideMenuNavigationController")
@interface UISideMenuNavigationController : UINavigationController
@property (nonatomic, strong) SideMenuManager * _Nonnull sideMenuManager;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)awakeFromNib;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
- (void)viewWillLayoutSubviews;
- (void)pushViewController:(UIViewController * _Nonnull)viewController animated:(BOOL)animated;
@property (nonatomic, strong) id <UIViewControllerTransitioningDelegate> _Nullable transitioningDelegate;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController SWIFT_UNAVAILABLE;
@end





@protocol UIViewControllerAnimatedTransitioning;
@protocol UIViewControllerInteractiveTransitioning;

@interface UISideMenuNavigationController (SWIFT_EXTENSION(SideMenu)) <UIViewControllerTransitioningDelegate>
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForPresentedController:(UIViewController * _Nonnull)presented presentingController:(UIViewController * _Nonnull)presenting sourceController:(UIViewController * _Nonnull)source SWIFT_WARN_UNUSED_RESULT;
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForDismissedController:(UIViewController * _Nonnull)dismissed SWIFT_WARN_UNUSED_RESULT;
- (id <UIViewControllerInteractiveTransitioning> _Nullable)interactionControllerForPresentation:(id <UIViewControllerAnimatedTransitioning> _Nonnull)animator SWIFT_WARN_UNUSED_RESULT;
- (id <UIViewControllerInteractiveTransitioning> _Nullable)interactionControllerForDismissal:(id <UIViewControllerAnimatedTransitioning> _Nonnull)animator SWIFT_WARN_UNUSED_RESULT;
@end




@interface UISideMenuNavigationController (SWIFT_EXTENSION(SideMenu))
@property (nonatomic) BOOL allowPushOfSameClassTwice;
@property (nonatomic) BOOL alwaysAnimate;
@property (nonatomic) UIViewAnimationOptions animationOptions;
@property (nonatomic) double completeGestureDuration;
@property (nonatomic) UIViewAnimationCurve completionCurve;
@property (nonatomic) double dismissDuration;
@property (nonatomic) BOOL dismissOnPresent;
@property (nonatomic) BOOL dismissOnPush;
@property (nonatomic) BOOL dismissOnRotation;
@property (nonatomic) BOOL dismissWhenBackgrounded;
@property (nonatomic) BOOL enableSwipeGestures;
@property (nonatomic) CGFloat initialSpringVelocity;
/// Whether the menu appears on the right or left side of the screen. Right is the default. This property cannot be changed after the menu has loaded.
@property (nonatomic) BOOL leftSide;
@property (nonatomic) CGFloat menuWidth;
@property (nonatomic) BOOL presentingViewControllerUserInteractionEnabled;
@property (nonatomic) BOOL presentingViewControllerUseSnapshot;
@property (nonatomic) double presentDuration;
@property (nonatomic) enum SideMenuPushStyle pushStyle;
@property (nonatomic) CGFloat statusBarEndAlpha;
@property (nonatomic) CGFloat usingSpringWithDamping;
@end


SWIFT_PROTOCOL("_TtP8SideMenu38UISideMenuNavigationControllerDelegate_")
@protocol UISideMenuNavigationControllerDelegate
@optional
- (void)sideMenuWillAppearWithMenu:(UISideMenuNavigationController * _Nonnull)menu animated:(BOOL)animated;
- (void)sideMenuDidAppearWithMenu:(UISideMenuNavigationController * _Nonnull)menu animated:(BOOL)animated;
- (void)sideMenuWillDisappearWithMenu:(UISideMenuNavigationController * _Nonnull)menu animated:(BOOL)animated;
- (void)sideMenuDidDisappearWithMenu:(UISideMenuNavigationController * _Nonnull)menu animated:(BOOL)animated;
@end


SWIFT_CLASS("_TtC8SideMenu22UITableViewVibrantCell")
@interface UITableViewVibrantCell : UITableViewCell
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end





#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#endif
