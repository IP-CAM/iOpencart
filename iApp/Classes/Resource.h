//
//  Resource.h
//  iCart
//
//  Created by icoco7 on 5/21/14.
//  Copyright (c) 2014 icocosoftware. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifdef DEBUG
 
#else
#define NSLog(...)

#endif

extern  NSString* NotifyEventCommpleteAddCart ;

extern  NSString* NotifyEventCommpleteUpdateCart;

@interface Resource : NSObject


+(UIColor*) getStandardColor;
 
+ (NSString*)getBaseURLString;

+ (BOOL)isVersion2;

+ (NSString*)getIndexURLString;

+ (NSString*)getCategoriesURLString;

+ (NSString*)getProductsURLString; 

+ (NSString*)getSearchProductsURLString;

+ (NSString*)getLoginURLString;

+ (NSString*)getCartURLString;

+ (NSString*)getAddCartURLString;

+ (NSString*)getCheckoutCartURLString;

+ (NSString*)getSavePaymentAddressURLString;

+ (NSString*)getSaveShippingAddressURLString;

+ (NSString*)getSaveShippingMethodURLString;

+ (NSString*)getSavePaymentMethodURLString;

+ (NSString*)getPaymentConfirmURLString;

+ (NSString*)getCheckoutSuccessURLString;

+ (NSString*)getLogoutURLString;

+ (RKMappingResult*)parseData2Result:(NSData*)data;

+ (NSArray*)getImagesDefsFromProductResult:(NSDictionary*)dict;

+ (void) assginImageWithSource:(UIImageView*)target  source:(NSString*)source;

+ (void)storeUserAccountInfo:(NSDictionary*) dict;

+ (NSDictionary*)loadUserAccountInfo;

+ (void)showRestResponseErrorMessage:(NSDictionary*)response;

+ (void)notifyCartUpdate:(NSString*)count;
@end
